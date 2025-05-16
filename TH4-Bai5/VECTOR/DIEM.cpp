#include "DIEM.h"
#include <iostream>
DIEM::DIEM()
{
	x = y = 0;
}
DIEM::DIEM(double x)
{
	this->x = x;
	y = 0;
}
DIEM::DIEM(double x, double y)
{
	this->x = x;
	this->y = y;
}
DIEM::~DIEM()
{
	cout << "Da huy 1 diem.";
}
double DIEM::GetX() { return x; }
double DIEM::GetY() { return y; }
void DIEM::setX(double x)
{
	this->x = x;
}
void DIEM::setY(double y)
{
	this->y = y;
}
void DIEM::setXY(double x, double y)
{
	this->x = x;
	this->y = y;
}
void DIEM::Nhap()
{
	cout << "\nNhap hoanh do: "; cin >> x;
	cout << "\nNhap tung do: "; cin >> y;
}
void DIEM::Xuat()
{
	cout << x << ", " << y;
}
istream& operator>>(istream& is, DIEM& d)
{
	cout << "Nhap hoanh do x: ";
	is >> d.x;
	cout << "Nhap tung do y: ";
	is >> d.y;
	return is;
}
ostream& operator<<(ostream& os, const DIEM& d)
{
	os << "(" << d.x << ", " << d.y << ")";
	return os;
}
DIEM DIEM::operator+(const DIEM& other) const {
	return DIEM(x + other.x, y + other.y);
}

DIEM DIEM::operator-(const DIEM& other) const {
	return DIEM(x - other.x, y - other.y);
}

