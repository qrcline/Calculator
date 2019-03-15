/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_plus;
    QLCDNumber *lcdNumber;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(395, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 120, 341, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_divide = new QPushButton(layoutWidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        pushButton_divide->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_divide, 1, 3, 1, 1);

        pushButton_subtract = new QPushButton(layoutWidget);
        pushButton_subtract->setObjectName(QString::fromUtf8("pushButton_subtract"));
        sizePolicy.setHeightForWidth(pushButton_subtract->sizePolicy().hasHeightForWidth());
        pushButton_subtract->setSizePolicy(sizePolicy);
        pushButton_subtract->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_subtract, 3, 3, 1, 1);

        pushButton_multiply = new QPushButton(layoutWidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_multiply, 2, 3, 1, 1);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_clear, 4, 0, 1, 1);

        pushButton_equal = new QPushButton(layoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_equal, 4, 2, 1, 1);

        pushButton_plus = new QPushButton(layoutWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setStyleSheet(QString::fromUtf8("width:60;\n"
"height:60;"));

        gridLayout->addWidget(pushButton_plus, 4, 3, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 20, 341, 91));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 395, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_subtract->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
