#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class ViewportWidget : public QOpenGLWidget, QOpenGLFunctions {

public:
  explicit ViewportWidget(QWidget *parent = nullptr);

protected:
  void initializeGL() override;

  void resizeGL(int w, int h) override;

  void paintGL() override;

};

