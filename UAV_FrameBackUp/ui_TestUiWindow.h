/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUIWINDOW_H
#define UI_TESTUIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestUiWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *labelPlus;
    QLabel *labelequal;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelInput2;
    QSpinBox *spinBox_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelInput1;
    QSpinBox *spinBox;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelOutput;
    QLineEdit *outputRes;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestUiWindow)
    {
        if (TestUiWindow->objectName().isEmpty())
            TestUiWindow->setObjectName(QStringLiteral("TestUiWindow"));
        TestUiWindow->resize(400, 300);
        centralWidget = new QWidget(TestUiWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 140, 75, 23));
        labelPlus = new QLabel(centralWidget);
        labelPlus->setObjectName(QStringLiteral("labelPlus"));
        labelPlus->setGeometry(QRect(130, 70, 16, 21));
        labelPlus->setLineWidth(5);
        labelequal = new QLabel(centralWidget);
        labelequal->setObjectName(QStringLiteral("labelequal"));
        labelequal->setGeometry(QRect(200, 70, 54, 12));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 50, 42, 40));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelInput2 = new QLabel(widget);
        labelInput2->setObjectName(QStringLiteral("labelInput2"));

        verticalLayout_2->addWidget(labelInput2);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        verticalLayout_2->addWidget(spinBox_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(70, 50, 42, 40));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelInput1 = new QLabel(widget1);
        labelInput1->setObjectName(QStringLiteral("labelInput1"));

        verticalLayout->addWidget(labelInput1);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(220, 50, 51, 40));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelOutput = new QLabel(widget2);
        labelOutput->setObjectName(QStringLiteral("labelOutput"));

        verticalLayout_3->addWidget(labelOutput);

        outputRes = new QLineEdit(widget2);
        outputRes->setObjectName(QStringLiteral("outputRes"));

        verticalLayout_3->addWidget(outputRes);

        TestUiWindow->setCentralWidget(centralWidget);
        pushButton->raise();
        spinBox->raise();
        spinBox_2->raise();
        labelInput1->raise();
        labelInput2->raise();
        labelPlus->raise();
        labelequal->raise();
        labelOutput->raise();
        outputRes->raise();
        labelOutput->raise();
        menuBar = new QMenuBar(TestUiWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        TestUiWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestUiWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestUiWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestUiWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestUiWindow->setStatusBar(statusBar);

        retranslateUi(TestUiWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), TestUiWindow, SLOT(buttonClicked()));

        QMetaObject::connectSlotsByName(TestUiWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestUiWindow)
    {
        TestUiWindow->setWindowTitle(QApplication::translate("TestUiWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("TestUiWindow", "\347\202\271\346\210\221\347\202\271\346\210\221\357\274\201", 0));
        labelPlus->setText(QApplication::translate("TestUiWindow", "+", 0));
        labelequal->setText(QApplication::translate("TestUiWindow", "=", 0));
        labelInput2->setText(QApplication::translate("TestUiWindow", "Input2", 0));
        labelInput1->setText(QApplication::translate("TestUiWindow", "Input1", 0));
        labelOutput->setText(QApplication::translate("TestUiWindow", "output", 0));
    } // retranslateUi

};

namespace Ui {
    class TestUiWindow: public Ui_TestUiWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUIWINDOW_H
