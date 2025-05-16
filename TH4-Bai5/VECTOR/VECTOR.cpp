#include "VECTOR.h"
#pragma once
istream& operator>>(istream& is, VECTOR& vector)
{
    cout << "\nNhap vector: ";
    is >> vector.vector;
    return is;
}
ostream& operator<<(ostream& os, const VECTOR& vector)
{
    os << "\nVecto: " << vector.vector;
    return os;
}