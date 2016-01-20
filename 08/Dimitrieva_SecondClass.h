#pragma once
#include "Dimitrieva_FirstClass.h"
class Dimitrieva_SecondClass:public Dimitrieva_FirstClass
{
public:
	Dimitrieva_SecondClass();
	~Dimitrieva_SecondClass();
	void simpleFunction();
	void virtual virtualFunction();
};

