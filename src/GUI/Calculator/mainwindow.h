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
};

#endif // MAINWINDOW_H
