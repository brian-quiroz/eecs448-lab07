#include "TestSuite.h"

TestSuite::TestSuite() {

}

void TestSuite::runTests() {
  test1_isEmpty();
  test2();
  testC();
}

void TestSuite::test1_isEmpty() {
  std::cout << "Test 1: ";
  LinkedListOfInts testableList;
  auto testVector = testableList.toVector();
  //We know the constructor and toVector work correctly, so testVector.empty() MUST be true
  if (testVector.empty() && testableList.isEmpty()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test2() {
  std::cout << "Test 2:\n";
}

void TestSuite::testC() {

}
