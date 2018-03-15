//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  standard_deviation_tests.cpp created: 2018-Mar-15
//=================================================

#include "googletest-master/googletest/include/gtest/gtest.h"

#include "googletest-master/googlemock/include/gmock/gmock.h"
#include "../standard_deviation/standard_deviation.h"

#define DESIRED_PRECISION 0.000001

TEST(testing, AverageValue)
{
  double array1[0];
  double array2[2] = {};
  double array3[8] = {1, 4, -7.5, -8.6, 4.9, 10, 0, 12.9};

  ASSERT_ANY_THROW(getAverage(array1));
  ASSERT_ANY_THROW(getAverage(array2));

  array2[0] = 5;
  array2[1] = 5;
  EXPECT_NEAR(getAverage(array2), 5, 5 * DESIRED_PRECISION);
  EXPECT_NEAR(getAverage(array3), 2.0875, 2.0875 * DESIRED_PRECISION);
}

TEST(testing, StandardDeviation)
{
  double array1[0];
  double array2[2] = {};
  double array3[8] = {1, 4, -7.5, -8.6, 4.9, 10, 0, 12.9};

  ASSERT_ANY_THROW(StandardDeviation(array1));
  ASSERT_ANY_THROW(StandardDeviation(array2));

  array2[0] = 5;
  array2[1] = 5;
  EXPECT_NEAR(StandardDeviation(array2), 0, DESIRED_PRECISION);
  EXPECT_NEAR(StandardDeviation(array3), 7.58541, 7.58541 * DESIRED_PRECISION);
}
