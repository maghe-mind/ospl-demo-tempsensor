cmake_minimum_required(VERSION 3.1)

project(tempsensor)

# Set
set(EXECUTABLE_NAME actuator_manager)

set(IDL_GENERATED_PATH "${PROJECT_SOURCE_DIR}/gen")

set(DEBUG 0)

MESSAGE(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

set(EXECUTABLE_MAIN_SOURCE_FILES main.cpp)

# Automatically add files in IDL_GENERATED_PATH
file(GLOB IDL_GENERATED_CPP
        "${IDL_GENERATED_PATH}/*.cpp"
        "${IDL_GENERATED_PATH}/*.h"
        "${IDL_GENERATED_PATH}/*.hpp"
        )

find_package(OpenSplice REQUIRED)

include_directories(
        ${OpenSplice_INCLUDE_DIRS}
        ${IDL_GENERATED_PATH}
)

include_directories("mindddslibrary/")

# Automatically add helpers files
file(GLOB SCRIPTS_FILES
     "mindddslibrary/*.h")

message("${IDL_GENERATED_CPP}")

set(EXECUTABLE_MAIN_SOURCE_FILES ${EXECUTABLE_MAIN_SOURCE_FILES} ${IDL_GENERATED_CPP} ${HANDLERS_FILES} ${SCRIPTS_FILES} implementation.h implementation.cpp)
add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_MAIN_SOURCE_FILES})

target_link_libraries(${EXECUTABLE_NAME} pthread)

# Add OpenSplice dirs
target_link_libraries(${EXECUTABLE_NAME} ${OpenSplice_LIBRARIES})
