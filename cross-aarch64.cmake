# Mind srl, Modena
# ---------------
#
# These file defines cross-compilation options for CMake
# to allow cmake cross-compiling it must be called using -DCMAKE_TOOLCHAIN_FILE=cross-aarch64.cmake parametes
# e.g. cmake . -DCMAKE_TOOLCHAIN_FILE=cross-aarch64.cmake

# Target operating system name.
message("              ")
message("              ")
message("************** Mind Srl ***************")
message("** Cross Compiler Chain for AARCH64 ***")
message("***************************************")
message("              ")


set(REMOTE_FILESYSTEM_PATH /home/luigi/dev-tools/tx1-rootfs/rootfs)

if(DEFINED ENV{REMOTE_AARCH_FILESYSTEM_PATH})
    SET(REMOTE_FILESYSTEM_PATH $ENV{REMOTE_AARCH_FILESYSTEM_PATH})
    message(STATUS "REMOTE_AARCH_FILESYSTEM_PATH is defined")
    message(STATUS "Finding remote libraries on $ENV{REMOTE_AARCH_FILESYSTEM_PATH}")
else()
    message(STATUS "REMOTE_AARCH_FILESYSTEM_PATH is NOT defined")
    message(STATUS "Finding remote libraries on DEFAULT cross-aarch64 path ${REMOTE_FILESYSTEM_PATH}")
endif()

#set(CMAKE_PREFIX_PATH ${REMOTE_FILESYSTEM_PATH})

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# name of C compiler.
set(CMAKE_C_COMPILER "aarch64-linux-gnu-gcc")
set(CMAKE_CXX_COMPILER "aarch64-linux-gnu-g++")
set(CMAKE_FIND_ROOT_PATH ${REMOTE_FILESYSTEM_PATH})

#set(CMAKE_SYSROOT ${REMOTE_FILESYSTEM_PATH})           # Necessario per il corretto link delle librerie di sistema,
                                                       # non presenti nel cross-compilatore ma presenti in /lib della root file-system

#message( STATUS "> Cross compiler path: CMAKE_FIND_ROOT_PATH:         " ${CMAKE_FIND_ROOT_PATH} )
link_directories(${REMOTE_FILESYSTEM_PATH}/lib/aarch64-linux-gnu)
# do not use HOST fs root for libraries
# for libraries and headers in the target directories
# use only the target directory
#set(ONLY_CMAKE_FIND_ROOT_PATH TRUE)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER )
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

message("              ")
message("************** Mind Srl ***************")
message("** Cross Compiler Chain for AARCH64 ***")
message("***************************************")
message("              ")
