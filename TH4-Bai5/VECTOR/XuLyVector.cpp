#include "VECTOR.h"
#include "DIEM.h"
using namespace std;
istream& operator>>(istream& is, VECTOR& vector)
{
    is >> vector.vector;
    return is;
}
ostream& operator<<(ostream& os, const VECTOR& vector)
{
    os << vector.vector;
    return os;

}
VECTOR VECTOR::operator+(const VECTOR& other) const {
    VECTOR result;
    result.vector = this->vector + other.vector;
    return result;
}

VECTOR VECTOR::operator-(const VECTOR& other) const {
    VECTOR result;
    result.vector = this->vector - other.vector; 
    return result;
}
