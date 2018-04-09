#include <iostream>
#include "LinkedListOfInts.h"

#ifndef TESTSUITE_H
#define TESTSUITE_H

class TestSuite {
  public:
    TestSuite();
    void runTests();
  private:
    void test1_isEmpty();
    void test2();
    void testC();
};

#endif
