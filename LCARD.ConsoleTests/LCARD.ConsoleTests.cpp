// LCARD.ConsoleTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "CTestCalc.h"
using namespace std;
using namespace TestLibrary;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "test project lcard\n";
	MyTestFuncs *test = new MyTestFuncs(1);
	cout << test->Add(2, 1) << "\n";
	return 0;
}

