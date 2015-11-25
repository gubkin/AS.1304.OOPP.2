#include "stdafx.h"
#include "Larionov_base_class.h"

Larionov_base_class::Larionov_base_class()
{
}


Larionov_base_class::~Larionov_base_class()
{
}

void Larionov_base_class::simpleFunction(){
	cout << "This is simple function of base class" << endl;
}

void Larionov_base_class::virtualFunction(){
	cout << "This is virtual function of base class" << endl;
}