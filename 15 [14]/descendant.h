#include "ancestor.h"
#pragma once

class descendant : public ancestor
{
public:
	descendant(void);
	void function();
	void virtual_function();
	~descendant(void);
};