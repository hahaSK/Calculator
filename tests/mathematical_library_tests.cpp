//
// Created by pppol on 9.3.2018.
//

#include "googletest-master/googletest/include/gtest/gtest.h"

#include "googletest-master/googlemock/include/gmock/gmock.h"
#include "../math_lib/mathematical_library.h"

TEST(testiing, Addition)
{
	ASSERT_EQ(scitanie(5,5),10);
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
