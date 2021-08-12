/********************************************************************************
** Form generated from reading UI file 'ProjectManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTMANAGER_H
#define UI_PROJECTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectManager
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QPushButton *newProjectBtn;
    QPushButton *openProjectBtn;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QMainWindow *ProjectManager)
    {
        if (ProjectManager->objectName().isEmpty())
            ProjectManager->setObjectName(QString::fromUtf8("ProjectManager"));
        ProjectManager->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProjectManager->sizePolicy().hasHeightForWidth());
        ProjectManager->setSizePolicy(sizePolicy);
        ProjectManager->setMinimumSize(QSize(600, 400));
        ProjectManager->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 24);"));
        centralwidget = new QWidget(ProjectManager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 37, 39);\n"
"border: none;"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMaximumSize(QSize(200, 60));
        logo->setContextMenuPolicy(Qt::DefaultContextMenu);
        logo->setTextFormat(Qt::PlainText);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/logo/Assets/logo.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        newProjectBtn = new QPushButton(centralwidget);
        newProjectBtn->setObjectName(QString::fromUtf8("newProjectBtn"));
        newProjectBtn->setMinimumSize(QSize(100, 0));
        newProjectBtn->setStyleSheet(QString::fromUtf8(""));
        newProjectBtn->setFlat(false);

        verticalLayout->addWidget(newProjectBtn);

        openProjectBtn = new QPushButton(centralwidget);
        openProjectBtn->setObjectName(QString::fromUtf8("openProjectBtn"));
        openProjectBtn->setMinimumSize(QSize(100, 0));
        openProjectBtn->setStyleSheet(QString::fromUtf8(""));
        openProjectBtn->setFlat(false);

        verticalLayout->addWidget(openProjectBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        ProjectManager->setCentralWidget(centralwidget);

        retranslateUi(ProjectManager);

        QMetaObject::connectSlotsByName(ProjectManager);
    } // setupUi

    void retranslateUi(QMainWindow *ProjectManager)
    {
        ProjectManager->setWindowTitle(QApplication::translate("ProjectManager", "Project Manager - RealShot Engine", nullptr));
        logo->setText(QString());
        newProjectBtn->setText(QApplication::translate("ProjectManager", "New Project", nullptr));
        openProjectBtn->setText(QApplication::translate("ProjectManager", "Open Project", nullptr));
        label->setText(QApplication::translate("ProjectManager", "RealShot 1.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectManager: public Ui_ProjectManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGER_H
