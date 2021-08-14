#include <QDesktopWidget>
#include <QWidget>
#include <QListWidgetItem>
#include <QDir>
#include <QDebug>
#include <QtXml>
#include <QFileDialog>
#include <QMessageBox>

#include "ProjectItem.h"
#include "../NewProject/NewProject.h"

#include "ProjectManager.h"
#include "ui_ProjectManager.h"

ProjectManager::ProjectManager(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::ProjectManager) {
  ui->setupUi(this);

  // Set window at center of screen
  QRect screenGeometry = QApplication::desktop()->screenGeometry();
  int x = (screenGeometry.width() - this->width()) / 2;
  int y = (screenGeometry.height() - this->height()) / 2;
  this->move(x, y);

  // Load projects
  QDir directory("/home/jpdante/Desktop/Projects/");
  if (directory.exists()) {
    QStringList projects = directory.entryList(QDir::Dirs | QDir::NoDotAndDotDot, QDir::Name);
    foreach (QString projectName, projects) {
      QDir projectDirectory(directory.filePath(projectName));
      if (projectDirectory.exists()) {
        QStringList projectFiles = projectDirectory.entryList(QStringList() << "*.rsproject", QDir::Files, QDir::Name);
        foreach (QString projectFile, projectFiles) {
          AddProject(projectDirectory.absolutePath(), projectDirectory.filePath(projectFile), projectDirectory.filePath("icon.png"));
        }
      }
    }
  }
}

ProjectManager::~ProjectManager() {
  delete ui;
  delete loadingWindow;
  if (loadingWindow != nullptr) {
    delete loadingWindow;
  }
  if (mainEditor != nullptr) {
    delete mainEditor;
  }
}

void ProjectManager::AddProject(QString projectPath, QString projectFilename, QString iconFile) {
  QFile projectFile(projectFilename);
  if (!projectFile.open(QIODevice::ReadOnly)) {
    qWarning() << "Failed to load project file: " << projectFilename << "\n";
    return;
  }
  QDomDocument xmlDoc;
  xmlDoc.setContent(&projectFile);
  projectFile.close();

  QDomElement root = xmlDoc.documentElement();
  QString projectName = root.attribute("name", "Unknown name");

  QListWidgetItem *item = new QListWidgetItem();
  ProjectItem *widget = new ProjectItem(projectPath, projectName, iconFile);
  ui->listWidget->addItem(item);
  ui->listWidget->setItemWidget(item, widget);
  item->setSizeHint(widget->size());
}

void ProjectManager::on_newProjectBtn_clicked() {
  NewProject newProject;
  newProject.exec();
}

void ProjectManager::on_openProjectBtn_clicked() {
  //QString filePath = QFileDialog::getOpenFileName(
  //    this, "Open Project", QDir::homePath() + "/RealShotProjects", "*.rsproject");
  this->hide();
  //this->loadingWindow = new Loading();
  //this->loadingWindow->show();
  this->mainEditor = new MainEditor();
  this->mainEditor->show();
}

