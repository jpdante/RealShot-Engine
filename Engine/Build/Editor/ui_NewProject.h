/********************************************************************************
** Form generated from reading UI file 'NewProject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewProject
{
public:
    QGridLayout *gridLayout;
    QLabel *pathLabel;
    QLineEdit *projectNameEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *pathLineEdit;
    QPushButton *pathSelectorBtn;
    QDialogButtonBox *buttonBox;
    QLabel *nameLabel;
    QCheckBox *createProjectDirCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *escapedPathLabel;
    QLineEdit *escapedPathLineEdit;

    void setupUi(QDialog *NewProject)
    {
        if (NewProject->objectName().isEmpty())
            NewProject->setObjectName(QString::fromUtf8("NewProject"));
        NewProject->resize(431, 242);
        gridLayout = new QGridLayout(NewProject);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pathLabel = new QLabel(NewProject);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));

        gridLayout->addWidget(pathLabel, 2, 0, 1, 1);

        projectNameEdit = new QLineEdit(NewProject);
        projectNameEdit->setObjectName(QString::fromUtf8("projectNameEdit"));

        gridLayout->addWidget(projectNameEdit, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pathLineEdit = new QLineEdit(NewProject);
        pathLineEdit->setObjectName(QString::fromUtf8("pathLineEdit"));

        horizontalLayout->addWidget(pathLineEdit);

        pathSelectorBtn = new QPushButton(NewProject);
        pathSelectorBtn->setObjectName(QString::fromUtf8("pathSelectorBtn"));
        pathSelectorBtn->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(pathSelectorBtn);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(NewProject);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 1);

        nameLabel = new QLabel(NewProject);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        createProjectDirCheckBox = new QCheckBox(NewProject);
        createProjectDirCheckBox->setObjectName(QString::fromUtf8("createProjectDirCheckBox"));
        createProjectDirCheckBox->setChecked(true);

        gridLayout->addWidget(createProjectDirCheckBox, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        escapedPathLabel = new QLabel(NewProject);
        escapedPathLabel->setObjectName(QString::fromUtf8("escapedPathLabel"));

        gridLayout->addWidget(escapedPathLabel, 5, 0, 1, 1);

        escapedPathLineEdit = new QLineEdit(NewProject);
        escapedPathLineEdit->setObjectName(QString::fromUtf8("escapedPathLineEdit"));
        escapedPathLineEdit->setReadOnly(true);

        gridLayout->addWidget(escapedPathLineEdit, 6, 0, 1, 1);


        retranslateUi(NewProject);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewProject, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewProject, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewProject);
    } // setupUi

    void retranslateUi(QDialog *NewProject)
    {
        NewProject->setWindowTitle(QApplication::translate("NewProject", "Dialog", nullptr));
        pathLabel->setText(QApplication::translate("NewProject", "Path", nullptr));
        pathSelectorBtn->setText(QApplication::translate("NewProject", "...", nullptr));
        nameLabel->setText(QApplication::translate("NewProject", "Name:", nullptr));
        createProjectDirCheckBox->setText(QApplication::translate("NewProject", "Create project directory", nullptr));
        escapedPathLabel->setText(QApplication::translate("NewProject", "Project Path:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProject: public Ui_NewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
