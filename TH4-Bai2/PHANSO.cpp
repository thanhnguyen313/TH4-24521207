#include <iostream>
#include "PHANSO.h"
using namespace std;
int main()
{
	PHANSO ps1, ps2;
	int choosen;
	do
	{
		cout << "\n==========CHUONG TRINH KHAI NIEM PHAN SO==========";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\n1. Nhap vao mot phan so -> Rut gon phan so.";
		cout << "\n2. Nhap vao hai phan so -> Xuat ra man hinh Tong, Hieu, Tich, Thuong.";
		cout << "\n3. Nhap vao hai phan so -> so sanh phan so";
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
			ps1.Nhap(); ps1.RutGon();
			cout << "\nPhan so ban vua nhap da duoc rut gon nhu sau: "; ps1.Xuat();
			break;
		case 2:
			ps1.Nhap(); ps1.RutGon();
			ps2.Nhap(); ps1.RutGon();
			cout << "\nTong 2 phan so la: "; (ps1.Tong(ps2)).Xuat();
			cout << "\nHieu 2 phan so la: "; (ps1.Hieu(ps2)).Xuat();
			cout << "\nTich 2 phan so la: "; (ps1.Tich(ps2)).Xuat();
			cout << "\nThuong 2 phan so la: "; (ps1.Thuong(ps2)).Xuat();
			break;
		case 3:
			ps1.Nhap(); ps1.RutGon();
			ps2.Nhap(); ps1.RutGon();
			if (ps1 == ps2) // demo overloading == 
				cout << "\n" << ps1 << " = " << ps2;
			if (ps1 != ps2) // demo overloading != 
				cout << "\n" << ps1 << " != " << ps2;
			if (ps1 > ps2) // demo overloading > 
				cout << "\n" << ps1 << " > " << ps2;
			if (ps1 < ps2) // demo overloading <
				cout << "\n" << ps1 << " < " << ps2;
			break;
		default:
			break;
		}
	} while (choosen != 0);
	return 0;
}
