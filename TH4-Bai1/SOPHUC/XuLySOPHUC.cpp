#include"SOPHUC.h"
#include<iostream>
#include<cmath>

using namespace std;

//Nap chong toan tu cin >> va cout << cho so phuc
istream& operator>>(istream& is, SOPHUC& sp)
{
	cout << "\nNhap phan thuc: "; is >> sp.Thuc;
	cout << "Nhap phan ao: "; is >> sp.Ao;
	return is;
}
ostream& operator<<(ostream& os, const SOPHUC& sp)
{
	if(sp.Ao < 0)
		os << sp.Thuc << "" << sp.Ao << "i";
	else
		os << sp.Thuc << "+" << sp.Ao << "i";
	return os;
}
SOPHUC& SOPHUC::operator=(const SOPHUC& sp)
{
	if (this != &sp)
	{
		Thuc = sp.Thuc;
		Ao = sp.Ao;
	}
	return *this;
}
void SOPHUC::Nhap()
{
	cout << "\nNhap so phuc"; cin >> *this;
}
void SOPHUC::Xuat()
{
	cout << *this;
}
SOPHUC SOPHUC::operator+(const SOPHUC& sp) const
{
	SOPHUC spTong;
	spTong.Thuc = Thuc + sp.Thuc;
	spTong.Ao = Ao + sp.Ao;
	return spTong;
}
SOPHUC SOPHUC::operator-(const SOPHUC& sp) const
{
	SOPHUC spHieu;
	spHieu.Thuc = Thuc - sp.Thuc;
	spHieu.Ao = Ao - sp.Ao;
	return spHieu;
}
SOPHUC SOPHUC::operator*(const SOPHUC& sp) const
{
	SOPHUC spTich;
	spTich.Thuc = Thuc * sp.Thuc - Ao * sp.Ao;
	spTich.Ao = Thuc * sp.Ao + Ao * sp.Thuc;
	return spTich;
}
SOPHUC SOPHUC::operator/(const SOPHUC& sp) const
{
	SOPHUC spThuong;
	spThuong.Thuc = (Thuc * sp.Thuc + Ao * sp.Ao) / (pow(sp.Thuc,2) + pow(sp.Ao,2));
	spThuong.Ao = (Ao * sp.Thuc - Thuc * sp.Ao) / (pow(sp.Thuc, 2) + pow(sp.Ao, 2));
	return spThuong;
}
bool SOPHUC::operator==(const SOPHUC& sp) const
{
	return (Thuc == sp.Thuc) && (Ao == sp.Ao);
}
bool SOPHUC::operator!=(const SOPHUC& sp) const
{
	return !(*this == sp);
}
SOPHUC SOPHUC::Tong(const SOPHUC& sp)
{
	return (*this + sp);
}
SOPHUC SOPHUC::Hieu(const SOPHUC& sp)
{
	return (*this - sp);
}
SOPHUC SOPHUC::Tich(const SOPHUC& sp)
{
	return (*this * sp);
}
SOPHUC SOPHUC::Thuong(const SOPHUC& sp)
{
	return (*this / sp);
}
