#include <QDesktopWidget>

#include "MainEditor.h"
#include "ui_MainEditor.h"

MainEditor::MainEditor(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainEditor) {
  ui->setupUi(this);

  // Set window at center of screen
  QRect screenGeometry = QApplication::desktop()->screenGeometry();
  int x = (screenGeometry.width() - this->width()) / 2;
  int y = (screenGeometry.height() - this->height()) / 2;
  this->move(x, y);

  // Init viewport
  this->viewport = new ViewportWidget(this);
  ui->viewportFrame->layout()->addWidget(this->viewport);
}

MainEditor::~MainEditor() {
  delete ui;
  if (this->viewport != nullptr) {
    delete this->viewport;
  }
}
