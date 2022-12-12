#include <iostream>

#include "Algorithm.h"
#include "Test\VectorTest.h"
#include "Test\StringTest.h"
#include "Test\ListTest.h"
#include "Test\Unordered_setTest.h"
#include "Test\DequeTest.h"
#include "Test\QueueTest.h"
#include "Test\StackTest.h"
#include "Profiler\Profiler.h"


int main()
{
    TinySTL::Unordered_setTest::testAllCases();
    TinySTL::VectorTest::testAllCases();
    TinySTL::StringTest::testAllCases();
    TinySTL::ListTest::testAllCases();
    TinySTL::DequeTest::testAllCases();
    TinySTL::QueueTest::testAllCases();
    TinySTL::StackTest::testAllCases();

    system("pause");
}

