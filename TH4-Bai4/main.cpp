#include <iostream>
#include "DATE.h"

using namespace std;

int main()
{
    DATE date;
    date.Input();
    date.Output();
    DATE addNDays = date; 
    DATE subNDays = date; 
    int n; cout << "\nNhap so ngay can cong/tru: "; cin >> n;
    addNDays = addNDays + n;
    subNDays = subNDays - n;
    cout << "Ngay sau khi cong " << n << " ngay la: " << addNDays;
    cout << "\nNgay sau khi tru  " << n << " ngay la: " << subNDays;
    return 0;
}


