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
		cout << "\nПростая функция базового класса\n"; 
	};

	virtual void virtual_f()
	{
		cout << "\nВиртуальная функция базового класса\n"; 
	};
};

