/********************************************************************************
** Form generated from reading UI file 'newvehicle.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWVEHICLE_H
#define UI_NEWVEHICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newvehicle
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_12;
    QDateEdit *dateEdit_2;
    QLabel *label_17;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_10;
    QLabel *label_7;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_16;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_18;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLineEdit *lineEdit_18;
    QLabel *label_20;
    QLabel *label_19;
    QLineEdit *lineEdit_16;
    QDateEdit *dateEdit_3;
    QLabel *label_21;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *okButton;
    QDialogButtonBox *saveButton;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *newvehicle)
    {
        if (newvehicle->objectName().isEmpty())
            newvehicle->setObjectName(QStringLiteral("newvehicle"));
        newvehicle->resize(615, 691);
        newvehicle->setFocusPolicy(Qt::TabFocus);
        newvehicle->setAcceptDrops(true);
        newvehicle->setSizeGripEnabled(true);
        layoutWidget = new QWidget(newvehicle);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 0, 290, 553));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 7, 1, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 9, 1, 1, 1);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_12, 12, 1, 1, 1);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        gridLayout->addWidget(dateEdit_2, 13, 1, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 14, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_7, 6, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_10, 10, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 11, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_6, 5, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_11, 11, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 9, 0, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 12, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 10, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 13, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 14, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 8, 0, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 15, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 19, 0, 1, 1);

        lineEdit_18 = new QLineEdit(layoutWidget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_18, 19, 1, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout->addWidget(label_20, 17, 0, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 16, 0, 1, 1);

        lineEdit_16 = new QLineEdit(layoutWidget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_16, 17, 1, 1, 1);

        dateEdit_3 = new QDateEdit(layoutWidget);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));

        gridLayout->addWidget(dateEdit_3, 15, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout->addWidget(label_21, 18, 0, 1, 1);

        lineEdit_17 = new QLineEdit(layoutWidget);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_17, 18, 1, 1, 1);

        lineEdit_15 = new QLineEdit(layoutWidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_15, 16, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEdit_8->setCursorPosition(1);
        lineEdit_8->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_8, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(newvehicle);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(411, 40, 111, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        okButton = new QDialogButtonBox(layoutWidget1);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setFocusPolicy(Qt::ClickFocus);
        okButton->setOrientation(Qt::Vertical);
        okButton->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(okButton);

        saveButton = new QDialogButtonBox(layoutWidget1);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setOrientation(Qt::Vertical);
        saveButton->setStandardButtons(QDialogButtonBox::Save);

        verticalLayout_2->addWidget(saveButton);

        cancelButton = new QDialogButtonBox(layoutWidget1);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setOrientation(Qt::Vertical);
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_2->addWidget(cancelButton);


        retranslateUi(newvehicle);
        QObject::connect(cancelButton, SIGNAL(rejected()), newvehicle, SLOT(close()));
        QObject::connect(saveButton, SIGNAL(accepted()), newvehicle, SLOT(update()));

        QMetaObject::connectSlotsByName(newvehicle);
    } // setupUi

    void retranslateUi(QDialog *newvehicle)
    {
        newvehicle->setWindowTitle(QApplication::translate("newvehicle", "New Vehicle Form", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        newvehicle->setAccessibleName(QApplication::translate("newvehicle", "<html><head/><body><p>New  Vehicle Form</p></body></html>", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("newvehicle", "New Vehicle Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("newvehicle", "ID", Q_NULLPTR));
        checkBox->setText(QApplication::translate("newvehicle", "CheckBox", Q_NULLPTR));
        label_17->setText(QApplication::translate("newvehicle", "Service Status", Q_NULLPTR));
        label_8->setText(QApplication::translate("newvehicle", "Plate Number", Q_NULLPTR));
        label_7->setText(QApplication::translate("newvehicle", "VIN Number", Q_NULLPTR));
        label_14->setText(QApplication::translate("newvehicle", "Combined Weight", Q_NULLPTR));
        label_5->setText(QApplication::translate("newvehicle", "Model", Q_NULLPTR));
        label_12->setText(QApplication::translate("newvehicle", "Purchase Date", Q_NULLPTR));
        label_15->setText(QApplication::translate("newvehicle", "IFTA Number", Q_NULLPTR));
        label_4->setText(QApplication::translate("newvehicle", "Make", Q_NULLPTR));
        label_13->setText(QApplication::translate("newvehicle", "Gross Weight", Q_NULLPTR));
        label_16->setText(QApplication::translate("newvehicle", "Annual Inspection Date", Q_NULLPTR));
        label_3->setText(QApplication::translate("newvehicle", "Vehicle Number", Q_NULLPTR));
        label_6->setText(QApplication::translate("newvehicle", "Year", Q_NULLPTR));
        label_9->setText(QApplication::translate("newvehicle", "Insured", Q_NULLPTR));
        label_11->setText(QApplication::translate("newvehicle", "Purchase Amount", Q_NULLPTR));
        label_18->setText(QApplication::translate("newvehicle", "Last Service Date", Q_NULLPTR));
        label_10->setText(QApplication::translate("newvehicle", "Policy Amount", Q_NULLPTR));
        lineEdit_18->setText(QApplication::translate("newvehicle", "$", Q_NULLPTR));
        label_20->setText(QApplication::translate("newvehicle", "Fuel Filter Type", Q_NULLPTR));
        label_19->setText(QApplication::translate("newvehicle", "Oil Filter Type", Q_NULLPTR));
        label_21->setText(QApplication::translate("newvehicle", "Air Filter Type", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("newvehicle", "$", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("newvehicle", "$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        okButton->setToolTip(QApplication::translate("newvehicle", "<html><head/><body><p>Save and Exit</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("newvehicle", "<html><head/><body><p>Save</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("newvehicle", "<html><head/><body><p>Cancel without saving</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class newvehicle: public Ui_newvehicle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWVEHICLE_H
