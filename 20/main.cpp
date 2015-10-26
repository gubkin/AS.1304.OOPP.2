#include <iostream>


using namespace std;

class Basic
{

public:

	Basic()
	{
	}
	void StandartPrint()
	{
		cout << "The Simple function of the basic class." << endl;
	}
	virtual void VirtPrint()
	{
		cout << "The Virtual function of the basic class." << endl;
	}
	~Basic()
	{
		cout << "Basic::~Basic" << endl;
	}

};


class descendant : public Basic
{
	friend void f(Basic*b);

public:
	descendant()
	{
	}
	void StandartPrint()
	{
		cout << "The Simple function of the derived class." << endl;
	}
	virtual void VirtPrint()
	{
		cout << "The Virtual function of the derived class." << endl;
	}
	~descendant()
	{
		cout << "descendant::~descendant" << endl;
	}

};


int main()
{
	Basic b1;
	Basic * b = &b1;   //- ��������� �� ������� �����, �������� �������� ������ �������� ������;


	b->StandartPrint();
	b->VirtPrint();

	descendant d1;
	descendant *d = &d1;  //- ��������� �� ����������� �����, �������� �������� ������ ������������ ������;

	d->StandartPrint();
	d->VirtPrint();

	b = d;     //- ��������� �� ������� �����, �������� �������� ������ �� ������� ���������;

	b->StandartPrint();
	b->VirtPrint();

	d = static_cast<descendant*>(b);  /// ��������� �� ����������� �����, �������� � �������������� ����������� 
	// �������� ���������� ���� �������� ������ �� �������� ���������. 

	d->StandartPrint();
	d->VirtPrint();

	system("pause");
	return 0;
}