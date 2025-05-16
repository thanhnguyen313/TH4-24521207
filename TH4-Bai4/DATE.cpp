#include <iostream>
#include "DATE.h"

using namespace std;

// Toan tu nhap xuat ngay thang nam
istream& operator>>(istream& is, DATE& date) {
    is >> date.iDay >> date.iMonth >> date.iYear;
    return is;
}
ostream& operator<<(ostream& os, const DATE& date) {
    os << date.iDay << "/" << date.iMonth << "/" << date.iYear;
    return os;
}
// Ham xac dinh so ngay trong thang
int DATE::getDays()
{
    switch (iMonth)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0))
            return 29;
        else
            return 28;
    default:
        return 0;
    }
}
// Kiem tra ngay thang nam do co ton tai ko ?
bool DATE::checkDays(const DATE& date)
{
    int days = getDays();
    if (date.iDay > days || date.iDay < 1 || date.iMonth < 1 || date.iMonth > 12)
        return false;
    return true;
}
void DATE::Input()
{
    do
    {
        cout << "\nNhap ngay thang nam: "; cin >> *this;
        if (!checkDays(*this))
            cout << "Vui long nhap ngay thang nam hop le!";
    } while (!checkDays(*this));
};
void DATE::Output()
{
    cout << *this;
};
DATE DATE::operator=(const DATE& other)
{
    iDay = other.iDay;
    iMonth = other.iMonth;
    iYear = other.iYear;
    return *this;
}
DATE DATE::operator+(int addDate)
{
    iDay += addDate;
    int days;
    while (true)
    {
        days = getDays(); 
        if (iDay <= days)
            break;
        iDay -= days;
        iMonth++;
        if (iMonth > 12)
        {
            iMonth = 1;
            iYear++;
        }
    }
    return *this;
}
DATE DATE::operator-(int subDate)
{
    iDay -= subDate;
    while (iDay <= 0)
    {
        iMonth--;
        if (iMonth < 1)
        {
            iMonth = 12;
            iYear--;
        }
        iDay += getDays(); 
    }
    return *this;
}