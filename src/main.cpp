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
#include "math_lib/mathematical_library.h"

int main()
{
  std::cout << "Hello, World!" << std::endl;
  std::cout << Subtract(5, 5) << std::endl;

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
  std::cin >> i;

  return 0;
}