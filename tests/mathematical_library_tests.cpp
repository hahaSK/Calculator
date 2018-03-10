//
// Created by pppol on 9.3.2018.
//

#include "googletest-master/googletest/include/gtest/gtest.h"

#include "googletest-master/googlemock/include/gmock/gmock.h"
#include "../math_lib/mathematical_library.h"

TEST(testing, Dividing)
{
  EXPECT_EQ(Divide(0, 42), 0);
  ASSERT_EQ(Divide(196, 14), 14);
  ASSERT_ANY_THROW(Divide(142, 0));
}

TEST(testing, Modulo)
{
  ASSERT_EQ(Modulo(0, 42), 0);
  ASSERT_EQ(Modulo(196, 42), 28);
  ASSERT_ANY_THROW(Modulo(142, 0));
}

TEST(testing, SquareRoot)
{
  ASSERT_EQ(SquareRoot(0), 0);
  ASSERT_EQ(SquareRoot(196), 14);
  ASSERT_ANY_THROW(SquareRoot(-42));
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
