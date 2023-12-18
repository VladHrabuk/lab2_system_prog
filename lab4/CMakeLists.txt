cmake_minimum_required (VERSION 3.0)

project(calculator)

set(SOURCE calculator.cpp complex_calculator.cpp)
set(HEADER calculator.h)
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB complex_calculator.cpp)

add_library(calculator_library STATIC ${SOURCE_LIB})
add_executable(calc ${SOURCE_EXE} ${SOURCE} ${HEADER})
target_link_libraries(calc PRIVATE calculator_library)

set(CMAKE_GENERATOR "Ninja")
