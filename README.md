![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
![GTest](https://img.shields.io/badge/GoogleTest-%234285F4.svg?style=for-the-badge&logo=google&logoColor=white)

# CPPrime

Simple application developed in C++ so that when the user provides a number as input, the application responds with a Boolean vector, being True for prime numbers and False for composite numbers.

## Built With

- [gcc](https://gcc.gnu.org/)
- [googletest](https://github.com/google/googletest)
- [cmake](https://cmake.org/)

## Project Architecture

```shell
cpprime/
├── build
├── src
│   ├── prime.cpp
│   ├── prime.h
│   └── main.cpp
├── tests
│   └── primeTest.cpp
├── makefile
├── CMakeLists.txt
└── README.md
```

### Design Patterns

This project uses the design patterns from [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

## Getting Started

1\. Build application

```shell
$ make build
```

2\. Run application

```shell
$ make run
```

3\. Run Tests

```shell
$ make test
```

4\. Build Cmake

```shell
$ cmake -S . -B build
```

# Links

- [GoogleTest User’s Guide](https://google.github.io/googletest/)
- [CMake Tutorial](https://cmake.org/cmake/help/v3.21/guide/tutorial/A%20Basic%20Starting%20Point.html)