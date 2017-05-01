/********************************************************************************
** Form generated from reading UI file 'openform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFORM_H
#define UI_OPENFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_openform
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *openFileBox;
    QListWidget *listWidget;

    void setupUi(QDialog *openform)
    {
        if (openform->objectName().isEmpty())
            openform->setObjectName(QStringLiteral("openform"));
        openform->resize(400, 300);
        buttonBox = new QDialogButtonBox(openform);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 240, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        openFileBox = new QComboBox(openform);
        openFileBox->setObjectName(QStringLiteral("openFileBox"));
        openFileBox->setGeometry(QRect(130, 121, 63, 22));
        openFileBox->setFocusPolicy(Qt::ClickFocus);
        openFileBox->setAcceptDrops(true);
        openFileBox->setInsertPolicy(QComboBox::NoInsert);
        openFileBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        openFileBox->setMinimumContentsLength(0);
        listWidget = new QListWidget(openform);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 191, 91));

        retranslateUi(openform);
        QObject::connect(buttonBox, SIGNAL(accepted()), openform, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), openform, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), listWidget, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(openform);
    } // setupUi

    void retranslateUi(QDialog *openform)
    {
        openform->setWindowTitle(QApplication::translate("openform", "Dialog", Q_NULLPTR));
        openFileBox->clear();
        openFileBox->insertItems(0, QStringList()
         << QApplication::translate("openform", "Files", Q_NULLPTR)
         << QApplication::translate("openform", "Vehicles", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class openform: public Ui_openform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFORM_H
