//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  standard_deviation_main.cpp created: 2018-Apr-20
//=================================================

/**
 * @file standard_deviation_main.cpp
 * @author Lubomir Svehla
 * @brief Reads set of values from standard input and computes standard deviation from them
 */

#include <vector>
#include <iostream>
#include "standard_deviation.h"

int main()
{
  std::vector<double> array1;

  getArray(array1);
  std::cout << standardDeviation(array1) << std::endl;

  return 0;
}

/*** end of file standard_deviation_main.cpp ***/