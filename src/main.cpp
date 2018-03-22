//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  main.cpp created: 2018-Mar-09
//===========================================================


#include <iostream>
#include <typeinfo>
#include <vector>
#include "math_lib/mathematical_library.h"
#include "standard_deviation/standard_deviation.h"

int main()
{

  /*std::cout << Subtract(5, 5) << std::endl;

  try
  {

    std::cout << Power(5, 5) << std::endl;
  }
  catch (char const *ex)
  {
    std::cout << ex;
    return EXIT_FAILURE;
  }


  int i;
  std::cin >> i;*/

  std::vector<double> array1;
  //double array2[100];
  //double array3[1000];
  int size = -1;

  getArray(array1);
  std::cout << standardDeviation(array1) << std::endl;
  //std::cout << standardDeviation(array2, size) << std::endl;
  //std::cout << standardDeviation(array3, size) << std::endl;

  return 0;
}