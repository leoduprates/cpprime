CC = g++

build:
		$(CC) -o build/cpprime src/prime.cpp src/main.cpp

run: |
		$(CC) -o build/cpprime src/prime.cpp src/main.cpp
		build/cpprime

test: |
		$(CC) -o build/cpprimeTest src/prime.cpp tests/primeTest.cpp -lgtest -lgtest_main -lpthread
		build/cpprimeTest