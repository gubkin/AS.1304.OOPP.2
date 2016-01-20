#include "stdafx.h"
#include "Larionov_derived_class.h"


Larionov_derived_class::Larionov_derived_class()
{
}


Larionov_derived_class::~Larionov_derived_class()
{
}

void Larionov_derived_class::simpleFunction(){
	cout << "This is simple function of derived class" << endl;
}

void Larionov_derived_class::virtualFunction(){
	cout << "This is virtual function of derived class" << endl;
}