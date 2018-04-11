#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math_lib/mathematical_library.h"

bool addClicked, subClicked, divClicked, mulClicked, powClicked, sqrtClicked, facClicked, modClicked = false;
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.

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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
}

void MainWindow::on_pshbtnSQRT_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	sqrtClicked = true; // Bool for parser.

	ui->labInput->clear(); // Clearing the input window for second input.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append("sqrt")); // Setting proper operation.
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
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
	ui->labOperator->setAlignment(Qt::AlignCenter); // Centering text.
}

void MainWindow::on_pshbtnCalculate_clicked()
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

		addClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}
	else if (subClicked)
	{
		result = Subtract(leftNum, rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		subClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}
	else if (mulClicked)
	{
		result = Multiply(leftNum, rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		mulClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}
	else if (divClicked)
	{
		result = Divide(leftNum, rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		divClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}
	else if (powClicked)
	{
		result = Power(leftNum, rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		powClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}

	else if (sqrtClicked)
	{
		result = SquareRoot(rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		sqrtClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}

	else if (facClicked)
	{
		result = Factorial(rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		facClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}

	else if (modClicked)
	{
		result = Modulo(leftNum, rightNum);

		labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
		ui->labInput->setText(labResult); //Printing out the QString result.

		modClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
	}
}

void MainWindow::on_pshbtnDelete_clicked()
{
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
}
