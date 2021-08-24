![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
![GTest](https://img.shields.io/badge/GoogleTest-FF9A00.svg?style=for-the-badge&logo=google&logoColor=white)
![Docker](https://img.shields.io/badge/docker-%230db7ed.svg?style=for-the-badge&logo=docker&logoColor=white)

# CPPrime

C++ sample application with unit tests developed with [GoogleTest](https://github.com/google/googletest).

## Built With

- [gcc](https://gcc.gnu.org/)
- [googletest](https://github.com/google/googletest)
- [cmake](https://cmake.org/)
- [Docker](https://docs.docker.com/reference/)

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

## Docker

1\. Build Container:

```shell
$ docker build --tag=leoduprates/cpprime .
```

2\. Run Container:

```shell
$ docker run -it --rm leoduprates/cpprime:latest
```

# Links

- [GoogleTest User’s Guide](https://google.github.io/googletest/)
- [CMake Tutorial](https://cmake.org/cmake/help/v3.21/guide/tutorial/A%20Basic%20Starting%20Point.html)
- [Dockerfile](https://docs.docker.com/engine/reference/builder/)
