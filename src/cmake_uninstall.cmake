##=====================ShatteredButWhole=====================
##              IVS project 2 - Calculator
##
##  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
##           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
##           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
##           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
##
##  CMakeLists.txt created: 2018-Apr-21
##===========================================================

IF(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt")
    MESSAGE(FATAL_ERROR "Cannot find install manifest: " ${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt
            " Probably not installed. Try make install.")
ENDIF(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt")

FILE(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt" files)
STRING(REGEX REPLACE " " ";" files "${files}")
FOREACH(file ${files})
    MESSAGE(STATUS "Uninstalling " ${file})
    IF(EXISTS ${file})
        EXEC_PROGRAM(
                "${CMAKE_COMMAND}" ARGS "-E remove " ${file}
                OUTPUT_VARIABLE rm_out
                RETURN_VALUE rm_retval
        )
        IF(NOT "${rm_retval}" STREQUAL 0)
            MESSAGE(FATAL_ERROR "Problem when removing " ${file})
        ENDIF(NOT "${rm_retval}" STREQUAL 0)
    ELSE(EXISTS ${file})
        MESSAGE(STATUS "File " ${file} " does not exist.")
    ENDIF(EXISTS ${file})
ENDFOREACH(file)

set(bin_found 0)
set(include_found 0)
set(lib64_found 0)
foreach(file ${files})
    if(bin_found EQUAL 0)
        STRING(REGEX MATCH "(.*/bin)" bin_directory "${file}")
        if(NOT ${bin_directory} STREQUAL 0)
            set(bin_found 1)
        endif(NOT ${bin_directory} STREQUAL 0)
    endif(bin_found EQUAL 0)
    if(include_found EQUAL 0)
        STRING(REGEX MATCH "(.*/include)" include_directory "${file}")
        if(NOT ${include_directory} STREQUAL 0)
            set(include_found 1)
        endif(NOT ${include_directory} STREQUAL 0)
    endif(include_found EQUAL 0)
    if(lib64_found EQUAL 0)
        STRING(REGEX MATCH "(.*/lib64)" lib64_directory "${file}")
        if(NOT ${lib64_directory} STREQUAL 0)
            set(lib64_found 1)
        endif(NOT ${lib64_directory} STREQUAL 0)
    endif(lib64_found EQUAL 0)
endforeach(file)

MESSAGE(STATUS "Removing " ${lib64_directory})
file(REMOVE_RECURSE ${lib64_directory}/)

MESSAGE(STATUS "Removing " ${include_directory})
file(REMOVE_RECURSE ${include_directory}/)

MESSAGE(STATUS "Removing " ${bin_directory})
file(REMOVE_RECURSE ${bin_directory}/)


file(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt)

MESSAGE(STATUS "Cleaning...")

EXECUTE_PROCESS(
        COMMAND make clean
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )
