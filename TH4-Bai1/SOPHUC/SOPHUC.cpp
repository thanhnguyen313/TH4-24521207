#include <iostream>
#include "SOPHUC.h"
#include <iomanip>
using namespace std;
int main()
{
	SOPHUC sp1, sp2;
	int choosen;
	do
	{
		cout << "\n==========CHUONG TRINH KHAI NIEM SO PHUC==========";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\n1. Nhap vao mot so phuc -> Xuat so phuc ra man hinh.";
		cout << "\n2. Nhap vao hai so phuc -> Xuat ra man hinh Tong, Hieu, Tich, Thuong.";
		cout << "\n3. Nhap vao hai so phuc -> So sanh giong/khac nhau 2 phan so";
		do
		{
			cout << "\nBan chon: "; cin >> choosen;
		} while (choosen > 3 || choosen < 0);
		switch (choosen)
		{
		case 0:
			cout << "\nChuong trinh dang thoat...";
			return 0;
		case 1:
			sp1.Nhap();
			cout << "\nSo phuc ban vua nhap la: "; sp1.Xuat();
			break;
		case 2:
			sp1.Nhap();
			sp2.Nhap();
			cout << "\nTong 2 so phuc la: "; (sp1.Tong(sp2)).Xuat();
			cout << "\nHieu 2 so phuc la: "; (sp1.Hieu(sp2)).Xuat();
			cout << "\nTich 2 so phuc la: "; (sp1.Tich(sp2)).Xuat();
			cout << fixed << setprecision(2);
			cout << "\nThuong 2 so phuc la: "; (sp1.Thuong(sp2)).Xuat();
			break;
		case 3:
			sp1.Nhap();
			sp2.Nhap();
			if (sp1 == sp2) //demo overloading ==
				cout << "\n" << sp1 << " = " << sp2;
			if (sp1 != sp2)
				cout << "\n" << sp1 << " != " << sp2;
			break;
		default:
			break;
		}
	} while (choosen != 0);
	return 0;
}