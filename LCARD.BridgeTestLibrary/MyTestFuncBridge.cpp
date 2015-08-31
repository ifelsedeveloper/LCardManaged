#include "stdafx.h"
#include "MyTestFuncBridge.h"

namespace MyTestFuncsBridge {

	MyTestFuncsBridge::MyTestFuncsBridge(INT a) : m_pUnmanagedMyTestFuncs(){
		this->m_pUnmanagedMyTestFuncs = new MyTestFuncs(a);
	}

	double MyTestFuncsBridge::Add(double a, double b)
	{
		return this->m_pUnmanagedMyTestFuncs->Add(a,b);
	}

	double MyTestFuncsBridge::Subtract(double a, double b)
	{
		return this->m_pUnmanagedMyTestFuncs->Subtract(a, b);
	}

	double MyTestFuncsBridge::Multiply(double a, double b)
	{
		return this->m_pUnmanagedMyTestFuncs->Multiply(a, b);
	}

	double MyTestFuncsBridge::Divide(double a, double b)
	{
		return this->m_pUnmanagedMyTestFuncs->Divide(a, b);
	}
	
	void MyTestFuncsBridge::GetMessages(){
		for (size_t i = 0; i < 10; i++)
		{
			this->MessageReceived(i, i*i, 2 * i*i, 3 * i*i, 4 * i*i);
		}
	}

	MyTestFuncsBridge::~MyTestFuncsBridge()
	{
		delete this->m_pUnmanagedMyTestFuncs;
		this->m_pUnmanagedMyTestFuncs = NULL;
	}
}