//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  stdandard_deviation.cpp created: 2018-Mar-15
//=================================================

/**
 * @file standard_deviation.cpp
 * @author Lubomir Svehla
 * @brief Contains set of functions to get sequence of numbers and to compute standard deviation
 */

#include <array>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <sstream>
#include <fstream>
#include "standard_deviation.h"
#include "../math_lib/mathematical_library.h"

void getArray(std::vector<double> &numberSequence)
{
  std::cout << "Enter path to file, you want to read the arguments from " << std::endl;
  std::string fname, line;
  std::cin >> fname;

  double n;

  std::ifstream myfile(fname);
  getline(myfile,line);
  if (myfile.is_open() )
  {
    myfile.close();
  }

  std::istringstream sstr(line);

  while(sstr >> n)
  {
    if(sstr.fail())
    {
      sstr.clear();
      std::string dummy;
      sstr >> dummy;
      continue;
    }
    numberSequence.push_back(n);
  }
}

double getAverage(std::vector<double> &numberSequence)
{
  double result = 0.;
  int counter = 0;

  if (numberSequence.empty())
  {
    throw std::invalid_argument("At least one value in array is needed to compute average");
  }

  for (counter = 0; counter < numberSequence.size(); counter++)
  {
    result = Add(result, numberSequence[counter]);
  }

  return Divide(result, counter);
}

double standardDeviation(std::vector<double> &numberSequence)
{
  double result, averageValue, sumContent = 0.;
  int counter = 0;

  averageValue = getAverage(numberSequence);
  if (numberSequence.size() <= 1)
  {
    throw std::invalid_argument("Minimum of 2 values in array is needed to compute standard deviation");
  }

  for (counter = 0; counter < numberSequence.size(); counter++)
  {
    sumContent = Add(sumContent, Power(numberSequence[counter], 2));
  }
  result = Subtract(sumContent, Multiply(numberSequence.size(), Power(averageValue, 2)));
  result = Divide(result, Subtract(numberSequence.size(), 1));
  return SquareRoot(result);
}

/*** end of file standard_deviation.cpp ***/