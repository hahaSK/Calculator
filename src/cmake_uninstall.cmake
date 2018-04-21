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
    MESSAGE(FATAL_ERROR "Cannot find install manifest: "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt)
ENDIF(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt")

FILE(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt" files)
STRING(REGEX REPLACE " " ";" files "${files}")
FOREACH(file ${files})
    MESSAGE(STATUS "Uninstalling "${file})
    IF(EXISTS "${file}")
        EXEC_PROGRAM(
                "${CMAKE_COMMAND}" ARGS "-E remove "${file}
                OUTPUT_VARIABLE rm_out
                RETURN_VALUE rm_retval
        )
        IF(NOT "${rm_retval}" STREQUAL 0)
            MESSAGE(FATAL_ERROR "Problem when removing "${file})
        ENDIF(NOT "${rm_retval}" STREQUAL 0)
    ELSE(EXISTS "${file}")
        MESSAGE(STATUS "File "${file}" does not exist.")
    ENDIF(EXISTS "${file}")
ENDFOREACH(file)

list(LENGTH files len)
set(bin_directory 0)
set(include_directory 0)
set(lib64_directory 0)
foreach(file ${files})
    if(bin_directory EQUAL 0)
        STRING(REGEX MATCH "(.*/bin)" bin_directory "${file}")
        message("${bin_directory}")
    endif()
    if(include_directory EQUAL 0)
        STRING(REGEX MATCH "(.*/include)" include_directory "${file}")
        message("${include_directory}")
    endif()
    if(lib64_directory EQUAL 0)
        STRING(REGEX MATCH "(.*/lib64)" lib64_directory "${file}")
        message("${lib64_directory}")
    endif()
endforeach(file)

EXEC_PROGRAM(
        "${CMAKE_COMMAND}" ARGS "-E remove_directory "${bin_directory}
        OUTPUT_VARIABLE rm_out
        RETURN_VALUE rm_retval
)

file(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/install_manifest.txt)

EXECUTE_PROCESS(
        COMMAND make clean
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )
