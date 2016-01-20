// Dimitrieva_as-13-04_lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dimitrieva_SecondClass.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Dimitrieva_FirstClass* p1 = new Dimitrieva_FirstClass;
	Dimitrieva_SecondClass* p2 = new Dimitrieva_SecondClass;
	Dimitrieva_FirstClass* p3 = p2;
	Dimitrieva_SecondClass* p4 = static_cast<Dimitrieva_SecondClass*>(p3);
	p1->simpleFunction();
	p1->virtualFunction();
	cout << endl;
	p2->simpleFunction();
	p2->virtualFunction();
	cout << endl;
	p3->simpleFunction();
	p3->virtualFunction();
	cout << endl;
	p4->simpleFunction();
	p4->virtualFunction();
	return 0;
}
