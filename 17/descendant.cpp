#pragma once
#include "descendant.h"
#include <iostream>

using namespace std;
descendant::descendant(void)
{

}

void descendant::function()
{
	cout << "Descendant's function" << endl;
}

void descendant::virtual_function()
{
	cout << "Descendant's virtual function" << endl;
}

descendant::~descendant(void)
{

}