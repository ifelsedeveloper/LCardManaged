#pragma once

using namespace System;
#include <CTestCalc.h>
using namespace TestLibrary;

namespace MyTestFuncsBridge {

	public ref class MyTestFuncsBridge
	{
	public:
		// TODO: Add your methods for this class here.
		MyTestFuncsBridge(INT a);
		virtual ~MyTestFuncsBridge();

		double Add(double a, double b);

		// Returns a - b
		double Subtract(double a, double b);

		// Returns a * b
		double Multiply(double a, double b);

		// Returns a / b
		double Divide(double a, double b);

		delegate bool MessageReceiver(double t, double y0, double y1, double y2, double y3);

		event MessageReceiver ^ MessageReceived;

		void GetMessages();

	private:
		MyTestFuncs* m_pUnmanagedMyTestFuncs;
	};
}