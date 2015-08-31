#include  "stdafx.h"
#include "CTestCalc.h"

#include <stdexcept>

using namespace std;

namespace TestLibrary
{
	MyTestFuncs::MyTestFuncs(INT a){

	}

	double MyTestFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyTestFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyTestFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyTestFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}