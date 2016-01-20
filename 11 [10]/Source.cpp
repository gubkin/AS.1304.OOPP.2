#include "Descendant.h"
#include <conio.h>

int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");
	Ancestor *ptr1 = new Ancestor();
	Descendant *ptr2 = new Descendant();
	Ancestor *ptr3 = ptr2;
	Descendant *ptr4 = static_cast<Descendant*> (ptr3);

	cout << "”казатель на базовый класс, которому присвоен объект базового класса:" << endl;
	ptr1->func();
	ptr1->Virtualfunc();
	cout << endl;
	cout << "”казатель на производный класс, которому присвоен объект производного класса:" << endl;
	ptr2->func();
	ptr2->Virtualfunc();
	cout << endl;
	cout << "”казатель на базовый класс, которому присвоен объект из второго указател€:" << endl;
	ptr3->func();
	ptr3->Virtualfunc();
	cout << endl;
	cout << "”казатель на производный класс, которому с использованием статической операции приведени€ типа присвоен объект из третьего указател€:" << endl;
	ptr4->func();
	ptr4->Virtualfunc();
	cout << endl;
	_getch();
}