
#include <iostream>
#include "TIME.h"
using namespace std;

int main()
{
    TIME time;
    time.Input();
    time.Output();
    TIME addOneSecond = time; ++addOneSecond;
    TIME subOneSecond = time; --subOneSecond;
    int n; cout << "\nNhap so giay cong/tru: ";cin >> n;
    TIME addNSecond = time; addNSecond = addNSecond + n;
    TIME subNSecond = time; subNSecond = subNSecond - n;
    cout << "\nThoi gian sau khi cong 1 giay: "; addOneSecond.Output();
    cout << "\nThoi gian sau khi tru 1 giay:  "; subOneSecond.Output();
    cout << "\nThoi gian sau khi cong " << n << " giay: "; addNSecond.Output();
    cout << "\nThoi gian sau khi tru " << n << " giay: "; subNSecond.Output();

    return 0;
}


