#include "TestSuite.h"

TestSuite::TestSuite() {
  srand(time(NULL));
}

void TestSuite::runTests() {
  test1_isEmptyTrue();
  test2_sizeOnEmptyList();
  test3_SingleaddBack();
  test4_SingleaddFront();
  test5_MultipleaddBack();
  test6_MultipleaddFront();
  test7_isEmptyFalse();
}

void TestSuite::test1_isEmptyTrue() {
  std::cout << "Test 1: isEmpty() returns correct value (false) if the list is empty.\n";
  LinkedListOfInts testableList;
  auto testVector = testableList.toVector();
  //We know the constructor and toVector work correctly, so testVector.empty() MUST be true
  if ((testVector.empty()) && (testableList.isEmpty())) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test2_sizeOnEmptyList() {
  std::cout << "Test 2: size() returns correct value if the list is empty.\n";
  LinkedListOfInts testableList;
  auto testVector = testableList.toVector();
  if ((testVector.empty()) && (testableList.size() == 0)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test3_SingleaddBack() {
  std::cout << "Test 3: size() returns correct value after 1 addBack().\n";
  LinkedListOfInts testableList;
  testableList.addBack(1);
  if (testableList.size() == 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test4_SingleaddFront() {
  std::cout << "Test 4: size() returns correct value after 1 addFront().\n";
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if (testableList.size() ==1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test5_MultipleaddBack() {
  std::cout << "Test 5: size() returns correct value after multiple addBack().\n";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
  }
  if (testableList.size() == randomNumber) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test6_MultipleaddFront() {
  std::cout << "Test 6: size() returns correct value after multiple addFront().\n";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addFront(i);
  }
  if (testableList.size() == randomNumber) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test7_isEmptyFalse() {
  std::cout << "Test 7: isEmpty() returns correct value (false) if the list is not empty.\n";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
  }
  auto testVector = testableList.toVector();
  if ((!testVector.empty()) && (!testableList.isEmpty())) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}
