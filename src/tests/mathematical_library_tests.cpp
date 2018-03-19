//=====================ShatteredButWhole=====================
//              IVS project 2 - Calculator
//
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  mathematical_library_tests.cpp created: 2018-Mar-09
//===========================================================

#include "googletest-master/googletest/include/gtest/gtest.h"

#include "googletest-master/googlemock/include/gmock/gmock.h"
#include "../math_lib/mathematical_library.h"

TEST(testing, sub)
{
  EXPECT_EQ(Subtract(5,5),0);
}


TEST(testing, Add)
{
 EXPECT_EQ(Add(5,5),10);
 EXPECT_EQ(Add(10,-5),5);
 EXPECT_EQ(Add(-15,-10),-25);
 EXPECT_EQ(Add(3.3, 1.2),4.5);
}

TEST(testing, Factorial)
{
  EXPECT_EQ(Factorial(0),1);
  EXPECT_EQ(Factorial(5),120);
  EXPECT_EQ(Factorial(-5),-120);
}

//TEST(testing, Dividing)
//{
//  EXPECT_EQ(Divide(0, 42), 0);
//  ASSERT_EQ(Divide(196, 14), 14);
//  ASSERT_ANY_THROW(Divide(142, 0));
//}
//
//TEST(testing, Modulo)
//{
//  ASSERT_EQ(Modulo(0, 42), 0);
//  ASSERT_EQ(Modulo(196, 42), 28);
//  ASSERT_ANY_THROW(Modulo(142, 0));
//}
//
//TEST(testing, SquareRoot)
//{
//  ASSERT_EQ(SquareRoot(0), 0);
//  ASSERT_EQ(SquareRoot(196), 14);
//  ASSERT_ANY_THROW(SquareRoot(-42));
//}

TEST(testing, Multiply)
{
  EXPECT_EQ(Multiply(2,2),4);
  EXPECT_EQ(Multiply(2,-2),-4);
  EXPECT_EQ(Multiply(0,4),0);
  EXPECT_EQ(Multiply(1,10),10);
}

TEST(Substraction, Basics)
{
	ASSERT_EQ(sub(2, 2) == 0);
	ASSERT_ANY_THROW(sub(e, 25));
	ASSERT_ANY_THROW(sub(25, e));
	ASSERT_ANY_THROW(sub(e, f));
	ASSERT_EQ(sub(2, 7) == -5);
	ASSERT_EQ(sub(25, 100) == -75);
	ASSERT_EQ(sub(100, 25) == 75);
}

TEST(Power, Basics)
{
	ASSERT_EQ(pow(2, 2) == 4);
	ASSERT_EQ(pow(2, 10) == 1024);
	ASSERT_EQ(pow(-5, 2) == 25);
	ASSERT_EQ(pow(-7, 8) == 5764801);
	ASSERT_ANY_THROW(pow(2, -5));
	ASSERT_ANY_THROW(pow(4, 3.2));
	ASSERT_ANY_THROW(2, -4.5);
	ASSERT_EQ(pow(7, 0) == 1);
	ASSERT_EQ(pow(22, 3) == 10648);
	ASSERT_EQ(pow(-15, 5) == -759375);
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
