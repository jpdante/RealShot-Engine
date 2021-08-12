#pragma once

#include <QMainWindow>

namespace Ui {
class Loading;
}

class Loading : public QMainWindow
{
  Q_OBJECT

public:
  explicit Loading(QWidget *parent = nullptr);
  ~Loading();

private:
  Ui::Loading *ui;
};

