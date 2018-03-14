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

double Add(double param1, double param2);

/**
 * Subtract two numbers
 * @param param1 - minuend
 * @param param2 - subtrahend
 * @return result
 */
double Subtract(double param1, double param2);

double Multiply(double param1, double param2);
double Divide(double param1, double param2);

/**
 * Natural power of number
 * @param param1 - number
 * @param param2 - power
 * @return result
 */
double Power(double param1, int param2);

double SquareRoot(double param);
int Factorial(int param);
double Modulo(double param1, double param2);