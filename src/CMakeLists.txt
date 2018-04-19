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

cmake_minimum_required(VERSION 2.8.11)
project(Calculator)

# create exacutables in src/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

#For VS environment
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp math_lib/mathematical_library.cpp)
set(HEADER_FILES math_lib/mathematical_library.h)

### GUI ###

set(GUI_SOURCES mainwindow.cpp)

set(GUI_HEADERS mainwindow.h)

set(GUI_UIS mainwindow.ui)

set(GUI_RESOURCES imageresources.qrc)

# Next lines needed for building all Qt projects
if(WIN32)
    set(Qt5_DIR "D:/Programovanie/Qt/5.10.1/msvc2017_64/lib/cmake/Qt5")
    #set(Qt5_DIR "C:/Qt/5.10.1/msvc2017_64/lib/cmake/Qt5")
endif(WIN32)
find_package(Qt5 COMPONENTS Core Widgets Gui)

# Next, using precompiler, compiler and linker

# using Qt meta-system (precompiler)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# compile
if(UNIX)
    add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES}
            ${GUI_SOURCES} ${GUI_HEADERS} ${GUI_UIS} ${GUI_RESOURCES})
elseif(WIN32) # if you using Windows ™ Operating System.
    add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES} ${HEADER_FILES}
            ${GUI_SOURCES} ${GUI_HEADERS} ${GUI_UIS} ${GUI_RESOURCES})
endif(UNIX)

# build it (link libraries)
target_link_libraries( ${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets)

### PROFILING ###

set(RESOURCE_FILES2 standard_deviation/standard_deviation.cpp math_lib/mathematical_library.cpp)
set(HEADER_FILES2 standard_deviation/standard_deviation.h math_lib/mathematical_library.h)

add_executable(Standard_deviation ${RESOURCE_FILES2} ${HEADER_FILES2})

###

##########################
##  TESTS
##########################

include(${CMAKE_CURRENT_SOURCE_DIR}/tests/CMakeLists.txt)

##########################
##  INSTALLATION
##########################

#
# Tell CMake to install the windows runtime libraries to the programs
# directory and tell CPack that they belong to the applications component
#
set(CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP TRUE)
include(InstallRequiredSystemLibraries)
install(PROGRAMS ${CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS}
        DESTINATION bin
        COMPONENT applications)

if(WIN32)
    set(runtime_dlls
            bin/msvcp140d.dll
            bin/ucrtbased.dll
            bin/vcruntime140d.dll
            bin/Qt5Cored.dll
            bin/Qt5Guid.dll
            bin/Qt5Widgetsd.dll)
endif(WIN32)

if(WIN32)
    install(TARGETS ${PROJECT_NAME}
            RUNTIME DESTINATION bin
            LIBRARY DESTINATION bin
            ARCHIVE DESTINATION bin/static
            COMPONENT applications)
    install(FILES runtime_dlls DESTINATION bin COMPONENT dllLibraries)
elseif(UNIX)

endif(WIN32)
#install(TARGETS mySharedLib DESTINATION /some/full/path)

### CPack ###
set(CPACK_PACKAGE_NAME "CPackExampleInstaller")
set(CPACK_PACKAGE_VENDOR "Ziv Yaniv")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Example showing CPack in action")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "CPackExample")

include(CPack)
