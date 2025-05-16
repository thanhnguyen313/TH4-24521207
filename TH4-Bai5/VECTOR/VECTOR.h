#pragma once
#include <iostream>
#include <vector>
#include "DIEM.h"
class VECTOR
{
private:
    DIEM vector;
public:
    friend istream& operator>>(istream& is, VECTOR& vector);
    friend ostream& operator<<(ostream& os, const VECTOR& vector);
    VECTOR operator+(const VECTOR& other) const;
    VECTOR operator-(const VECTOR& other) const;
};

