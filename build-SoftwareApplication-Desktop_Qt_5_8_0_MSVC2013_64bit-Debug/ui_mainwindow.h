/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Vehicle;
    QAction *actionQuit;
    QAction *actionOpen_2;
    QWidget *centralWidget;
    QTabWidget *Tabs;
    QWidget *Recent;
    QHBoxLayout *horizontalLayout;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *File;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(472, 370);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionNew_Vehicle = new QAction(MainWindow);
        actionNew_Vehicle->setObjectName(QStringLiteral("actionNew_Vehicle"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setAutoFillBackground(true);
        Tabs = new QTabWidget(centralWidget);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        Tabs->setGeometry(QRect(10, 100, 191, 131));
        Tabs->setAutoFillBackground(false);
        Tabs->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(200, 200, 196);"));
        Tabs->setTabBarAutoHide(true);
        Recent = new QWidget();
        Recent->setObjectName(QStringLiteral("Recent"));
        horizontalLayout = new QHBoxLayout(Recent);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Tabs->addTab(Recent, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Tabs->addTab(tab, QString());
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 319, 62));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        textBrowser->setReadOnly(false);
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 472, 20));
        menuBar->setFocusPolicy(Qt::ClickFocus);
        menuBar->setContextMenuPolicy(Qt::ActionsContextMenu);
        menuBar->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(199, 200, 193);"));
        menuBar->setNativeMenuBar(true);
        File = new QMenu(menuBar);
        File->setObjectName(QStringLiteral("File"));
        File->setSeparatorsCollapsible(true);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setFocusPolicy(Qt::ClickFocus);
        mainToolBar->setMovable(true);
        mainToolBar->setOrientation(Qt::Horizontal);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(true);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);

        menuBar->addAction(File->menuAction());
        File->addAction(actionNew_Vehicle);
        File->addAction(actionOpen_2);
        File->addAction(actionQuit);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Inventory Tracking", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QApplication::translate("MainWindow", "Inentory Program", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        actionNew_Vehicle->setText(QApplication::translate("MainWindow", "New Vehicle", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleName(QApplication::translate("MainWindow", "<html><head/><body><p>Inventory Application</p></body></html>", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        Tabs->setTabText(Tabs->indexOf(Recent), QApplication::translate("MainWindow", "Recent", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(tab), QApplication::translate("MainWindow", "All", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Find  Vehicle", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        menuBar->setAccessibleDescription(QApplication::translate("MainWindow", "Menu Bar", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        File->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Tool Bar", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
