// lab2_oopp_gutkina_as134.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "derivedClass_gutkina_as134.h"


int _tmain(int argc, _TCHAR* argv[])
{
	baseClass_gutkina_as134* pointer1 = new baseClass_gutkina_as134;
	derivedClass_gutkina_as134* pointer2 = new derivedClass_gutkina_as134;
	baseClass_gutkina_as134* pointer3 = pointer2;
	derivedClass_gutkina_as134* pointer4 = static_cast<derivedClass_gutkina_as134*>(pointer3);
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
	getchar();
	return 0;
	
}

