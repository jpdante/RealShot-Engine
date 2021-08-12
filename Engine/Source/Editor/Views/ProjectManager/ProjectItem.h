#pragma once

#include <QWidget>

namespace Ui {
class ProjectItem;
}

class ProjectItem : public QWidget
{
  Q_OBJECT

public:
  explicit ProjectItem(QString projectPath, QString projectName, QString iconPath, QWidget *parent = nullptr);
  ~ProjectItem();

private:
  Ui::ProjectItem *ui;
};

