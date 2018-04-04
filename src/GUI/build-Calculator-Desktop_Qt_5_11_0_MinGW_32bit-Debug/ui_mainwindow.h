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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labInput;
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
    QPushButton *pshbtnCalculate;
    QPushButton *pshbtnAdditiveOperator;
    QPushButton *pshbtnSubstractiveOperator;
    QPushButton *pshbtnMultiplicativeOperator;
    QPushButton *pshbtnSQRT;
    QPushButton *pshbtnDivideOperator;
    QPushButton *pshbtnPowerOperator;
    QPushButton *pshbtnFactorial;
    QPushButton *pshbtnModulo;
    QPushButton *pshbtnClear;
    QPushButton *pshbtnDelete;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(401, 263);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Romantic"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/2000px-Calculator_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labInput = new QLabel(centralWidget);
        labInput->setObjectName(QStringLiteral("labInput"));
        labInput->setGeometry(QRect(10, 15, 381, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Romantic"));
        font1.setPointSize(14);
        labInput->setFont(font1);
        labInput->setStyleSheet(QLatin1String("QLabel {\n"
" background-color :rgb(255, 242, 228);\n"
" }\n"
"\n"
""));
        labInput->setFrameShape(QFrame::Panel);
        labInput->setFrameShadow(QFrame::Sunken);
        labInput->setLineWidth(1);
        labInput->setMidLineWidth(1);
        labInput->setScaledContents(true);
        labInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labInput->setMargin(2);
        pshbtn1 = new QPushButton(centralWidget);
        pshbtn1->setObjectName(QStringLiteral("pshbtn1"));
        pshbtn1->setGeometry(QRect(10, 170, 61, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Script"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        pshbtn1->setFont(font2);
        pshbtn1->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn2 = new QPushButton(centralWidget);
        pshbtn2->setObjectName(QStringLiteral("pshbtn2"));
        pshbtn2->setGeometry(QRect(70, 170, 61, 41));
        pshbtn2->setFont(font2);
        pshbtn2->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn3 = new QPushButton(centralWidget);
        pshbtn3->setObjectName(QStringLiteral("pshbtn3"));
        pshbtn3->setGeometry(QRect(130, 170, 61, 41));
        pshbtn3->setFont(font2);
        pshbtn3->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn5 = new QPushButton(centralWidget);
        pshbtn5->setObjectName(QStringLiteral("pshbtn5"));
        pshbtn5->setGeometry(QRect(70, 130, 61, 41));
        pshbtn5->setFont(font2);
        pshbtn5->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn4 = new QPushButton(centralWidget);
        pshbtn4->setObjectName(QStringLiteral("pshbtn4"));
        pshbtn4->setGeometry(QRect(10, 130, 61, 41));
        pshbtn4->setFont(font2);
        pshbtn4->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn6 = new QPushButton(centralWidget);
        pshbtn6->setObjectName(QStringLiteral("pshbtn6"));
        pshbtn6->setGeometry(QRect(130, 130, 61, 41));
        pshbtn6->setFont(font2);
        pshbtn6->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn8 = new QPushButton(centralWidget);
        pshbtn8->setObjectName(QStringLiteral("pshbtn8"));
        pshbtn8->setGeometry(QRect(70, 90, 61, 41));
        pshbtn8->setFont(font2);
        pshbtn8->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn7 = new QPushButton(centralWidget);
        pshbtn7->setObjectName(QStringLiteral("pshbtn7"));
        pshbtn7->setGeometry(QRect(10, 90, 61, 41));
        pshbtn7->setFont(font2);
        pshbtn7->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn9 = new QPushButton(centralWidget);
        pshbtn9->setObjectName(QStringLiteral("pshbtn9"));
        pshbtn9->setGeometry(QRect(130, 90, 61, 41));
        pshbtn9->setFont(font2);
        pshbtn9->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtn0 = new QPushButton(centralWidget);
        pshbtn0->setObjectName(QStringLiteral("pshbtn0"));
        pshbtn0->setGeometry(QRect(10, 210, 121, 41));
        pshbtn0->setFont(font2);
        pshbtn0->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}\n"
"\n"
""));
        pshbtnComma = new QPushButton(centralWidget);
        pshbtnComma->setObjectName(QStringLiteral("pshbtnComma"));
        pshbtnComma->setGeometry(QRect(130, 210, 61, 41));
        pshbtnComma->setFont(font2);
        pshbtnCalculate = new QPushButton(centralWidget);
        pshbtnCalculate->setObjectName(QStringLiteral("pshbtnCalculate"));
        pshbtnCalculate->setGeometry(QRect(195, 170, 61, 81));
        pshbtnCalculate->setFont(font2);
        pshbtnCalculate->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(255, 239, 222);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnAdditiveOperator = new QPushButton(centralWidget);
        pshbtnAdditiveOperator->setObjectName(QStringLiteral("pshbtnAdditiveOperator"));
        pshbtnAdditiveOperator->setGeometry(QRect(265, 210, 61, 41));
        pshbtnAdditiveOperator->setFont(font2);
        pshbtnAdditiveOperator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(199, 222, 255);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnSubstractiveOperator = new QPushButton(centralWidget);
        pshbtnSubstractiveOperator->setObjectName(QStringLiteral("pshbtnSubstractiveOperator"));
        pshbtnSubstractiveOperator->setGeometry(QRect(265, 170, 61, 41));
        pshbtnSubstractiveOperator->setFont(font2);
        pshbtnSubstractiveOperator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(199, 222, 255);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnMultiplicativeOperator = new QPushButton(centralWidget);
        pshbtnMultiplicativeOperator->setObjectName(QStringLiteral("pshbtnMultiplicativeOperator"));
        pshbtnMultiplicativeOperator->setGeometry(QRect(265, 130, 61, 41));
        pshbtnMultiplicativeOperator->setFont(font2);
        pshbtnMultiplicativeOperator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(199, 222, 255);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnSQRT = new QPushButton(centralWidget);
        pshbtnSQRT->setObjectName(QStringLiteral("pshbtnSQRT"));
        pshbtnSQRT->setGeometry(QRect(330, 90, 61, 41));
        pshbtnSQRT->setFont(font2);
        pshbtnSQRT->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/sqrt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshbtnSQRT->setIcon(icon1);
        pshbtnDivideOperator = new QPushButton(centralWidget);
        pshbtnDivideOperator->setObjectName(QStringLiteral("pshbtnDivideOperator"));
        pshbtnDivideOperator->setGeometry(QRect(265, 90, 61, 41));
        pshbtnDivideOperator->setFont(font2);
        pshbtnDivideOperator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(199, 222, 255);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnPowerOperator = new QPushButton(centralWidget);
        pshbtnPowerOperator->setObjectName(QStringLiteral("pshbtnPowerOperator"));
        pshbtnPowerOperator->setGeometry(QRect(330, 210, 61, 41));
        pshbtnPowerOperator->setFont(font2);
        pshbtnPowerOperator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(199, 222, 255);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnFactorial = new QPushButton(centralWidget);
        pshbtnFactorial->setObjectName(QStringLiteral("pshbtnFactorial"));
        pshbtnFactorial->setGeometry(QRect(330, 130, 61, 41));
        pshbtnFactorial->setFont(font2);
        pshbtnFactorial->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnModulo = new QPushButton(centralWidget);
        pshbtnModulo->setObjectName(QStringLiteral("pshbtnModulo"));
        pshbtnModulo->setGeometry(QRect(330, 170, 61, 41));
        pshbtnModulo->setFont(font2);
        pshbtnModulo->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}"));
        pshbtnClear = new QPushButton(centralWidget);
        pshbtnClear->setObjectName(QStringLiteral("pshbtnClear"));
        pshbtnClear->setGeometry(QRect(195, 130, 61, 41));
        pshbtnClear->setFont(font2);
        pshbtnClear->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(255, 239, 222);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #ff4e42);\n"
"}"));
        pshbtnDelete = new QPushButton(centralWidget);
        pshbtnDelete->setObjectName(QStringLiteral("pshbtnDelete"));
        pshbtnDelete->setGeometry(QRect(195, 90, 61, 41));
        pshbtnDelete->setFont(font2);
        pshbtnDelete->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color:rgb(255, 239, 222);\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #ff4e42);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        pshbtn1->raise();
        pshbtn2->raise();
        pshbtn3->raise();
        pshbtn5->raise();
        pshbtn4->raise();
        pshbtn6->raise();
        pshbtn8->raise();
        pshbtn7->raise();
        pshbtn9->raise();
        pshbtn0->raise();
        pshbtnComma->raise();
        pshbtnCalculate->raise();
        pshbtnAdditiveOperator->raise();
        pshbtnSubstractiveOperator->raise();
        pshbtnMultiplicativeOperator->raise();
        pshbtnDivideOperator->raise();
        pshbtnPowerOperator->raise();
        labInput->raise();
        pshbtnSQRT->raise();
        pshbtnFactorial->raise();
        pshbtnModulo->raise();
        pshbtnClear->raise();
        pshbtnDelete->raise();

        retranslateUi(MainWindow);
        QObject::connect(pshbtnClear, SIGNAL(clicked()), labInput, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        labInput->setText(QString());
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
        pshbtnComma->setStyleSheet(QApplication::translate("MainWindow", "QPushButton {\n"
"  background-color:rgb(225, 255, 253);\n"
"  border: 1px solid black;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ffffff, stop: 1 #55ff00);\n"
"}", nullptr));
        pshbtnComma->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnComma->setShortcut(QApplication::translate("MainWindow", ".", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnCalculate->setText(QApplication::translate("MainWindow", "=", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnCalculate->setShortcut(QApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnAdditiveOperator->setText(QApplication::translate("MainWindow", "+", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnAdditiveOperator->setShortcut(QApplication::translate("MainWindow", "+", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnSubstractiveOperator->setText(QApplication::translate("MainWindow", "-", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnSubstractiveOperator->setShortcut(QApplication::translate("MainWindow", "-", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnMultiplicativeOperator->setText(QApplication::translate("MainWindow", "*", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnMultiplicativeOperator->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pshbtnSQRT->setToolTip(QApplication::translate("MainWindow", "SQRT", nullptr));
#endif // QT_NO_TOOLTIP
        pshbtnSQRT->setText(QString());
        pshbtnDivideOperator->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnDivideOperator->setShortcut(QApplication::translate("MainWindow", "/", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnPowerOperator->setText(QApplication::translate("MainWindow", "^", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnPowerOperator->setShortcut(QApplication::translate("MainWindow", "^", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pshbtnFactorial->setToolTip(QApplication::translate("MainWindow", "Factorial", nullptr));
#endif // QT_NO_TOOLTIP
        pshbtnFactorial->setText(QApplication::translate("MainWindow", "!", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnFactorial->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pshbtnModulo->setToolTip(QApplication::translate("MainWindow", "Modulo", nullptr));
#endif // QT_NO_TOOLTIP
        pshbtnModulo->setText(QApplication::translate("MainWindow", "Mod", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnModulo->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
        pshbtnClear->setText(QApplication::translate("MainWindow", "CE", nullptr));
        pshbtnDelete->setText(QApplication::translate("MainWindow", "C", nullptr));
#ifndef QT_NO_SHORTCUT
        pshbtnDelete->setShortcut(QApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
