#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "./Core/Render/renderer.h"

class ViewportWidget : public QOpenGLWidget, QOpenGLFunctions {

public:
  explicit ViewportWidget(QWidget *parent = nullptr);
  ~ViewportWidget();

private:
  QOpenGLFunctions *glFuncs;
  Renderer *renderer;

protected:
  void initializeGL() override;

  void resizeGL(int w, int h) override;

  void paintGL() override;

};

