#include"PHANSO.h"
#include<iostream>
using namespace std;
istream& operator>>(istream& is, PHANSO& ps) 
{
    cout << "\nNhap tu so: "; is >> ps.iTu;
    cout << "Nhap mau so: "; is >> ps.iMau;
    return is;
}
ostream& operator<<(ostream& os, const PHANSO& ps)
{
    os << ps.iTu << "/" << ps.iMau;
    return os;
}
PHANSO& PHANSO::operator=(const PHANSO& ps)
{
	if (this != &ps)
	{
		iTu = ps.iTu;
		iMau = ps.iMau;
	}
	return *this;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void PHANSO::RutGon() //Ham rut gon phan so
{
	if (iTu == 0)
	{
		iMau = 1;  //phan so co tu = 0 -> 0/1;
		return;
	}
	int ucln = UCLN(iTu, iMau);
	iTu /= ucln;
	iMau /= ucln;
	if (iMau < 0)
	{
		iMau = -1 * iMau;
		iTu = -1 * iTu;
	}
}
void PHANSO::Nhap()
{
	do
	{
		cout << "\nNhap phan so"; cin >> *this;
		if (this->iMau == 0)
			cout << "\nVui long nhap phan so hop le!";
	} while (this->iMau == 0);
}
void PHANSO::Xuat()
{
	this->RutGon();
    cout << *this;
}
PHANSO PHANSO::operator+(const PHANSO& ps) const
{
	PHANSO psTong;
	psTong.iTu = iTu * ps.iMau + ps.iTu * iMau;
	psTong.iMau = iMau * ps.iMau;
	return psTong;
}
PHANSO PHANSO::operator-(const PHANSO& ps) const
{
	PHANSO psHieu;
	psHieu.iTu = iTu * ps.iMau - ps.iTu * iMau;
	psHieu.iMau = iMau * ps.iMau;
	return psHieu;
}
PHANSO PHANSO::operator*(const PHANSO& ps) const
{
	PHANSO psTich;
	psTich.iTu = iTu * ps.iTu;
	psTich.iMau = iMau * ps.iMau;
	return psTich;
}
PHANSO PHANSO::operator/(const PHANSO& ps) const
{
	PHANSO psThuong;
	psThuong.iTu = iTu * ps.iMau;
	psThuong.iMau = iMau * ps.iTu;
	return psThuong;
}
bool PHANSO::operator==(const PHANSO& ps) const
{
	return iTu * ps.iMau == iMau * ps.iTu;
}
bool PHANSO::operator!=(const PHANSO& ps) const
{
	return !(*this == ps);
}
bool PHANSO::operator>(const PHANSO& ps) const
{
	return iTu * ps.iMau > iMau * ps.iTu;
}
bool PHANSO::operator<(const PHANSO& ps) const
{
	return !(*this < ps);
}
PHANSO PHANSO::Tong(const PHANSO& ps)
{
	return (*this + ps);
}
PHANSO PHANSO::Hieu(const PHANSO& ps)
{
	return (*this - ps);
}
PHANSO PHANSO::Tich(const PHANSO& ps)
{
	return (*this * ps);
}
PHANSO PHANSO::Thuong(const PHANSO& ps)
{
	return (*this / ps);
}
