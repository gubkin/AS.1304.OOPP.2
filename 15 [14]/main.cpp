#include <iostream>
#include "ancestor.h"
#include "descendant.h"
#include "windows.h"

using namespace std;

int main(int argc, const char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ancestor *indicator_ancestor = new ancestor();
	descendant *indicator_descendent = new descendant();
	ancestor *indicator_1 = indicator_descendent;
	descendant *indicator_2 = static_cast<descendant*> (indicator_1);

	cout << "указатель на базовый класс, которому присвоен объект базового класса" << endl;
	indicator_ancestor->function();
	indicator_ancestor->virtual_function();

	cout << "указатель на производный класс, которому присвоен объект производного класса" << endl;
	indicator_descendent->function();
	indicator_descendent->virtual_function();

	cout << "указатель на базовый класс, которому присвоен объект из второго указателя" << endl;
	indicator_1->function();
	indicator_1->virtual_function();

	cout << "указатель на производный класс, которому с использованием статической операции приведения типа присвоен объект из третьего указателя" << endl;
	indicator_2->function();
	indicator_2->virtual_function();

	system("pause");
}