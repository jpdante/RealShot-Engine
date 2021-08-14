#pragma once

#include <QMainWindow>
#include "../../ViewportWidget/ViewportWidget.h"

namespace Ui {
class MainEditor;
}

class MainEditor : public QMainWindow {
  Q_OBJECT

public:
  explicit MainEditor(QWidget *parent = nullptr);
  ~MainEditor();

private:
  Ui::MainEditor *ui;

  ViewportWidget *viewport;
};

