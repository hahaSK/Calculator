##=====================ShatteredButWhole=====================
##              IVS project 2 - Calculator
##
##  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
##           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
##           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
##           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
##
##  CMakeLists.txt created: 2018-Mar-14
##===========================================================

cmake_minimum_required(VERSION 2.8)

project(runTests)

#If tests very run in VS the linker was throwing an error because of the library was already defined but dll
set(gtest_force_shared_crt TRUE)

#Google tests
add_subdirectory(tests/googletest-master)
include_directories(tests/googletest-master/googletest/include)
include_directories(tests/googletest-master/googlemock/include)

set(GTEST_LIBRARY tests/googletest-master/googletest)
set(GTEST_INCLUDE_DIR tests/googletest-master/googletest/include)
set(GTEST_MAIN_LIBRARY tests/googletest-master/googletest)

enable_testing()
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME}
        tests/mathematical_library_tests.cpp
        math_lib/mathematical_library.cpp
        math_lib/mathematical_library.h
        )

target_link_libraries(${PROJECT_NAME}
        gtest
        gtest_main
        )

add_test(mathematical_library_test ${PROJECT_NAME})