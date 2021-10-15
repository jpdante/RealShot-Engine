#pragma once

#include <QOpenGLFunctions>

class Renderer {
private:
  QOpenGLFunctions *glFuncs;

public:
  Renderer(QOpenGLFunctions *glFuncs);

public:
  void Initialize();
  void Resize(int w, int h);
  void Draw();
};

