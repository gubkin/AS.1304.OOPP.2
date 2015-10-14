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

	cout << "��������� �� ������� �����, �������� �������� ������ �������� ������" << endl;
	indicator_ancestor->function();
	indicator_ancestor->virtual_function();

	cout << "��������� �� ����������� �����, �������� �������� ������ ������������ ������" << endl;
	indicator_descendent->function();
	indicator_descendent->virtual_function();

	cout << "��������� �� ������� �����, �������� �������� ������ �� ������� ���������" << endl;
	indicator_1->function();
	indicator_1->virtual_function();

	cout << "��������� �� ����������� �����, �������� � �������������� ����������� �������� ���������� ���� �������� ������ �� �������� ���������" << endl;
	indicator_2->function();
	indicator_2->virtual_function();

	system("pause");
}