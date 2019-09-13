#include "TamGiac.h"
#include <iostream>
#include <math.h>

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
	cout << "\nNhap lan luot 3 canh tam giac: ";
	cin >> a >> b >> c;
}

void TamGiac::Xuat()
{
	cout << "\nCanh a = " << a << "\tCanh b = " << b << "\tCanh c = " << c;
}

void TamGiac::DaylaTamGiacgi()
{
	if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "\nDay la tam giac can!";
			hehe = 1;
		}
		else if (a == b && a == c && c == b)
		{
			cout << "\nDay la tam giac deu!";
			hehe = 2;
		}
		else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
		{
			cout << "\nDay la tam giac vuong!";
			hehe = 3;
		}
		else
		{
			cout << "\nDay la tam giac thuong!";
			hehe = 4;
		}
	}
	else
	{
		cout << "\nDay ko phai la tam giac";
	}
}

void TamGiac::ChuVi()
{
	if (hehe == 4 || hehe == 3)
		cout << "\nChu vi bang: " << a + b + c;
	else if (hehe == 2)
		cout << "\nChu vi bang: " << a * 3;
	else if (hehe == 1)
	{
		if (a == b)
			cout << "\nChu vi bang: " << 2 * a + c;
		else if (a == c)
			cout << "\nChu vi bang: " << 2 * a + b;
		else
			cout << "\nChu vi bang: " << 2 * b + a;
	}
}

//void TamGiac::DienTich()
//{
//	if (hehe == 4) //tam giác thường sử dụng Heron
//	{
//		p = 1 / 2 * (a + c + b);
//		cout << "\nDien tich bang: "<<sqrt(p * (p - a) * (p - b) * (p - c)) * 1.0;
//	}
//	else if (hehe == 3)
//	{
//		cout << "\nDien tich bang: "<<a * b * 0.5;
//	}
//	else if (hehe == 2)
//	{
//		cout << "\nDien tich bang: "<<pow(a, 2) * (sqrt(3) / 4) * 1.0;
//	}
//	else if (hehe == 1)
//	{
//		if (a == b) {
//			cout << "\nDien tich bang: "<< 1/4*c * 1.0;
//		}
//		else if (a == c) {
//			cout << "\nDien tich bang: "<<1 / 4 * b*1.0;
//		}
//		else {
//			cout << "\nDien tich bang: "<<1 / 4 * a*1.0;
//		}
//	}
//}