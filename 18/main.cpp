#include <iostream>

using namespace std;

class TeleshininaBase {
public:
	virtual void Display(){
		cout << "виртуальная функция базового класа\n";
	}
	void Print(){
		cout << "простая функция базового класа\n";
	}
};

class TeleshininaDerived : public TeleshininaBase{
public:
	void Display(){
		cout << "виртуальная функция производного класа\n";
	}
	void Print(){
		cout << "простая функция производного класа\n";
	}
};

int main(){
	setlocale(0, "");
	TeleshininaBase base;
	TeleshininaDerived derived;

	TeleshininaBase *p1 = &base;
	TeleshininaDerived *p2 = &derived;
	TeleshininaBase *p3 = p2;
	TeleshininaDerived *p4 = static_cast<TeleshininaDerived*>(p3);

	cout << "  указатель 1:\n";
	p1->Display();
	p1->Print();
	cout << "  указатель 2:\n";
	p2->Display();
	p2->Print();
	cout << "  указатель 3:\n";
	p3->Display();
	p3->Print();
	cout << "  указатель 4:\n";
	p4->Display();
	p4->Print();

	system("pause");

	return 0;
}