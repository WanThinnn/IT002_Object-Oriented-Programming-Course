#include <iostream>
#include "BAI_2_CLASS.h"
#include "BAI_2_CODE.h"
using namespace std;
int main()
{
    PHANSO a, b;
    cin >> a;
    cin >> b;
    cout << "Phan so a = " << a << " = " << a.Module() << endl;
    cout << "Phan so b = " << b << " = " << b.Module() << endl;
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

