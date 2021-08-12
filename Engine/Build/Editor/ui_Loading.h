/********************************************************************************
** Form generated from reading UI file 'Loading.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QWidget *centralwidget;
    QLabel *loadingStatusLabel;
    QProgressBar *loadingProgressBar;

    void setupUi(QMainWindow *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName(QString::fromUtf8("Loading"));
        Loading->resize(500, 150);
        Loading->setMinimumSize(QSize(500, 150));
        Loading->setMaximumSize(QSize(500, 150));
        Loading->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/logo/Assets/loading.png);\n"
"}"));
        centralwidget = new QWidget(Loading);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loadingStatusLabel = new QLabel(centralwidget);
        loadingStatusLabel->setObjectName(QString::fromUtf8("loadingStatusLabel"));
        loadingStatusLabel->setGeometry(QRect(3, 123, 491, 23));
        QFont font;
        font.setPointSize(10);
        loadingStatusLabel->setFont(font);
        loadingStatusLabel->setStyleSheet(QString::fromUtf8("background: none;"));
        loadingProgressBar = new QProgressBar(centralwidget);
        loadingProgressBar->setObjectName(QString::fromUtf8("loadingProgressBar"));
        loadingProgressBar->setGeometry(QRect(-1, 116, 502, 5));
        loadingProgressBar->setMaximumSize(QSize(16777215, 10));
        loadingProgressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    background: transparent;\n"
"}\n"
"QProgressBar::chunk {\n"
"    border: none;\n"
"    background-color: rgb(0, 179, 255);\n"
"}"));
        loadingProgressBar->setValue(0);
        loadingProgressBar->setTextVisible(false);
        Loading->setCentralWidget(centralwidget);

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QMainWindow *Loading)
    {
        Loading->setWindowTitle(QApplication::translate("Loading", "Loading project...", nullptr));
        loadingStatusLabel->setText(QApplication::translate("Loading", "Loading editor...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
