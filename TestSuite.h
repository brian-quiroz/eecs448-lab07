#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "LinkedListOfInts.h"

#ifndef TESTSUITE_H
#define TESTSUITE_H

class TestSuite {
  public:
    TestSuite();
    void runTests();
  private:
    void test1_isEmptyTrue();
    void test2_sizeOnEmptyList();
    void test3_SingleaddBack();
    void test4_SingleaddFront();
    void test5_MultipleaddBack();
    void test6_MultipleaddFront();
    void test7_isEmptyFalse();
};

#endif
