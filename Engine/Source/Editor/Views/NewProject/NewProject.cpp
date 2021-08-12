#include <QFileDialog>
#include <QDir>
#include <QRegExpValidator>

#include "NewProject.h"
#include "ui_NewProject.h"

NewProject::NewProject(QWidget *parent) : QDialog(parent), ui(new Ui::NewProject) {
  ui->setupUi(this);
  ui->projectNameEdit->setValidator(
      new QRegExpValidator(QRegExp("[A-Za-z0-9 _.-]{0,64}"), this));
  this->projectName = "Project Name";
  this->path = QDir::homePath() + "/RealShotProjects";
  this->escapedPath = this->path + this->projectName;

  ui->projectNameEdit->setText(this->projectName);
  ui->pathLineEdit->setText(this->path);
  ui->escapedPathLineEdit->setText(this->path + "/" + this->projectName);

  this->updatePath();
}

NewProject::~NewProject() {
  delete ui;
}

void NewProject::updatePath() {
  if (ui->createProjectDirCheckBox->isChecked()) {
    this->escapedPath = this->path + "/" + this->projectName.replace(" ", "-");
    ui->escapedPathLineEdit->setText(this->escapedPath);
  } else {
    this->escapedPath = this->path;
    ui->escapedPathLineEdit->setText(this->escapedPath);
  }
}

void NewProject::on_pathSelectorBtn_clicked() {
  QString dir = QFileDialog::getExistingDirectory(
      this, "Open Directory", QDir::homePath(),
      QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
  this->path = dir;
  ui->pathLineEdit->setText(dir);
  this->updatePath();
}

void NewProject::on_pathLineEdit_textChanged(const QString &arg1) {
  this->path = arg1;
  this->updatePath();
}


void NewProject::on_projectNameEdit_textChanged(const QString &arg1) {
  this->projectName = arg1;
  this->updatePath();
}


void NewProject::on_createProjectDirCheckBox_stateChanged(int) {
  this->updatePath();
}

