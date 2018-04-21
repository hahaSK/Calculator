//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvièka <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajèí  <xkrajc21@stud.fit.vutbr.cz>
//
//  
//===========================================================

#include "mainwindow.h"
#include <QApplication>

/** 
 * @mainpage ShatteredButWhole Calculator - IVS project 2.
 * @section intro_sec Introduction
 * ShatteredButWhole Calculator made for course Practical Aspects of Software Design in Bachelor degree study 2017/2018 - BUT FIT. Developed by: Juraj Lahvièka <xlahvi00@vutbr.cz>, Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>, Tomáš Sasák <xsasak01@stud.fit.vutbr.cz>, Martin Krajèi  <xkrajc21@stud.fit.vutbr.cz>.
 * 
 */

/**
 * @brief Main function in main.cpp. Function launches whole application and GUI.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
