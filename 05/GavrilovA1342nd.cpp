// GavrilovA1342nd.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GavrilovBasicClass.h"
#include "GavrilovExtendedClass.h"


int _tmain(int argc, _TCHAR* argv[])
{
	GavrilovBasicClass* bObj = new GavrilovBasicClass;
	GavrilovExtendedClass* eObj = new GavrilovExtendedClass;
	GavrilovBasicClass* b2Obj = eObj;
	GavrilovExtendedClass* e2Obj = static_cast<GavrilovExtendedClass*>(b2Obj);
	
	cout << "Method calls the base class:" << endl;
	bObj->printUsual();
	bObj->printVirtual();
	cout << endl;

	cout << "Method calls the extended class:" << endl;
	eObj->printUsual();
	eObj->printVirtual();
	cout << endl;

	cout << "Method calls the copy of base class:" << endl;
	b2Obj->printUsual();
	b2Obj->printVirtual(); 
	cout << endl;

	cout << "Method calls the copy of extended-casted class:" << endl;
	e2Obj->printUsual();
	e2Obj->printVirtual();
	cout << endl;

	getchar();
	getchar();

	return 0;
}

