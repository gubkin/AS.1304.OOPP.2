// KysylbaikovAS134OPLab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "KysylbaikovBasic.h"
#include "KysylbaikovDescendant.h"


int _tmain(int argc, _TCHAR* argv[])
{
	KysylbaikovBasic* BasicO = new KysylbaikovBasic;
	KysylbaikovDescendant* DescendantO = new KysylbaikovDescendant;
	KysylbaikovBasic* Basic2O = DescendantO;
	KysylbaikovDescendant* Descendant2O = static_cast<KysylbaikovDescendant*>(Basic2O);

	cout << "Call the base class:" << endl;
		BasicO->printSimple();
		BasicO->printVirtual();
	cout << endl;



	cout << "Call the Descendant class:" << endl;
		DescendantO->printSimple();
		DescendantO->printVirtual();
	cout << endl;



	cout << "Call the copy of base class:" << endl;
		Basic2O->printSimple();
		Basic2O->printVirtual();
	cout << endl;



	cout << "Call the copy of Descendant-casted :" << endl;
		Descendant2O->printSimple();
		Descendant2O->printVirtual();
	cout << endl;


	getchar();
	getchar();
	return 0;
}

