#include <iostream>
#include <vector>
#include "VECTOR.h"
using namespace std;
int main()
{
	VECTOR vA, vB;
	cout << "\nNhap vector vA: " << endl; cin >> vA;
	cout << "\nNhap vector vB: " << endl; cin >> vB;
	cout << "\nVector vA: " << vA;
	cout << "\nVector vB: " << vB;
	cout << "\nTong 2 vector vA + vB la: " << vA + vB;
	cout << "\nHieu 2 vector vA - vB la: " << vA - vB; 
	return 0;
}
