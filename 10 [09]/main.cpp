#include "IvanovDesc.h"
#include "conio.h"

int main (int argc,char** argv)
{

	Ivanovbase *pointer1;
	pointer1=new Ivanovbase;

	IvanovDesc *pointer2;
	pointer2=new IvanovDesc;

	Ivanovbase *pointer3;
	pointer3=pointer2;

	IvanovDesc *pointer4;
	pointer4=static_cast <IvanovDesc*> (pointer3);


	cout<<"pointer 1"<<endl<<endl;
		pointer1->output();
		pointer1->outputvirt();

	cout<<endl<<"pointer 2"<<endl<<endl;
		pointer2->output();
		pointer2->outputvirt();

	cout<<endl<<"pointer 3"<<endl<<endl;
		pointer3->output();
		pointer3->outputvirt();

	cout<<endl<<"pointer 4"<<endl<<endl;
		pointer4->output();
		pointer4->outputvirt();

getch();

}