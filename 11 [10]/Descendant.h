#pragma once
#include "Ancestor.h"
class Descendant :
	public Ancestor
{
public:
	void func();
	virtual void Virtualfunc();
	Descendant();
	~Descendant();
};

