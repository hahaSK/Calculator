//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  mathematical_library.h created: 2018-Mar-09
//===========================================================

#include <vector>

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

/**
 *Function divides two numbers, throws assertion when second number has value of 0.
 *@param leftOperand First number.
 *@param rightOperand Second number which will divide first number.
 *@return Function returns number of leftOperand and rightOperand divided.
 */
double Divide(double leftOperand, double rightOperand);

/**
 * Natural power of number
 * @param leftOperand - number
 * @param rightOperand - power
 * @return result
 */
double Power(double leftOperand, int rightOperand);

/**
* Function performs a square root of an number. Function throws an assertion when operand is less than 0.
* @param operand Number that square root is going to be performed.
* @return Function returns square root of the number.
*/
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