#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(401, 263);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pshbtn0_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('0'));
}

void MainWindow::on_pshbtn1_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('1'));
}

void MainWindow::on_pshbtn2_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('2'));
}

void MainWindow::on_pshbtn3_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('3'));
}

void MainWindow::on_pshbtn4_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('4'));
}

void MainWindow::on_pshbtn5_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('5'));
}

void MainWindow::on_pshbtn6_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('6'));
}

void MainWindow::on_pshbtn7_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('7'));
}

void MainWindow::on_pshbtn8_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('8'));
}

void MainWindow::on_pshbtn9_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('9'));
}

void MainWindow::on_pshbtnComma_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('.'));
}

void MainWindow::on_pshbtnAdditiveOperator_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('+'));
}

void MainWindow::on_pshbtnSubstractiveOperator_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('-'));
}

void MainWindow::on_pshbtnMultiplicativeOperator_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('*'));
}

void MainWindow::on_pshbtnDivideOperator_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('/'));
}

void MainWindow::on_pshbtnPowerOperator_clicked()
{
    ui->labInput->setText(ui->labInput->text().append('^'));
}

void MainWindow::on_pshbtnCalculate_clicked()
{

}

void MainWindow::on_pshbtnSQRT_clicked()
{

}

void MainWindow::on_pshbtnDelete_clicked()
{
    QString string = ui->labInput->text();
    string = string.left(string.length() - 1);
    ui->labInput->setText(string);
}
