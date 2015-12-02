#include <iostream>
#include "ancestor.h"
#include "descendant.h"

using namespace std;

int main(int argc, const char** argv)
{


	ancestor *indicator_ancestor = new ancestor();
	descendant *indicator_descendent = new descendant();
	ancestor *indicator_1 = indicator_descendent;
	descendant *indicator_2 = dynamic_cast<descendant*> (indicator_1);

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