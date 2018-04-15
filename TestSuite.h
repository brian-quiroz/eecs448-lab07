#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
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
    void test7_sizeAfterAdds();
    void test8_isEmptyFalse();
    void test9_SingleremoveBack();
    void test10_SingleremoveFront();
    void test11_MultipleremoveBack();
    void test12_MultipleremoveFront();
    void test13_sizeAfterRemoves();
    void test14_removeBackOnNonemptyList();
    void test15_removeFrontOnNonemptyList();
    void test16_removeBackOnEmptyList();
    void test17_removeFrontOnEmptyList();
    void test18_searchOnEmptyList();
    void test19_searchValueNotOnList();
    void test20_searchValueOnList();

    std::ofstream outFile;
};

#endif
