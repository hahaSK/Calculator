//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  main.cpp created: 2018-Mar-09
//===========================================================


#include <iostream>
#include <typeinfo>
#include "math_lib/mathematical_library.h"

#include "GUI/Calculator/mainwindow.h"
#include <QApplication>

int main()
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}