#include "Timoshin_Descendant.h"
#include <conio.h>



int main()
{

	Timoshin_Ancestor *ptr1 = new Timoshin_Ancestor();
	Timoshin_Descendant *ptr2 = new Timoshin_Descendant();
	Timoshin_Ancestor *ptr3 = ptr2;
	Timoshin_Descendant *ptr4 = static_cast<Timoshin_Descendant*> (ptr3);
	
	
	cout << "Call by ancestor pointer:" << endl;
	ptr1->foo();
	ptr1->fooVirtual();
	cout << endl;

	cout << "Call by descendant pointer:" << endl;
	ptr2->foo();
	ptr2->fooVirtual();
	cout << endl;


	cout << "Call by copy descendant pointer:" << endl;
	ptr3->foo();
	ptr3->fooVirtual();
	cout << endl;

	
	cout << "Call by casted pointer:" << endl;
	ptr4->foo();
	ptr4->fooVirtual();

	int a = _getch();
	return 0;
}