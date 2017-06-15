/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWebEngineView *page_2;
    QVideoWidget *page;
    QWidget *page_3;
    QComboBox *comboBox;
    QWidget *page_4;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButtonPause;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonTestDll;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(840, 557);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 10, 691, 481));
        page_2 = new QWebEngineView();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        page = new QVideoWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        comboBox = new QComboBox(page_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 60, 69, 22));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox = new QGroupBox(page_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 50, 120, 80));
        stackedWidget->addWidget(page_4);
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 121, 81));
        listWidget->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 100, 91, 31));
        pushButtonPause = new QPushButton(centralWidget);
        pushButtonPause->setObjectName(QStringLiteral("pushButtonPause"));
        pushButtonPause->setGeometry(QRect(20, 140, 91, 31));
        pushButtonPlay = new QPushButton(centralWidget);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));
        pushButtonPlay->setGeometry(QRect(20, 180, 91, 31));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setGeometry(QRect(20, 220, 91, 31));
        pushButtonTestDll = new QPushButton(centralWidget);
        pushButtonTestDll->setObjectName(QStringLiteral("pushButtonTestDll"));
        pushButtonTestDll->setGeometry(QRect(30, 270, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 840, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276\346\250\241\345\274\217(\344\270\273)", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\221\346\216\247\350\247\206\351\242\221", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\345\212\237\350\203\275\344\273\213\347\273\215", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\345\233\242\351\230\237\344\273\213\347\273\215", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\350\247\206\351\242\221", 0));
        pushButtonPause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", 0));
        pushButtonPlay->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0));
        pushButtonStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        pushButtonTestDll->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
