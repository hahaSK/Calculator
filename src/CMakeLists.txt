##=====================ShatteredButWhole=====================
##              IVS project 2 - Calculator
##
##  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
##           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
##           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
##           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
##
##  CMakeLists.txt created: 2018-Mar-09
##===========================================================

cmake_minimum_required(VERSION 2.8)
project(Calculator)

#For VS environment
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(CMAKE_CXX_STANDARD 17)

set(RESOURCE_FILES main.cpp math_lib/mathematical_library.cpp)
set(HEADER_FILES math_lib/mathematical_library.h)

add_executable(Calculator ${RESOURCE_FILES} ${HEADER_FILES})

set(RESOURCE_FILES2 main.cpp standard_deviation/standard_deviation.cpp math_lib/mathematical_library.cpp)
set(HEADER_FILES2 standard_deviation/standard_deviation.h math_lib/mathematical_library.h)

add_executable(Standard_deviation ${RESOURCE_FILES2} ${HEADER_FILES2})

##########################
##  TESTS
##########################

include(${CMAKE_CURRENT_SOURCE_DIR}/tests/CMakeLists.txt)