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

/**
 * @file mathematical_library.cpp
 * @authors Juraj Lahvicka, Lubomir Svehla, Tomas Sasak, Martin Krajci
 * @brief Contains functions for computing mathematical operations
 */

#include "mathematical_library.h"
#include <stdexcept>

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

double Power(double leftOperand, long long int rightOperand)
{
  double result = 1;

  if (rightOperand < 0)
  {
    throw std::runtime_error("Power cannot be negative.");
  }

  else if (leftOperand == 0 && rightOperand <= 0)
  {
    throw std::runtime_error("0 power of 0 is not defined.");
  }

  if (rightOperand == 0)
  {
    return result = 1;
  }

  for (int i = 1; i <= rightOperand; i++)
  {
    result *= leftOperand;
  }
  return result;
}

unsigned long long int Factorial(long long int operand)
{
  unsigned long long int result = operand;

  if (operand == 1 || operand == 0)
  {
    return 1;
  }

  if (operand < 0)
  {
    throw std::runtime_error("Number for factorial cannot be negative");
  }

  for (unsigned long long int i = operand - 1; i > 0; i--)
  {
    result *= i;
  }

  if (result == 0)
  {
    throw std::runtime_error("Please use smaller numbers");
  }

  return result;
}

int Modulo(long long int leftOperand, long long int rightOperand)
{
  int result;

  if (rightOperand == 0)
  {
    throw std::runtime_error("Division by zero is not defined.");
  }

  result = int(Divide(leftOperand, rightOperand));
  return int(Subtract(leftOperand, Multiply(rightOperand, result)));
}

double Divide(double leftOperand, double rightOperand)
{
  if (rightOperand == 0)
  {
    throw std::runtime_error("Cannot divide with 0.");
  }

  else
    return (leftOperand / rightOperand);
}

double SquareRoot(double operand)
{
  if (operand < 0)
  {
    throw std::runtime_error("Cannot make square root from number lower than 0.");
  }

  double low = 0;
  double mid = 0;
  double high = operand;

  for (unsigned i = 0; i < 1000; i++)
  {
    mid = (low + high) / 2;

    if (mid * mid == operand)
    {
      return mid;
    }

    else if (mid * mid > operand)
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

/*** end of file mathematical_library.cpp ***/