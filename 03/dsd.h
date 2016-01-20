#pragma once
#include "bs.h"

class dsd :
	public bs
{
public:
	dsd(void);
	~dsd(void);
	
	void easy_f ()
	{
		cout << "\nПростая функция производного класса\n"; 
	};

	 void virtual_f()
	{
		cout << "\nВиртуальная функция производного класса\n"; 
	};

	
	
};
