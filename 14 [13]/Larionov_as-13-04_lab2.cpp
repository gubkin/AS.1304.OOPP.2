// Larionov_as-13-04_lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "Larionov_base_class.h"
#include "Larionov_derived_class.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Larionov_base_class* pointer1 = new Larionov_base_class;
	Larionov_derived_class* pointer2 = new Larionov_derived_class;
	Larionov_base_class* pointer3 = pointer2;
	Larionov_derived_class* pointer4 = static_cast<Larionov_derived_class*>(pointer3);
	pointer1->simpleFunction();
	pointer1->virtualFunction();
	cout << endl;
	pointer2->simpleFunction();
	pointer2->virtualFunction();
	cout << endl;
	pointer3->simpleFunction();
	pointer3->virtualFunction();
	cout << endl;
	pointer4->simpleFunction();
	pointer4->virtualFunction();
	return 0;
}

