#include "TestSuite.h"

TestSuite::TestSuite() {
  srand(time(NULL));
}

void TestSuite::runTests() {
  test1_isEmptyOnEmptyList();
  test2_sizeOnEmptyList();
  test3_SingleaddBack();
  test4_SingleaddFront();
  test5_MultipleaddBack();
  test6_MultipleaddFront();
  test7_sizeAfterAdds();
  test8_isEmptyOnNonemptyList();
  test9_SingleremoveBack();
  test10_SingleremoveFront();
  test11_MultipleremoveBack();
  test12_MultipleremoveFront();
  test13_sizeAfterRemoves();
  test14_removeBackOnNonemptyList();
  test15_removeFrontOnNonemptyList();
  test16_removeBackOnEmptyList();
  test17_removeFrontOnEmptyList();
  test18_searchOnEmptyList();
  test19_searchValueNotOnList();
  test20_searchValueOnList();
}

void TestSuite::test1_isEmptyOnEmptyList() {
  std::cout << "Test 1: isEmpty() returns correct value (true) if the list is empty: ";
  LinkedListOfInts testableList;
  auto testVector = testableList.toVector();

  //We use the vector's empty() function because we know it works correctly and in this
  //case must return true.
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

  //We know the constructor and toVector work correctly, so testVector.empty() MUST be true.
  if ((testVector.empty()) && (testableList.size() == 0)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test3_SingleaddBack() {
  std::cout << "Test 3: size() returns correct value after 1 addBack(): ";
  LinkedListOfInts testableList;
  testableList.addBack(1);

  //The size of the list must be 1 after 1 addition.
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

  //The size of the list must be 1 after 1 addition.
  if (testableList.size() == 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test5_MultipleaddBack() {
  std::cout << "Test 5: size() returns correct value after multiple addBack(): ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
  }

  //The size of the list must be "randomNumber" after "randomNumber" additions.
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
  for (int i = 0; i < randomNumber; i++) {
    testableList.addFront(i);
  }

  //The size of the list must be "randomNumber" after "randomNumber" additions.
  if (testableList.size() == randomNumber) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test7_sizeAfterAdds() {
  std::cout << "Test 7: size() returns correct value (size of vector) after adds: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }
  auto testVector = testableList.toVector();

  //Since it is possible that the size variable is incremented the correct amount of times but
  //not as many elements are added, we must verify that the size of the list after the
  //additions is equal to the size of the vector created from the list.
  if (testVector.size() == testableList.size()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test8_isEmptyOnNonemptyList() {
  std::cout << "Test 8: isEmpty() returns correct value (false) if the list is not empty: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }
  auto testVector = testableList.toVector();

  //We use the vector's empty() function because we know it works correctly and in this
  //case must return false.
  if ((!testVector.empty()) && (!testableList.isEmpty())) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test9_SingleremoveBack() {
  std::cout << "Test 9: size() returns correct value (adds - removes) after single removeBack(): ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
  }
  testableList.removeBack();

  //After "randomNumber" additions and 1 remove, the list should have a size of "randomNumber" - 1.
  if (testableList.size() == randomNumber - 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test10_SingleremoveFront() {
  std::cout << "Test 10: size() returns correct value (adds - removes) after single removeFront(): ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 18 + 2;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addFront(i);
  }
  testableList.removeFront();

  //After "randomNumber" additions and 1 remove, the list should have a size of "randomNumber" - 1.
  if (testableList.size() == randomNumber - 1) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test11_MultipleremoveBack() {
  std::cout << "Test 11: size() returns correct value (adds - removes) after multiple removeBack(): ";
  LinkedListOfInts testableList;
  const int randomNumber1 = rand() % 10 + 11;
  for (int i = 0; i < randomNumber1; i++) {
    testableList.addFront(i);
  }
  const int randomNumber2 = rand() % 9 + 2;
  for (int i = 0; i < randomNumber2; i++) {
    testableList.removeBack();
  }

  //After "randomNumber1" additions and "randomNumber2" removes, the list should have a size
  //of "randomNumber1" - "randomNumber2".
  if (testableList.size() == randomNumber1 - randomNumber2) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test12_MultipleremoveFront() {
  std::cout << "Test 12: size() returns correct value (adds - removes) after multiple removeFront(): ";
  LinkedListOfInts testableList;
  const int randomNumber1 = rand() % 10 + 11;
  for (int i = 0; i < randomNumber1; i++) {
    testableList.addBack(i);
  }
  const int randomNumber2 = rand() % 9 + 2;
  for (int i = 0; i < randomNumber2; i++) {
    testableList.removeFront();
  }

  //After "randomNumber1" additions and "randomNumber2" removes, the list should have a size
  //of "randomNumber1" - "randomNumber2".
  if (testableList.size() == randomNumber1 - randomNumber2) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test13_sizeAfterRemoves() {
  std::cout << "Test 13: size() returns correct value (size of vector) after removes: ";
  LinkedListOfInts testableList;
  const int randomNumber1 = rand() % 10 + 11;
  for (int i = 0; i < randomNumber1; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }
  const int randomNumber2 = rand() % 9 + 2;
  for (int i = 0; i < randomNumber2; i++) {
    testableList.removeBack();
    testableList.removeFront();
  }
  auto testVector = testableList.toVector();

  //Since it is possible that the size variable is decremented the correct amount of times but
  //not as many elements are removed, we must verify that the size of the list after the
  //removes is equal to the size of the vector created from the list.
  if (testVector.size() == testableList.size()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test14_removeBackOnNonemptyList() {
  std::cout << "Test 14: removeBack() returns correct value (true) when called on a nonempty list: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }


  //If the list is not empty, it should be possible to remove.
  if (testableList.removeBack()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test15_removeFrontOnNonemptyList() {
  std::cout << "Test 15: removeFront() returns correct value (true) when called on a nonempty list: ";
  LinkedListOfInts testableList;
  const int randomNumber = rand() % 10 + 1;
  for (int i = 0; i < randomNumber; i++) {
    testableList.addBack(i);
    testableList.addFront(i);
  }

  //If the list is not empty, it should be possible to remove.
  if (testableList.removeFront()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test16_removeBackOnEmptyList() {
  std::cout << "Test 16: removeBack() returns correct value (false) when called on an empty list: ";
  LinkedListOfInts testableList;

  //If the list is empty, it should not be possible to remove.
  if (!testableList.removeBack()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test17_removeFrontOnEmptyList() {
  std::cout << "Test 17: removeFront() returns correct value (false) when called on an empty list: ";
  LinkedListOfInts testableList;

  //If the list is empty, it should not be possible to remove.
  if (!testableList.removeFront()) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test18_searchOnEmptyList() {
  std::cout << "Test 18: search() returns correct value (false) when called on an empty list: ";
  LinkedListOfInts testableList;

  //If the list is empty, it should not be possible to search.
  if (!testableList.search(1)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test19_searchValueNotOnList() {
  std::cout << "Test 19: search() returns correct value (false) when the value is not found on the list: ";
  LinkedListOfInts testableList;
  for (int i = 0; i < 5; i++) {
    testableList.addBack(i);
    testableList.addFront(i + 5);
  }
  const int randomNumber = rand() % 991 + 10;

  //We're searching for a value from 10 to 1000 on a list with values from 0 to 9, so search should
  //return false it won't find the value it's looking for.
  if (!testableList.search(randomNumber)) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}

void TestSuite::test20_searchValueOnList() {
  std::cout << "Test 20: search() returns correct value (true) when the value is found on the list: ";
  LinkedListOfInts testableList;
  bool foundAll = true;
  for (int i = 0; i < 5; i++) {
    testableList.addBack(i);
    testableList.addFront(i + 5);
  }
  for (int i = 0; i < 10; i++) {
    if (!testableList.search(i)) {
      foundAll = false;
    }
  }

  //We've created a list of the integers 0-9 and we've searched for each one; so we should
  //have found each one of those values if our search function is working correctly.
  if (foundAll) {
    std::cout << "PASSED\n";
  } else {
    std::cout << "FAILED\n";
  }
}
