# googletest-boilerplate

This repository provides a boilerplate setup for C and C++ projects using [GoogleTest](https://github.com/google/googletest) for unit testing. The project is structured with CMake to make it easy to build, test, and extend.

## Project Structure

```
googletest-boilerplate
├── CMakeLists.txt       # Top-level CMake configuration
├── src/                 # Source files
│   ├── CMakeLists.txt   # CMake configuration for source files
│   ├── example.c        # Example C source file
│   ├── example.h        # Example header file
│   └── main.c           # Main program file
└── tests/               # Test files
    ├── CMakeLists.txt   # CMake configuration for tests
    ├── test_example.cpp # Test case for example functions
    └── test_main.cpp    # Main test entry point
```

## Getting Started
### Prerequisites
- CMake 3.14 or higher
- C/C++ Compiler

### Compilation
To compile the project, follow these steps:

```
mkdir build
cd build
cmake ..
cmake --build .
```

## Running the Test Suite
Once the project is compiled, you can run the test suite using:
```
./tests/unit_tests
```

You should see an output similar to this:
```
[==========] Running 3 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from Example
[ RUN      ] Example.sumTest
[       OK ] Example.sumTest (0 ms)
[ RUN      ] Example.squareTest
[       OK ] Example.squareTest (0 ms)
[----------] 2 tests from Example (0 ms total)

[----------] 1 test from ExampleTest
[ RUN      ] ExampleTest.test
[       OK ] ExampleTest.test (0 ms)
[----------] 1 test from ExampleTest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 2 test suites ran. (0 ms total)
[  PASSED  ] 3 tests.
```

If you see a similar output, congratulations! Your setup is complete, and all tests have passed successfully.


## Explanation of Key Files 
`CMakeLists.txt`
- **Top-Level CMakeLists.txt**: Configures the overall project, sets the C/C++ standards, and includes the subdirectories for source and test files
- `src/CMakeLists.txt`: Handles the source files, creating a static library and linking it to the main executable.
- `tests/CMakeLists.txt`: Sets up the testing framework using GoogleTest, fetching the library, and linking it to the test executable.

`src/example.c` and `example.h`
These files provide example functions that are used in the test cases to demonstrate how to structure and test your code.

`tests/test_example.cpp`
Contains the core test cases that demonstrate how to use GoogleTest to verify the behavior of your code.