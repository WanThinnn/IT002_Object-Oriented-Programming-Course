#include <iostream>
#include <cmath>
#include "BAI_1_CLASS.h"
#include "BAI_1_CODE.h"
using namespace std;

int main()
{
    SOPHUC a, b, c;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    if (a == b)
        cout << "a = b" << endl;
    else if (a > b)
        cout << "a > b" << endl;
    else if (a <= b)
        cout << "a <= b" << endl;
    else if (a >= b)
        cout << "a >= b" << endl;
    else if (a < b)
        cout << "a < b" << endl;
}

