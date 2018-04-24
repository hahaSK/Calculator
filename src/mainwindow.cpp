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
 * @file mainwindow.cpp
 * @author Juraj Lahvicka
 * @brief Creates GUI for the calculator
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math_lib/mathematical_library.h"

bool addClicked, subClicked, divClicked, mulClicked, powClicked, sqrtClicked, facClicked, modClicked, exception = false; /** @brief Bool declarations for parser. */
double leftNum, rightNum = 0; /** @brief Double declaration of leftNum and rightNum in calculator. */

/**
 * @brief Function for main window which showsup when calculator is launched.
 *
 * Function launches window for calculator with fixed size of 401x263px.
 */
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setFixedSize(401, 263);
}
/**
 * @brief Destructor of main window.
 * Destructor is called when X icon is pressed. Function removes the ui and terminates calculator.
 */
MainWindow::~MainWindow()
{
	delete ui;
}

/**
 * @brief Function for button '0' in calculator.
 * This button in state 'clicked' appends number '0' at the end of label 'labInput' which is used for user input.
 */
void MainWindow::on_pshbtn0_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('0'));
}

/**
* @brief Function for button '1' in calculator.
* This button in state 'clicked' appends number '1' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn1_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('1'));
}

/**
* @brief Function for button '2' in calculator.
* This button in state 'clicked' appends number '2' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn2_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('2'));
}

/**
* @brief Function for button '3' in calculator.
* This button in state 'clicked' appends number '3' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn3_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('3'));
}

/**
* @brief Function for button '4' in calculator.
* This button in state 'clicked' appends number '4' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn4_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('4'));
}

/**
* @brief Function for button '5' in calculator.
* This button in state 'clicked' appends number '5' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn5_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('5'));
}

/**
* @brief Function for button '6' in calculator.
* This button in state 'clicked' appends number '6' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn6_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('6'));
}

/**
* @brief Function for button '7' in calculator.
* This button in state 'clicked' appends number '7' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn7_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('7'));
}

/**
* @brief Function for button '8' in calculator.
* This button in state 'clicked' appends number '8' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn8_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('8'));
}

/**
* @brief Function for button '9' in calculator.
* This button in state 'clicked' appends number '9' at the end of label 'labInput' which is used for user input.
*/
void MainWindow::on_pshbtn9_clicked()
{
	ui->labInput->setText(ui->labInput->text().append('9'));
}

/**
 * @brief Function for button '.' (decimal point) in calculator.
 * This button in state 'clicked' appends decimal point '.' at the end of label 'labInput' which is used for user input.
 * Function tests at the beginning, if the decimal point is included already in the number, so user cannot append more than one decimal point. 
 */
void MainWindow::on_pshbtnComma_clicked()
{
	QString test;
	test = ui->labInput->text();

	if (!test.contains("."))
	{
		ui->labInput->setText(ui->labInput->text().append('.'));
	}
}

/**
 * @brief Function for button '+' (add) in calculator.
 * This button in state 'clicked' changes #addClicked to true for parser.
 * Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
 * If no other mathematical operation bool was not set to true before, function changes #addClicked to true for parser and loads first number to the variable #leftNum,
 * clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
 */
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

/**
* @brief Function for button '-' (sub) in calculator.
* This button in state 'clicked' changes #subClicked to true for parser.
* Function works in two modes, one mode appends minus sign '-' at the label 'labInput' if the label is empty. The second mode works as initialization of mathematical operation substraction.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #subClicked to true for parser and loads first number to the variable #leftNum,
* clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
*/
void MainWindow::on_pshbtnSubstractiveOperator_clicked()
{
    if (ui->labInput->text() == NULL) // Check if label is empty
    {
        ui->labInput->setText("-"); // Number is negative
        return;
    }

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

/**
* @brief Function for button '*' (multiply) in calculator.
* This button in state 'clicked' changes #mulClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #mulClicked to true for parser and loads first number to the variable #leftNum,
* clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
*/
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

/**
* @brief Function for button '/' (divide) in calculator.
* This button in state 'clicked' changes #divClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #divClicked to true for parser and loads first number to the variable #leftNum,
* clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
*/
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

/**
* @brief Function for button '^' (power) in calculator.
* This button in state 'clicked' changes #powClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #powClicked to true for parser and loads first number to the variable #leftNum,
* clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
*/
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

/**
* @brief Function for button 'sqrt' (square root) in calculator.
* This button in state 'clicked' changes #sqrtClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #sqrtClicked to true for parser and loads first number to the variable #leftNum
* and shows up the mathematical operation sign in label 'labOperator'.
*/
void MainWindow::on_pshbtnSQRT_clicked()
{
	if (addClicked || subClicked || mulClicked || divClicked || sqrtClicked || facClicked || modClicked) // Checks if some operation was already clicked before, to finish that one first.
	{
		MainWindow::on_pshbtnCalculate_clicked();
		return;
	}

	sqrtClicked = true; // Bool for parser.

	ui->labOperator->clear(); // Clearing the Operator label, to show proper operation.
	ui->labOperator->setText(ui->labOperator->text().append("sqrt")); // Setting proper operation.
}

/**
* @brief Function for button '!' (factorial) in calculator.
* This button in state 'clicked' changes #facClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #facClicked to true for parser and loads first number to the variable #leftNum,
* and shows up the mathematical operation sign in label 'labOperator'.
*/
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

/**
* @brief Function for button 'MOD' (modulo) in calculator.
* This button in state 'clicked' changes #modClicked to true for parser.
* Function first checks if some of the other bools were pressed before, if some mathematical operation was pressed already, that operation needs to finish first.
* If no other mathematical operation bool was not set to true before, function changes #modClicked to true for parser and loads first number to the variable #leftNum,
* clears the input label 'labInput' to set up for second input and shows up the mathematical operation sign in label 'labOperator'.
*/
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

/**
* @brief Function for button '=' (calculate) in calculator, which calculates the input and shows output.
* This button in state 'clicked' calculates the input #leftNum and #rightNum and shows it up in label 'labInput'.
* Function defines double #result for storing result, removes the text in label #labOperator and saves the second input of user in #rightNum.
* After that, function checks which bool is set to true, that mathematical operation is going to happen. Result of stored in result and after that
* formated from the c++ double to QString text. Also, the input is showed in the label #labOperator, so user can know, which numbers and operations,
* he put in. If users input is invalid, exception is catched and showed in the label #labInput and the all buttons except 'CE' are blocked. So user needs
* to press the 'CE' to restart everything.
*/
void MainWindow::on_pshbtnCalculate_clicked()
{
    try
    {
        QString labResult; /** @brief Declarationg of Qt result string. */
        double result = 0; /** @brief Double declaration of result where result is stored in. */

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
            rightNum = (int) rightNum; // Reconvert to integer
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
            rightNum = (int) rightNum; // Reconvert to integer
            result = Factorial(rightNum);

            labResult = QString::number(result, 'g', 10); // Formating the c++ double result to QString, needs to be shown in Label labInput .
            ui->labInput->setText(labResult); //Printing out the QString result.

            ui->labOperator->setText(QString::number(rightNum) + "!"); // Prints the equation into labOperator (above result)

            facClicked = false; // Funcion ended, returning the value of false to the boolean, to prevent that it will not happen again automatically.
        }

        else if (modClicked)
        {
            leftNum = (int) leftNum; // Reconvert to integer
            rightNum = (int) rightNum; // Reconvert to integer
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

/**
 * @brief Function for button 'C' (delete), function removes one number.
 * This button on state 'clicked' removes one character from QString #string.
 * Function takes current number and stores it in string, decrements length by one and returns it in #labInput.
 */
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

/**
 * @brief Funtion for button 'CE' (clear), function clears everything.
 * This button on state 'clicked' removes everything from #labInput #laboperator. Restores #rightNum and #leftNum to 0.
 * Also sets all mathematical operation bools to false and enables or disables the other button when exception happens.
 */
void MainWindow::on_pshbtnClear_clicked()
{
	ui->labInput->clear(); // Removing the numbers from label.
	ui->labOperator->clear(); // Removing the operator from label.

	addClicked = subClicked = divClicked = mulClicked = powClicked = sqrtClicked = facClicked = modClicked = false; // Removing all trues from bools.

	leftNum = 0; // And reseting both sides to 0.
	rightNum = 0;

    disableOrEnableButtonsOnException(exception = false); // Set exception to false and enable or disable buttons
}

/**
 * @brief Function disables or enables buttons when exception happens.
 * @param exception Indicates if exception happened.
 * If exception happened, disables all buttons except 'CE' and 'C'-
 * On oposite, enables all buttons.
 */
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

/*** end of file mainwindow.cpp ***/