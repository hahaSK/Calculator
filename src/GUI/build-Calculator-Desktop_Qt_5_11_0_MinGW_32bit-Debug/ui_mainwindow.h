/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pshbtn1;
    QPushButton *pshbtn2;
    QPushButton *pshbtn3;
    QPushButton *pshbtn5;
    QPushButton *pshbtn4;
    QPushButton *pshbtn6;
    QPushButton *pshbtn8;
    QPushButton *pshbtn7;
    QPushButton *pshbtn9;
    QPushButton *pshbtn0;
    QPushButton *pshbtnComma;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(830, 438);
        QFont font;
        font.setFamily(QStringLiteral("Script MT Bold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/2000px-Calculator_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pshbtn1 = new QPushButton(centralWidget);
        pshbtn1->setObjectName(QStringLiteral("pshbtn1"));
        pshbtn1->setGeometry(QRect(0, 270, 51, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Script"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        pshbtn1->setFont(font1);
        pshbtn2 = new QPushButton(centralWidget);
        pshbtn2->setObjectName(QStringLiteral("pshbtn2"));
        pshbtn2->setGeometry(QRect(60, 270, 51, 41));
        pshbtn2->setFont(font1);
        pshbtn3 = new QPushButton(centralWidget);
        pshbtn3->setObjectName(QStringLiteral("pshbtn3"));
        pshbtn3->setGeometry(QRect(120, 270, 51, 41));
        pshbtn3->setFont(font1);
        pshbtn5 = new QPushButton(centralWidget);
        pshbtn5->setObjectName(QStringLiteral("pshbtn5"));
        pshbtn5->setGeometry(QRect(60, 220, 51, 41));
        pshbtn5->setFont(font1);
        pshbtn4 = new QPushButton(centralWidget);
        pshbtn4->setObjectName(QStringLiteral("pshbtn4"));
        pshbtn4->setGeometry(QRect(0, 220, 51, 41));
        pshbtn4->setFont(font1);
        pshbtn6 = new QPushButton(centralWidget);
        pshbtn6->setObjectName(QStringLiteral("pshbtn6"));
        pshbtn6->setGeometry(QRect(120, 220, 51, 41));
        pshbtn6->setFont(font1);
        pshbtn8 = new QPushButton(centralWidget);
        pshbtn8->setObjectName(QStringLiteral("pshbtn8"));
        pshbtn8->setGeometry(QRect(60, 180, 51, 41));
        pshbtn8->setFont(font1);
        pshbtn7 = new QPushButton(centralWidget);
        pshbtn7->setObjectName(QStringLiteral("pshbtn7"));
        pshbtn7->setGeometry(QRect(0, 180, 51, 41));
        pshbtn7->setFont(font1);
        pshbtn9 = new QPushButton(centralWidget);
        pshbtn9->setObjectName(QStringLiteral("pshbtn9"));
        pshbtn9->setGeometry(QRect(120, 180, 51, 41));
        pshbtn9->setFont(font1);
        pshbtn0 = new QPushButton(centralWidget);
        pshbtn0->setObjectName(QStringLiteral("pshbtn0"));
        pshbtn0->setGeometry(QRect(0, 320, 111, 41));
        pshbtn0->setFont(font1);
        pshbtnComma = new QPushButton(centralWidget);
        pshbtnComma->setObjectName(QStringLiteral("pshbtnComma"));
        pshbtnComma->setGeometry(QRect(120, 320, 51, 41));
        pshbtnComma->setFont(font1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 130, 171, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 830, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        pshbtn1->setText(QApplication::translate("MainWindow", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn1->setShortcut(QApplication::translate("MainWindow", "1", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn2->setText(QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn2->setShortcut(QApplication::translate("MainWindow", "2", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn3->setText(QApplication::translate("MainWindow", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn3->setShortcut(QApplication::translate("MainWindow", "3", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn5->setText(QApplication::translate("MainWindow", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn5->setShortcut(QApplication::translate("MainWindow", "5", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn4->setText(QApplication::translate("MainWindow", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn4->setShortcut(QApplication::translate("MainWindow", "4", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn6->setText(QApplication::translate("MainWindow", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn6->setShortcut(QApplication::translate("MainWindow", "6", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn8->setText(QApplication::translate("MainWindow", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn8->setShortcut(QApplication::translate("MainWindow", "8", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn7->setText(QApplication::translate("MainWindow", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn7->setShortcut(QApplication::translate("MainWindow", "7", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn9->setText(QApplication::translate("MainWindow", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn9->setShortcut(QApplication::translate("MainWindow", "9", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtn0->setText(QApplication::translate("MainWindow", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtn0->setShortcut(QApplication::translate("MainWindow", "0", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnComma->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnComma->setShortcut(QApplication::translate("MainWindow", ".", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
