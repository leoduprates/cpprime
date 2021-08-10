cmake_minimum_required(VERSION 3.14)
project(cpprime)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  buildTests ./tests/primeTest.cpp
  ./src/prime.cpp
)

include(GoogleTest)

target_link_libraries(buildTests gtest gtest_main)

add_test(
  NAME buildTests
  COMMAND buildTests
)