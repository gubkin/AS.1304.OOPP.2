#pragma once
#include "Larionov_base_class.h"

class Larionov_derived_class:public Larionov_base_class
{
public:
	Larionov_derived_class();
	~Larionov_derived_class();
	void simpleFunction();
	void virtual virtualFunction();
};

