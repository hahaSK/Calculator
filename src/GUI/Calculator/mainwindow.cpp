#include "mainwindow.h"
#include "ui_mainwindow.h"
//TODO
#include "../../math_lib/mathematical_library.h"

bool addClicked, subClicked, divClicked, mulClicked, powClicked, sqrtClicked, facClicked, modClicked = false, exception = false;
double leftNum, rightNum = 0;

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
	QString test;
	test = ui->labInput->text();

	if (!test.contains("."))
	{
		ui->labInput->setText(ui->labInput->text().append('.'));
	}
}

void MainWindow::on_pshbtnAdditiveOperator_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return; 
	}

	addClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append('+')); // Setting proper operation.
}

void MainWindow::on_pshbtnSubstractiveOperator_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	subClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append('-')); // Setting proper operation.
}

void MainWindow::on_pshbtnMultiplicativeOperator_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	mulClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append('*')); // Setting proper operation.
}

void MainWindow::on_pshbtnDivideOperator_clicked() 
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
	}

	divClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append('/')); // Setting proper operation.
}

void MainWindow::on_pshbtnPowerOperator_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	powClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append('^')); // Setting proper operation.
}

void MainWindow::on_pshbtnSQRT_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	sqrtClicked = true; // Bool for parser.

    //ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append("sqrt")); // Setting proper operation.
}

void MainWindow::on_pshbtnFactorial_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	facClicked = true; // Bool for parser.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append("!")); // Setting proper operation.   
}

void MainWindow::on_pshbtnModulo_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	modClicked = true; // Bool for parser.

	leftNum = ui->labInput->text().toDouble(); // Getting first input from user.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append("mod")); // Setting proper operation.
}

void MainWindow::on_pshbtnCalculate_clicked()
{
    try
    {
        QString labResult; // Declarationg of Qt result string.
        double result = 0; // Declaration of result from mathematical library.

        ui->labOperator->clear(); // Removing the Label containg operation. (Not needed anymore)
        rightNum = ui->labInput->text().toDouble(); // Getting second input number.

        if (addClicked)
        {
            result = Add(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " + " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            addClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }
        else if (subClicked)
        {
            result = Subtract(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " - " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            subClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }
        else if (mulClicked)
        {
            result = Multiply(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " * " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            mulClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }
        else if (divClicked)
        {
            result = Divide(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " / " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            divClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }
        else if (powClicked)
        {
            result = Power(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " ^ " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            powClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }

        else if (sqrtClicked)
        {
            result = SquareRoot(rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText("sqrt(" + QString::number(rightNum) + ")"); // Prints the equation into labOperator (above result)

            sqrtClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }

        else if (facClicked)
        {
            result = Factorial(rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(rightNum) + "!"); // Prints the equation into labOperator (above result)

            facClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }

        else if (modClicked)
        {
            result = Modulo(leftNum, rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(leftNum) + " Mod " + QString::number(rightNum)); // Prints the equation into labOperator (above result)

            modClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }
    }
    catch (std::exception &e)
    {
        ui->labInput->setText(e.what()); // Write the error message
        disableOrEnableButtonsOnException(exception = true); // Set exception to true and disable or Enable buttons
    }
}

void MainWindow::on_pshbtnDelete_clicked()
{
    if (exception == true)
    {
        on_pshbtnClear_clicked(); // Clears the whole label when exception is thrown
    }

	QString string = ui->labInput->text(); // String takes the current number from label.
	string = string.left(string.length() - 1); // Shorts it by one.
	ui->labInput->setText(string); // And returns it back.
}

void MainWindow::on_pshbtnClear_clicked()
{
	ui->labInput->clear(); // Removing the numbers from label.
	ui->labOperator->clear(); // Removing the operator from label.

	addClicked = subClicked = divClicked = mulClicked = powClicked = sqrtClicked = facClicked = modClicked = false; // Removing all trues from bools.

	leftNum = 0; // And reseting both sides to 0.
	rightNum = 0;

    disableOrEnableButtonsOnException(exception = false); // Set exception to false and enable or disable buttons
}

void MainWindow::disableOrEnableButtonsOnException(bool exception)
{
    if (exception == true)
    {
        // Disable all number buttons to false
        ui->pshbtn0->setEnabled(false);
        ui->pshbtn1->setEnabled(false);
        ui->pshbtn2->setEnabled(false);
        ui->pshbtn3->setEnabled(false);
        ui->pshbtn4->setEnabled(false);
        ui->pshbtn5->setEnabled(false);
        ui->pshbtn6->setEnabled(false);
        ui->pshbtn7->setEnabled(false);
        ui->pshbtn8->setEnabled(false);
        ui->pshbtn9->setEnabled(false);

        // Disable all other buttons to false except delete and clear
        ui->pshbtnAdditiveOperator->setEnabled(false);
        ui->pshbtnCalculate->setEnabled(false);
        ui->pshbtnComma->setEnabled(false);
        ui->pshbtnDivideOperator->setEnabled(false);
        ui->pshbtnFactorial->setEnabled(false);
        ui->pshbtnModulo->setEnabled(false);
        ui->pshbtnMultiplicativeOperator->setEnabled(false);
        ui->pshbtnPowerOperator->setEnabled(false);
        ui->pshbtnSQRT->setEnabled(false);
        ui->pshbtnSubstractiveOperator->setEnabled(false);
        }

    if (exception == false)
    {
        // Enable all number buttons to true
        ui->pshbtn0->setEnabled(true);
        ui->pshbtn1->setEnabled(true);
        ui->pshbtn2->setEnabled(true);
        ui->pshbtn3->setEnabled(true);
        ui->pshbtn4->setEnabled(true);
        ui->pshbtn5->setEnabled(true);
        ui->pshbtn6->setEnabled(true);
        ui->pshbtn7->setEnabled(true);
        ui->pshbtn8->setEnabled(true);
        ui->pshbtn9->setEnabled(true);

        // Enable all other buttons to true except delete and clear
        ui->pshbtnAdditiveOperator->setEnabled(true);
        ui->pshbtnCalculate->setEnabled(true);
        ui->pshbtnComma->setEnabled(true);
        ui->pshbtnDivideOperator->setEnabled(true);
        ui->pshbtnFactorial->setEnabled(true);
        ui->pshbtnModulo->setEnabled(true);
        ui->pshbtnMultiplicativeOperator->setEnabled(true);
        ui->pshbtnPowerOperator->setEnabled(true);
        ui->pshbtnSQRT->setEnabled(true);
        ui->pshbtnSubstractiveOperator->setEnabled(true);
        }
}

