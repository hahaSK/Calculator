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

int Modulo(int leftOperand, int rightOperand)
{
  int result;
  if (rightOperand == 0)
  {
    throw "Division by zero is not defined.";
  }

  result = int(Divide(leftOperand, rightOperand));
  return int(Subtract(leftOperand,Multiply(rightOperand,result)));
}