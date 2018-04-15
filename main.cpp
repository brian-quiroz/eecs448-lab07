/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "TestSuite.h"
#include "LinkedListOfInts.h"

int main(int argc, char** argv) {
	LinkedListOfInts testableList;

	TestSuite myTester;
	myTester.runTests();

	std::cout << "Running...\nAnd it's done.\nGoodbye.\n";

	return (0);
}
