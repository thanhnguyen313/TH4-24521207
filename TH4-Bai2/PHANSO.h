#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class PHANSO
{
private:
	int iTu;
	int iMau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	friend istream& operator>>(istream& is, PHANSO& ps);
	friend ostream& operator<<(ostream& os, const PHANSO& ps);
	PHANSO operator+(const PHANSO& ps) const;
	PHANSO operator-(const PHANSO& ps) const;
	PHANSO operator*(const PHANSO& ps) const;
	PHANSO operator/(const PHANSO& ps) const;
	PHANSO& operator=(const PHANSO& ps);
	bool operator==(const PHANSO& ps) const;
	bool operator!=(const PHANSO& ps) const;
	bool operator>(const PHANSO& ps) const;
	bool operator<(const PHANSO& ps) const;
	PHANSO Tong(const PHANSO& ps);
	PHANSO Hieu(const PHANSO& ps);
	PHANSO Tich(const PHANSO& ps);
	PHANSO Thuong(const PHANSO& ps);
};
int UCLN(int a, int b);


