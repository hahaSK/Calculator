//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajči  <xkrajc21@stud.fit.vutbr.cz>
//
//  mathematical_library.h created: 2018-Mar-09
//===========================================================


/**
* Add two numbers
* @param leftOperand - augend
* @param rightOperand - addend
* @return result
*/
double Add(double leftOperand, double rightOperand);

/**
 * Subtract two numbers
 * @param leftOperand - minuend
 * @param rightOperand - subtrahend
 * @return result
 */
double Subtract(double leftOperand, double rightOperand);

/**
 * Multiply two numbers
 * @param leftOperand - multiplicand
 * @param rightOperand - multiplier
 * @return result
 */
double Multiply(double leftOperand, double rightOperand);


double Divide(double leftOperand, double rightOperand);

/**
 * Natural power of number
 * @param leftOperand - number
 * @param rightOperand - power
 * @return result
 */
double Power(double leftOperand, int rightOperand);

double SquareRoot(double operand);

/**
* Make factorial of number
* @param operand - number for factorial
* @return result
*/
int Factorial(int operand);

/**
 * Remainder of the division of leftOperand by rightOperand
 * @param leftOperand - dividend
 * @param rightOperand - divisor
 * @return result
 */
int Modulo(int leftOperand, int rightOperand);