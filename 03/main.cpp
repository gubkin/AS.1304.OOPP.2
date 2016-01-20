#include "bs.h"
#include "dsd.h"


using namespace std;


int main(int argc, char** argv[])
{
	setlocale(LC_CTYPE, "Russian");
	bs *B = new bs();
	B->easy_f();    
	B->virtual_f();


	dsd *C=new dsd();
	C->easy_f();
	C->virtual_f();
	
	bs *BB;
	BB=C; 
	BB->easy_f();
	BB->virtual_f();

	dsd *CC;
	CC=static_cast<dsd*>(BB); 
	CC->easy_f();
	CC->virtual_f();
	
	

	system ("pause");
	return 0;


	

}