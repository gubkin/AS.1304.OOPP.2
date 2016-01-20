#pragma once
#include "IvanovBase.h"
class IvanovDesc: public Ivanovbase
{
public:
	
	void output();
	void virtual outputvirt();
	IvanovDesc(void);
	~IvanovDesc(void);
};

