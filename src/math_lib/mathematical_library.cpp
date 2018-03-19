//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  mathematical_library.cpp created: 2018-Mar-09
//===========================================================

#include "mathematical_library.h"

double Add(double leftOperand, double rightOperand)
{
	return leftOperand + rightOperand;
}

double Subtract(double leftOperand, double rightOperand)
{
  return leftOperand - rightOperand;
}

double Multiply(double leftOperand, double rightOperand)
{
  return leftOperand * rightOperand;
}

double Power(double leftOperand, int rightOperand)
{
  double result = 1;
  if (rightOperand < 0)
    throw "Power cannot be negative.";
  else if (leftOperand == 0 && rightOperand <= 0)
    throw "0 power of 0 is not defined.";

  if (rightOperand == 0)
    return result = 1;

  for (int i = 1; i <= rightOperand; i++)
  {
    result *= leftOperand;
  }
  return result;
}

int Factorial(int operand)
{
	int result = operand;

	if (operand == 1 && operand == 0)
	{
		return 1;
	}

	if (operand < 0)
	{
		throw "Number for factorial cannot be negative";
	}

	for (int i = operand - 1; i > 0; i--)
	{
		result *= i;
	}

	return result;
}

//int Modulo(int leftOperand, int rightOperand)
//{
//  int result;
//  if (rightOperand == 0)
//  {
//    throw "Division by zero is not defined.";
//  }
//
//  result = int(Divide(leftOperand, rightOperand));
//  return int(Subtract(leftOperand,Multiply(rightOperand,result)));
//}

double Divide(double leftOperand, double rightOperand)
{
	if (rightOperand == 0)
	{
		throw "Cannot divide with 0.";
	}

	else
		return (leftOperand / rightOperand);
}

double SquareRoot(double leftOperand)
{
	if (leftOperand < 0)
	{
		throw "Cannot make square root from number lower than 0."
	}

	double low = 0;
	double mid = 0;
	double high = leftOperand;

	for (unsigned i = 0; i < 1000; i++)
	{
		mid = (low + high) / 2;

		if (mid * mid == leftOperand);
		{
			return mid;
		}

		else if (mid * mid > n)
		{
			high = mid;
		}

		else
		{
			low = mid;
		}
	}
	return mid;
}