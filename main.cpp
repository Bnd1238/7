#include "sta.h"
int main()
{
	cplx a(2,2),b;
	a.print();
	b.SetReal(1);
	b.SetImagine(1);
	b.print();
	cplx x=a.minus(b);
	x.print();
}