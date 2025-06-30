#include "fizzbuzz.h"
#include <iostream>
#include"test.h"
#include <cassert>

void test1() {
	std::cout << "Now Running test1..." << std::endl;
	assert(fizzBuzz(0) == "FizzBuzz");
	std::cout << "Test 0 passed." << std::endl;
	assert(fizzBuzz(1) == "1");
	std::cout << "Test 1 passed." << std::endl;
	assert(fizzBuzz(2) == "2");
	std::cout << "Test 2 passed." << std::endl;
	assert(fizzBuzz(3) == "Fizz");
	std::cout << "Test 3 passed." << std::endl;
	assert(fizzBuzz(5) == "Buzz");
	std::cout << "Test 5 passed." << std::endl;
	assert(fizzBuzz(15) == "FizzBuzz");
	std::cout << "Test 15 passed." << std::endl;
	std::cout << "All test1 passed!" << std::endl;
}

void test2() {
	std::cout << "Now Running test2..." << std::endl;
	assert(fizzBuzz(4) == "4");
	std::cout << "Test 4 passed." << std::endl;
	assert(fizzBuzz(6) == "Fizz");
	std::cout << "Test 6 passed." << std::endl;
	assert(fizzBuzz(10) == "Buzz");
	std::cout << "Test 10 passed." << std::endl;
	assert(fizzBuzz(30) == "FizzBuzz");
	std::cout << "Test 30 passed." << std::endl;
	std::cout << "All test2 passed!" << std::endl;
}