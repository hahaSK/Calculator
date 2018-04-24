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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_STANDARD 11)

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

set(CMAKE_AUTOMOC OFF)
set(CMAKE_AUTOUIC OFF)
set(CMAKE_AUTORCC OFF)

### PROFILING ###

set(RESOURCE_FILES2 standard_deviation/standard_deviation_main.cpp standard_deviation/standard_deviation.cpp math_lib/mathematical_library.cpp)
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

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})

# Create bin directory
install (DIRECTORY DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin" DIRECTORY_PERMISSIONS
        OWNER_WRITE OWNER_READ OWNER_EXECUTE
        GROUP_WRITE GROUP_READ GROUP_EXECUTE
        WORLD_WRITE WORLD_READ WORLD_EXECUTE)

#
# Tell CMake to install the windows runtime libraries to the programs
# directory and tell CPack that they belong to the applications component
#
set(CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP TRUE)
include(InstallRequiredSystemLibraries)
install(PROGRAMS ${CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS}
        DESTINATION bin/
        COMPONENT applications)

if(WIN32)
    set(RUNTIME_DLLS
            dependencies/msvcp140d.dll
            dependencies/ucrtbased.dll
            dependencies/vcruntime140d.dll
            dependencies/Qt5Cored.dll
            dependencies/Qt5Guid.dll
            dependencies/Qt5Widgetsd.dll
            )
    file(GLOB DLL_FILES ${RUNTIME_DLLS})
    install(FILES ${DLL_FILES}
            DESTINATION bin/
            COMPONENT DLLlib)
elseif(UNIX)
    set(SHARED_LIB
            dependencies/linuxlib/libicudata.so.57
            dependencies/linuxlib/libicui18n.so.57
            dependencies/linuxlib/libicuuc.so.57
            dependencies/linuxlib/libpcre2-16.so.0
            dependencies/linuxlib/libpng16.so.16
            dependencies/linuxlib/libQt5Core.so.5
            dependencies/linuxlib/libQt5Gui.so.5
            dependencies/linuxlib/libQt5Widgets.so.5
            dependencies/linuxlib/libz.so.1
            dependencies/linuxlib/libQt5Core.so.5.9
            )
    file(GLOB SHARED_LIB_FILES ${SHARED_LIB})
    install(FILES ${SHARED_LIB_FILES}
            DESTINATION bin/dependencies/
            COMPONENT SharedLib)
endif(WIN32)

set(PLATFORMS
        dependencies/platforms/libqxcb.so
        dependencies/platforms/qwindowsd.dll
        )
file(GLOB PLATFORMS_FILES ${PLATFORMS})
install(FILES ${PLATFORMS_FILES}
        DESTINATION bin/platforms/
        COMPONENT SharedLib)

install(TARGETS Calculator
        RUNTIME DESTINATION bin/
        COMPONENT applications
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
        GROUP_EXECUTE GROUP_READ)

install(TARGETS runTests
        RUNTIME DESTINATION bin/
        COMPONENT applications
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
        GROUP_EXECUTE GROUP_READ)

install(TARGETS Standard_deviation
        RUNTIME DESTINATION bin/
        COMPONENT applications
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
        GROUP_EXECUTE GROUP_READ)

########### Add uninstall target ###############
ADD_CUSTOM_TARGET(uninstall
        "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake")

get_target_property(QtCore_location Qt5::Core LOCATION)
install(FILES ${QtCore_location} DESTINATION bin/dependencies)

get_target_property(QtWidgets_location Qt5::Widgets LOCATION)
install(FILES ${QtWidgets_location} DESTINATION bin/dependencies)

get_target_property(QtGui_location Qt5::Gui LOCATION)
install(FILES ${QtGui_location} DESTINATION bin/dependencies)

### Additional folders to clean ###
set(DEPLOY_CLEAN
        Testing
        cmake_install.cmake
        CMakeCache.txt
        CPackConfig.cmake
        CPackSourceConfig.cmake
        CTestTestfile.cmake
        *.pc
        CMakeFiles
        cmake-build-debug
        *.cbp
        *.ilk
        _CPack_Packages
        bin
        Makefile
        .vs
        .idea
        latex
        ../.vs
        ../.idea
        html)

ADD_CUSTOM_TARGET(deployclean @echo cleaning for source distribution)

ADD_CUSTOM_COMMAND(
        DEPENDS clean
        COMMENT "distribution clean"
        COMMAND rm
        ARGS    -Rf CMakeTmp ${DEPLOY_CLEAN}
        TARGET  deployclean
)

#SET_DIRECTORY_PROPERTIES(PROPERTIES
 #       ADDITIONAL_MAKE_CLEAN_FILES "Makefile")

### CPack ###
set(CPACK_RPM_COMPONENT_INSTALL ON)
if(WIN32)
    set(CPACK_GENERATOR "ZIP;NSIS;PackageMaker")
elseif(UNIX)
    set(CPACK_GENERATOR "TGZ;ZIP")
endif(WIN32)

set(CPACK_PACKAGE_NAME "Calculator-ShatteredButWhole")
set(CPACK_PACKAGE_VENDOR "ShatteredButWhole")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "Calculator-ShatteredButWhole")

include(CPack)
