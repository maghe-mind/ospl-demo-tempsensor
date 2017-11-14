# Mind srl, Modena
# ---------------
#
# This file is used  to find OpenSplice library path

MESSAGE(STATUS "OSPL_HOME:  $ENV{OSPL_HOME}")
FIND_PATH(OpenSplice_INCLUDE_DIR
        NAMES
        dds/dds.hpp
        PATHS
        $ENV{OSPL_HOME}/include/dcps/C++/isocpp2
        NO_CMAKE_FIND_ROOT_PATH
        )

MESSAGE(STATUS "OpenSplice_INCLUDE_DIR:  ${OpenSplice_INCLUDE_DIR}")
SET(OpenSplice_INCLUDE_DIRS
        ${OpenSplice_INCLUDE_DIR}
        $ENV{OSPL_HOME}/include
        $ENV{OSPL_HOME}/include/sys
        )


# Find libraries
FIND_LIBRARY(KERNEL_LIBRARY
        NAMES
        ddskernel
        PATHS
        $ENV{OSPL_HOME}/lib
        NO_CMAKE_FIND_ROOT_PATH
        )

FIND_LIBRARY(DCPSISOCPP2_LIBRARY
        NAMES
        dcpsisocpp2
        PATHS
        $ENV{OSPL_HOME}/lib
        NO_CMAKE_FIND_ROOT_PATH
        )

SET(OpenSplice_LIBRARIES
        ${KERNEL_LIBRARY}
        ${DCPSISOCPP2_LIBRARY}
)

# Binary for the IDL compiler 
#SET (OpenSplice_IDLGEN_BINARY $ENV{OSPL_HOME}/bin/idlpp)

IF (OpenSplice_INCLUDE_DIRS AND OpenSplice_LIBRARIES)
    SET(OpenSplice_FOUND TRUE)
ENDIF (OpenSplice_INCLUDE_DIRS AND OpenSplice_LIBRARIES)

IF (OpenSplice_FOUND)
    MESSAGE(STATUS "Found OpenSplice DDS libraries: ${OpenSplice_LIBRARIES}")
ELSE (OpenSplice_FOUND)
    MESSAGE(FATAL_ERROR "Could not find OpenSplice DDS")
ENDIF (OpenSplice_FOUND)

MARK_AS_ADVANCED(OpenSplice_INCLUDE_DIRS OpenSplice_LIBRARIES)
#INCLUDE (MacroOpenSplice)