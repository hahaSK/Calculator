//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  
//===========================================================

/**
 * @file mainwindow.h
 * @author Juraj Lahvicka
 * @brief Contains declarations of functions from mainwindow.cpp
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pshbtn0_clicked();

    void on_pshbtn1_clicked();

    void on_pshbtn2_clicked();

    void on_pshbtn3_clicked();

    void on_pshbtn4_clicked();

    void on_pshbtn5_clicked();

    void on_pshbtn6_clicked();

    void on_pshbtn7_clicked();

    void on_pshbtn8_clicked();

    void on_pshbtn9_clicked();

    void on_pshbtnComma_clicked();

    void on_pshbtnCalculate_clicked();

	void on_pshbtnFactorial_clicked();

    void on_pshbtnAdditiveOperator_clicked();

    void on_pshbtnSubstractiveOperator_clicked();

    void on_pshbtnMultiplicativeOperator_clicked();

    void on_pshbtnDivideOperator_clicked();

    void on_pshbtnPowerOperator_clicked();

    void on_pshbtnSQRT_clicked();

	void on_pshbtnModulo_clicked();

    void on_pshbtnDelete_clicked();

	void on_pshbtnClear_clicked();

private:
    Ui::MainWindow *ui;

    /**
     * @brief Disable or enable buttons when exception is thrown
     * @param exception is exception ?
     */
    void disableOrEnableButtonsOnException(bool exception);
};

#endif // MAINWINDOW_H

/*** end of file mainwindow.h ***/