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
  test7_sizeAfterAdds();
  test8_isEmptyFalse();
  test9_SingleremoveBack();
  test10_SingleremoveFront();
  test11_MultipleremoveBack();
  test12_MultipleremoveFront();
  /*test13_sizeAfterRemoves();
  test14_removeBackOnEmptyList();
  test15_removeFrontOnEmptyList();
  test16_searchOnEmptyList();
  test17_searchValueNotOnList();
  test18_searchValueOnList();*/
}

void TestSuite::test1_isEmptyTrue() {
  std::cout << "Test 1: isEmpty() returns correct value (false) if the list is empty: ";
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
  std::cout << "Test 2: size() returns correct value if the list is empty: ";
  LinkedListOfInts testableList;
  auto testVector = testableList.toVector();
  if ((testVector.empty()) && (testableList.size() == 0)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test3_SingleaddBack() {
  std::cout << "Test 3: size() returns correct value after 1 addBack(): n";
  LinkedListOfInts testableList;
  testableList.addBack(1);
  if (testableList.size() == 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test4_SingleaddFront() {
  std::cout << "Test 4: size() returns correct value after 1 addFront(): ";
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if (testableList.size() ==1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test5_MultipleaddBack() {
  std::cout << "Test 5: size() returns correct value after multiple addBack(): ";
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
  std::cout << "Test 6: size() returns correct value after multiple addFront(): ";
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

void TestSuite::test7_sizeAfterAdds() {
  std::cout << "Test 7: size() returns correct value after adds: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }
  auto testVector = testableList.toVector();
  if (testVector.size() == testableList.size()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test8_isEmptyFalse() {
  std::cout << "Test 8: isEmpty() returns correct value (false) if the list is not empty: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }
  auto testVector = testableList.toVector();
  if ((!testVector.empty()) && (!testableList.isEmpty())) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test9_SingleremoveBack() {
  std::cout << "Test 9: size() returns correct value after single removeBack(): ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
  }
  testableList.removeBack();
  //std::cout << testableList.size() << " vs " << randomNumber - 1 << std::endl;
  if (testableList.size() == randomNumber - 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test10_SingleremoveFront() {
  std::cout << "Test 10: size() returns correct value after single removeFront(): ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  //std::cout << randomNumber << std::endl;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addFront(i);
  }
  testableList.removeFront();
  //std::cout << testableList.size() << " vs " << randomNumber - 1 << std::endl;
  if (testableList.size() == randomNumber - 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test11_MultipleremoveBack() {
  std::cout << "Test 11: size() returns correct value after multiple removeBack(): ";
  LinkedListOfInts testableList;
  const int randomNumber1 = rand() % 10 + 11;
  //std::cout << randomNumber1 << std::endl;
  for (int i = 0; i < randomNumber1; i++) {
    testableList.addFront(i);
  }
  const int randomNumber2 = rand() % 9 + 2;
  //std::cout << randomNumber2 << std::endl;
  for (int i = 0; i < randomNumber2; i++) {
    testableList.removeBack();
  }
  //std::cout << testableList.size() << " vs " << randomNumber1 - randomNumber2 << std::endl;
  if (testableList.size() == randomNumber1 - randomNumber2) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test12_MultipleremoveFront() {
  std::cout << "Test 12: size() returns correct value after multiple removeFront(): ";
  LinkedListOfInts testableList;
  const int randomNumber1 = rand() % 10 + 11;
  //std::cout << randomNumber1 << std::endl;
  for (int i = 0; i < randomNumber1; i++) {
    testableList.addBack(i);
  }
  const int randomNumber2 = rand() % 9 + 2;
  //std::cout << randomNumber2 << std::endl;
  for (int i = 0; i < randomNumber2; i++) {
    testableList.removeFront();
  }
  //std::cout << testableList.size() << " vs " << randomNumber1 - randomNumber2 << std::endl;
  if (testableList.size() == randomNumber1 - randomNumber2) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}
