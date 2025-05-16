#pragma once
#include <iostream>
using namespace std;
class DIEM
{
private:
	double x, y;
public:
	~DIEM();
	DIEM();
	DIEM(double x);
	DIEM(double x, double y);
	double GetX();
	double GetY();
	void setX(double x);
	void setY(double y);
	void setXY(double x, double y);
	friend istream& operator>>(istream& is, DIEM& d);
	friend ostream& operator<<(ostream& os, const DIEM& d);
	DIEM operator+(const DIEM& other) const;
	DIEM operator-(const DIEM& other) const;
	void Nhap();
	void Xuat();

};

