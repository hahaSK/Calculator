#=====================ShatteredButWhole=====================
#              IVS project 2 - Calculator
#
#  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
#           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
#           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
#           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
#
#  CMakeLists.txt created: 2018-Mar-09
#===========================================================

cmake_minimum_required(VERSION 2.8)
project(Calculator)

#For VS environment
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# The version number.
set (Calculator_VERSION_MAJOR 0)
set (Calculator_VERSION_MINOR 2)

set(CMAKE_CXX_STANDARD 17)

#Google tests
add_subdirectory(tests/googletest-master)
include_directories(tests/googletest-master/googletest/include)
include_directories(tests/googletest-master/googlemock/include)


set(RESOURCE_FILES main.cpp math_lib/mathematical_library.cpp)
set(HEADER_FILES math_lib/mathematical_library.h)

add_executable(Calculator ${RESOURCE_FILES} ${HEADER_FILES})


#Executable and libreries for tests
add_executable(runTests tests/mathematical_library_tests.cpp math_lib/mathematical_library.cpp ${HEADER_FILES})

target_link_libraries(runTests gtest gtest_main)