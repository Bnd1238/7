#ifndef STA
#define STA

#include <iostream>
#include <math.h>
#include <stdio.h>
class cplx
{
	int real, imagine;
public:
	cplx(int re,int im): real(re),imagine(im)
	{
		std::cout << "open "<<this << "\n";
	}
	cplx()
	{
		std::cout << "open " << this << "\n";
	}
	cplx(const cplx& qwe)
	{
		real = qwe.real;
		imagine = qwe.imagine;
		std::cout << "open " << this << "\n";
	}
	~cplx()
	{
		
		std::cout << "close "<<this<<"\n";
	}

	int GetReal();
	int GetImagine();

	void SetReal();
	void SetReal(int);
	void SetImagine();
	void SetImagine(int);
	
	cplx sum(cplx a);
	cplx minus(cplx a);
	cplx mult(cplx a);
	cplx di(cplx a);
	double m();
	void print();
};
#endif