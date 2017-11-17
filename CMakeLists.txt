cmake_minimum_required(VERSION 3.1)

project(tempsensor)

# Set
set(EXECUTABLE_NAME sensibo_manager)

set(MY_IDL_GENERATED_PATH "${PROJECT_SOURCE_DIR}/gen")
set(IDL_GENERATED_PATH "${PROJECT_SOURCE_DIR}/../idlopensplice/cpp")
set(MIND_POST_PROCESSING "${PROJECT_SOURCE_DIR}/../mind-ddl-postprocessor/generated_files")
set(MIND_DDS_LIBRARY "${PROJECT_SOURCE_DIR}/../mindddslibrary")

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
        "${MY_IDL_GENERATED_PATH}/*.cpp"
        "${MY_IDL_GENERATED_PATH}/*.h"
        "${MY_IDL_GENERATED_PATH}/*.hpp"
        "${MIND_POST_PROCESSING}/*.h"
        "${MIND_DDS_LIBRARY}/*.h"
        )

find_package(OpenSplice REQUIRED)

include_directories(
        ${OpenSplice_INCLUDE_DIRS}
        ${IDL_GENERATED_PATH}
        ${MY_IDL_GENERATED_PATH}
        ${MIND_DDS_LIBRARY}
        ${MIND_POST_PROCESSING}
)

message("${IDL_GENERATED_CPP}")

set(EXECUTABLE_MAIN_SOURCE_FILES ${EXECUTABLE_MAIN_SOURCE_FILES} ${IDL_GENERATED_CPP} implementation.h implementation.cpp)
add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_MAIN_SOURCE_FILES})

target_link_libraries(${EXECUTABLE_NAME}
        -L/usr/lib/x86_64-linux-gnu/ -lpthread)

# Add OpenSplice dirs
target_link_libraries(${EXECUTABLE_NAME} ${OpenSplice_LIBRARIES})
