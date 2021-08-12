#pragma once

#include <QDialog>

namespace Ui {
class NewProject;
}

class NewProject : public QDialog {
  Q_OBJECT

public:
  explicit NewProject(QWidget *parent = nullptr);
  ~NewProject();

private:
  void updatePath();

private slots:
  void on_pathSelectorBtn_clicked();

  void on_pathLineEdit_textChanged(const QString &arg1);

  void on_projectNameEdit_textChanged(const QString &arg1);

  void on_createProjectDirCheckBox_stateChanged(int arg1);

private:
  Ui::NewProject *ui;
  QString projectName;
  QString path;
  QString escapedPath;
};

