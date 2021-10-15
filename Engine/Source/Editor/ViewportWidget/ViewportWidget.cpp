#include "ViewportWidget.h"

ViewportWidget::ViewportWidget(QWidget *parent) : QOpenGLWidget(parent) {

}

ViewportWidget::~ViewportWidget() {
  delete this->renderer;
  delete this->glFuncs;
}

void ViewportWidget::initializeGL() {
  initializeOpenGLFunctions();
  this->glFuncs = QOpenGLContext::currentContext()->functions();
  this->renderer = new Renderer(this->glFuncs);
  glClearColor(0, 0, 0, 1);
  this->renderer->Initialize();
}

void ViewportWidget::resizeGL(int w, int h) { this->renderer->Resize(w, h); }

void ViewportWidget::paintGL() { this->renderer->Draw(); }
