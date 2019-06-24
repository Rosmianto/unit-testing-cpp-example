cmake_minimum_required(VERSION 3.7)

enable_testing()

project(test_example)

# Set Board to ATMega2560 to keep mock lib happy
add_definitions(-D__AVR_ATmega2560__)

# Include headers
include_directories(arduino_ci/cpp/arduino ./)

add_subdirectory(modules)

add_executable(TestSimpleModule
               tests/TestMain.cpp
               tests/TestSimpleModule.cpp)

target_link_libraries(TestSimpleModule SimpleModuleLib)

add_test(TestSuite TestSimpleModule)
