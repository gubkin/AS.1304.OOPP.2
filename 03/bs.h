#pragma once

#include <iostream>
using namespace std;

class bs
{
public:
	bs(void);
	~bs(void);

	void easy_f ()
	{
		cout << "\n������� ������� �������� ������\n"; 
	};

	virtual void virtual_f()
	{
		cout << "\n����������� ������� �������� ������\n"; 
	};
};

