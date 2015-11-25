#pragma once
#include "ancestor.h"
#include <iostream>

using namespace std;

ancestor::ancestor(void)
{

}

void ancestor::function()
{
	cout << "Ancestor's function" << endl;
}

void ancestor::virtual_function()
{
	cout << "Ancestor's virtual function" << endl;
}
ancestor::~ancestor(void)
{

}