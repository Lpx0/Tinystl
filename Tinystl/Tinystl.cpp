
#include <iostream>

#include "Algorithm.h"
#include "Test\VectorTest.h"
#include "Test\StringTest.h"
#include "Test\ListTest.h"
#include "Test\Unordered_setTest.h"

int main()
{
    TinySTL::string s;
    std::cout << "Hello World!\n";
    TinySTL::Unordered_setTest::testAllCases();
    TinySTL::VectorTest::testAllCases();
    TinySTL::StringTest::testAllCases();
    TinySTL::ListTest::testAllCases();
    system("pause");
}

