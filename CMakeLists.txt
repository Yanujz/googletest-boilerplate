cmake_minimum_required(VERSION 3.14)
project(googletest-boilerplate VERSION 0.1.0 LANGUAGES C CXX)

# Set the C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Add src and tests directories
add_subdirectory(src)
add_subdirectory(tests)

include(CTest)