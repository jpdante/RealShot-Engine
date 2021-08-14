#pragma once

#include <QMainWindow>

#include "../Loading/Loading.h"
#include "../MainEditor/MainEditor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProjectManager; }
QT_END_NAMESPACE

class ProjectManager : public QMainWindow {
  Q_OBJECT

public:
  ProjectManager(QWidget *parent = nullptr);
  ~ProjectManager();

private slots:
  void on_newProjectBtn_clicked();

  void on_openProjectBtn_clicked();

private:
  Ui::ProjectManager *ui;
  Loading *loadingWindow;
  MainEditor *mainEditor;

private:
  void AddProject(QString projectPath, QString projectFilename, QString iconFile);

};
