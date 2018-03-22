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
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <sstream>
#include "standard_deviation.h"
#include "../math_lib/mathematical_library.h"

bool is_digits(const std::string &str)
{
  return str.find_first_not_of("0123456789.-") == std::string::npos;
}


void getArray(std::vector<double> &numberSequence)
{
  std::string values;
  std::cout << "Enter any number of values (with or without decimal point), separated by \";\" " << std::endl;
  std::cin >> values;

  std::string delimiter = ";";
  size_t pos = 0;
  std::string token;


  while ((pos = values.find(delimiter)) != std::string::npos)
  {
    token = values.substr(0, pos);
    if (!(is_digits(token)) || (token.empty()))
    {
      throw std::invalid_argument("Invalid entry");
    }
    numberSequence.push_back (stod(token));
    values.erase(0, pos + delimiter.length());
  }
  token = values.substr(0, pos);
  numberSequence.push_back (stod(values));
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
