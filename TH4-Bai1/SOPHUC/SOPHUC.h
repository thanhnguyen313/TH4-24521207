#pragma once
#include <iostream>
using namespace std;
class SOPHUC
{
private:
	float Thuc;
	float Ao;
public:
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream& is, SOPHUC& st);
	friend ostream& operator<<(ostream& os, const SOPHUC& st);
	SOPHUC operator+(const SOPHUC& sp) const;
	SOPHUC operator-(const SOPHUC& sp) const;
	SOPHUC operator*(const SOPHUC& sp) const;
	SOPHUC operator/(const SOPHUC& sp) const;
	bool operator==(const SOPHUC& sp) const;
	bool operator!=(const SOPHUC& sp) const;
	SOPHUC& operator=(const SOPHUC& st);
	SOPHUC Tong(const SOPHUC& sp);
	SOPHUC Hieu(const SOPHUC& sp);
	SOPHUC Tich(const SOPHUC& sp);
	SOPHUC Thuong(const SOPHUC& sp);
};

