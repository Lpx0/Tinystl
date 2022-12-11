// Tinystl.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>

#include "Algorithm.h"
#include "Test\VectorTest.h"
#include "Test\StringTest.h"
#include "Test\ListTest.h"
#include "Test\Unordered_setTest.h"
#include "Test\DequeTest.h"
#include "Test\QueueTest.h"
#include "Test\StackTest.h"

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

