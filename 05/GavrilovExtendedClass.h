#pragma once
#include "GavrilovBasicClass.h"

class GavrilovExtendedClass: public GavrilovBasicClass
{
public:
	GavrilovExtendedClass();
	~GavrilovExtendedClass();

	void printUsual();
	void printVirtual();
};

