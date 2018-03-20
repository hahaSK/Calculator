//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  stdandard_deviation.cpp created: 2018-Mar-15
//=================================================

#include <array>
#include "standard_deviation.h"
#include "../math_lib/mathematical_library.h"


double getAverage(double numberSequence[], int size)
{
  double result = 0.;
  int counter = 0;

  if (size == 0)
  {
    throw "At least one value in array is needed to compute average";
  }

  for (counter = 0; counter<size; counter++)
  {
    result = Add(result, numberSequence[counter]);
  }

  return Divide(result, counter);
}

double standardDeviation(double *numberSequence, int size)
{
  double result = 0., averageValue, sumContent = 0. ;
  int counter = 0;

  if (size <= 1)
  {
    throw "Minimum of 2 values in array is needed to compute standard deviation";
  }

  averageValue = getAverage(numberSequence, size);
  for (counter = 0; counter<size; counter++)
  {
    sumContent = Add(sumContent, Power(numberSequence[counter], 2));
  }
  result = Subtract(sumContent, Multiply(size, Power(averageValue, 2)));
  result = Divide(result, Subtract(size, 1));
  return SquareRoot(result);
}
