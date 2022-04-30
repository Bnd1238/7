#include "sta.h"

int cplx::GetReal()
{
	return real;
}
int cplx::GetImagine()
{
	return imagine;
}

void cplx::SetImagine(int a)
{
	imagine = a;
}
void cplx::SetImagine()
{
	std::cin >> imagine;
}
void cplx::SetReal(int a)
{
	real = a;
}
void cplx::SetReal()
{
	std::cin >> real;
}

void cplx::print()
{
	if (imagine>= 0)
		std::cout << real << "+" << imagine << "i" << std::endl;
	else
		std::cout << real << "-" << -1 * imagine << "i" << std:: endl;
}
cplx cplx::sum(cplx a)
{
	cplx ans;
	ans.SetReal(real + a.GetReal());
	ans.SetImagine(imagine + a.GetImagine());
	return ans;
}
cplx cplx::minus(cplx a)
{
	cplx ans;
	ans.SetReal(real - a.GetReal());
	ans.SetImagine(imagine - a.GetImagine());
	return ans;
}
cplx cplx::mult(cplx a)
{
	cplx ans;
	ans.SetReal(a.GetReal() * real - a.GetImagine() * imagine);
	ans.SetImagine(a.GetImagine() * real + imagine * a.GetReal());
	return ans;
}
cplx cplx::di(cplx b)
{
	cplx ans;
	ans.SetReal((real * b.GetReal() + imagine * b.GetImagine()) / (b.GetReal() * b.GetReal() + b.GetImagine() * b.GetImagine()));
	ans.SetImagine((imagine * b.GetReal() - real * b.GetImagine()) / (b.GetReal() * b.GetReal() + b.GetImagine() * b.GetImagine()));
	return ans;
}
double cplx::m()
{
	return sqrt(real * real + imagine * imagine);
}