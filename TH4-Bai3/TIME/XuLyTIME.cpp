#include <iostream>
#include "TIME.h"

using namespace std;

istream& operator>>(istream& is, TIME& time) {
    is >> time.hour >> time.minutes >> time.second;
    return is;
}
ostream& operator<<(ostream& os, const TIME& time) {
    os << time.hour << " Gio " << time.minutes << " Phut " << time.second << " Giay ";
    return os;
}
bool TIME::CheckTime() //Ham kiem tra xem thoi gian co hop le ko.
{
    if (hour > 23 || hour < 0 || minutes > 59 || minutes < 0 || second > 59 || second < 0)
        return false;
    return true;
}
void TIME::Input()
{
    do
    {
        cout << "\nNhap thoi gian (Gio Phut Giay): ";
        cin >> hour >> minutes >> second;
        if (!CheckTime())
            cout << "\nVui long nhap thoi gian hop le!";
    } while (!CheckTime());
}
void TIME::Output()
{
    cout << *this;
}
TIME TIME::operator=(const TIME &other) 
{
    second = other.second;
    minutes = other.minutes;
    hour = other.hour;
    return *this;
}
TIME TIME::operator++()
{
    second++;
    if (second >= 60)
    {
        minutes++;
        second = 0;
        if (minutes >= 60)
        {
            hour++;
            minutes = 0;
        }
    }
    if (hour >= 24)
    {
        hour = 0;
    }
    return *this;
}
TIME TIME::operator--()
{
    second --;
    if (second < 0)
    {
        minutes--;
        second = 59;
        if (minutes < 0)
        {
            hour--;
            minutes = 59;
        }
    }
    if (hour < 0)
    {
        hour = 23;
    }
    return *this;
}
TIME TIME::operator-(int subTime) 
{
    int totalSeconds = hour * 3600 + minutes * 60 + second;
    totalSeconds = ((totalSeconds - subTime) % 86400 + 86400) % 86400;
    hour = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    second = totalSeconds % 60;
    return *this;
}

TIME TIME::operator+(int addTime) 
{
    int totalSeconds = hour * 3600 + minutes * 60 + second + addTime;
    totalSeconds %= 86400;
    hour = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    second = totalSeconds % 60;
    return *this;
}

