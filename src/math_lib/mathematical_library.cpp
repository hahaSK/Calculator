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

double Subtract(double param1, double param2)
{
  return param1 - param2;
}

double Power(double param1, int param2)
{
  double result = 1;
  if (param2 < 0)
    throw "Power cannot be negative.";
  else if (param1 == 0 && param2 <= 0)
    throw "0 power of 0 is not defined.";

  if (param2 == 0)
    return result = 1;

  for (int i = 1; i <= param2; i++)
  {
    result *= param1;
  }
  return result;
}
