#include "superBook.h"

int main(int argc, const char* argv[])
{
	Book* b1 = new Book;
	superBook* b2 = new superBook; 
	Book* b3 = b2; 
	superBook* b4 = static_cast<superBook*>(b3); 

	b1->funceasy();
	b1->funcvirtual();

	b2->funceasy();
	b2->funcvirtual();

	b3->funceasy();
	b3->funcvirtual();

	b4->funceasy();
	b4->funcvirtual();

	getchar();

}































