#include "TamGiac.h"
#include <iostream>

using namespace std;

TamGiac::TamGiac()
{
	a = 2; 
	b = 3; 
	c = 4;
}

TamGiac::TamGiac(int _a, int _b, int _c)
{
	a = _a;
	b = _b;
	c = _c;
}

void TamGiac::Nhap()
{
	cout << "Nhap lan luot 3 canh tam giac: ";
	cin >> a >> b >> c;
}

void TamGiac::Xuat()
{
	cout << "Canh a = " << a << "\tCanh b = " << b << "Canh c = " << c;
}

float TamGiac::ChuVi()
{
	return 0.0f;
}

float TamGiac::DienTich()
{
	return 0.0f;
}

void TamGiac::DaylaTamGiacgi()
{

}