#include <QDesktopWidget>
#include <QWidget>

#include "Loading.h"
#include "ui_Loading.h"

Loading::Loading(QWidget *parent) : QMainWindow(parent), ui(new Ui::Loading) {
  ui->setupUi(this);
  this->setWindowFlags( Qt::CustomizeWindowHint );

  // Set window at center of screen
  QRect screenGeometry = QApplication::desktop()->screenGeometry();
  int x = (screenGeometry.width() - this->width()) / 2;
  int y = (screenGeometry.height() - this->height()) / 2;
  this->move(x, y);
}

Loading::~Loading() {
  delete ui;
}
