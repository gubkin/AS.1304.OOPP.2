#pragma once
#include "Timoshin_Ancestor.h"
class Timoshin_Descendant :
	public Timoshin_Ancestor
{
public:
	void foo();
    void fooVirtual();
	Timoshin_Descendant();
	~Timoshin_Descendant();
};

