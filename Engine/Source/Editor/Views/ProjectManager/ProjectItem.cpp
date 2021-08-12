#include "ProjectItem.h"
#include "ui_ProjectItem.h"

ProjectItem::ProjectItem(QString projectPath, QString projectName, QString iconPath, QWidget *parent) : QWidget(parent), ui(new Ui::ProjectItem) {
  ui->setupUi(this);
  ui->projectNameLabel->setText(projectName);
  ui->projectPathLabel->setText(projectPath);
  QPixmap img(iconPath);
  ui->projectImageLabel->setPixmap(img);
}

ProjectItem::~ProjectItem() {
  delete ui;
}
