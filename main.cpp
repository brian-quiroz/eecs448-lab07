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

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

//PRETEST - DELETE LATER
	/*testableList.addFront(1);
	testableList.addFront(2);
	testableList.addFront(3);
	std::vector<int> myVec = testableList.toVector();

	for (unsigned int i = 0; i < myVec.size(); i++) {
		std::cout << myVec[i] << std::endl;
	}*/
//END PRETEST, DELETE LATER


	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	TestSuite myTester;
	myTester.runTests();

	std::cout << "Running...\nAnd it's done.\nGoodbye.\n";

	return (0);

}
