/********************************************************************************
** Form generated from reading UI file 'ProjectItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTITEM_H
#define UI_PROJECTITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectItem
{
public:
    QGridLayout *gridLayout;
    QLabel *projectImageLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *projectNameLabel;
    QPushButton *deleteBtn;
    QLabel *projectPathLabel;

    void setupUi(QWidget *ProjectItem)
    {
        if (ProjectItem->objectName().isEmpty())
            ProjectItem->setObjectName(QString::fromUtf8("ProjectItem"));
        ProjectItem->resize(362, 86);
        gridLayout = new QGridLayout(ProjectItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        projectImageLabel = new QLabel(ProjectItem);
        projectImageLabel->setObjectName(QString::fromUtf8("projectImageLabel"));
        projectImageLabel->setMinimumSize(QSize(68, 68));
        projectImageLabel->setMaximumSize(QSize(68, 68));
        projectImageLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        projectImageLabel->setTextFormat(Qt::PlainText);
        projectImageLabel->setScaledContents(true);

        gridLayout->addWidget(projectImageLabel, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        projectNameLabel = new QLabel(ProjectItem);
        projectNameLabel->setObjectName(QString::fromUtf8("projectNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectNameLabel->sizePolicy().hasHeightForWidth());
        projectNameLabel->setSizePolicy(sizePolicy);
        projectNameLabel->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(14);
        projectNameLabel->setFont(font);
        projectNameLabel->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: none;"));
        projectNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(projectNameLabel);

        deleteBtn = new QPushButton(ProjectItem);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(0, 0));
        deleteBtn->setMaximumSize(QSize(25, 25));
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 3px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: none;\n"
"    border-radius: 3px;\n"
"    background-color: rgb(221, 0, 83);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Assets/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteBtn->setIcon(icon);

        horizontalLayout->addWidget(deleteBtn);


        verticalLayout->addLayout(horizontalLayout);

        projectPathLabel = new QLabel(ProjectItem);
        projectPathLabel->setObjectName(QString::fromUtf8("projectPathLabel"));
        projectPathLabel->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;"));
        projectPathLabel->setTextFormat(Qt::PlainText);
        projectPathLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        projectPathLabel->setWordWrap(true);

        verticalLayout->addWidget(projectPathLabel);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(ProjectItem);

        QMetaObject::connectSlotsByName(ProjectItem);
    } // setupUi

    void retranslateUi(QWidget *ProjectItem)
    {
        ProjectItem->setWindowTitle(QApplication::translate("ProjectItem", "Form", nullptr));
        projectImageLabel->setText(QString());
        projectNameLabel->setText(QApplication::translate("ProjectItem", "Project name", nullptr));
        projectPathLabel->setText(QApplication::translate("ProjectItem", "Path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectItem: public Ui_ProjectItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTITEM_H
