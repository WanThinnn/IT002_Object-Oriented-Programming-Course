#include <stdio.h>
#include <iostream>
#include "BAI_6_CLASS.h"

int main()
{
    String ST1, ST2, ST3, ST4;
    cout << "ST1 = ";
    cin >> ST1;
    cout << "ST2 = ";
    cin >> ST2;
    if (ST1 == ST2)
        cout << "ST1 = ST2";
    else if (ST1 != ST2)
        cout << "ST1 != ST2";
    cout << endl;
    if (ST1 > ST2)
        cout << "ST1 > ST2";
    else if (ST1 <= ST2)
        cout << "ST1 <= ST2";
    else if (ST1 < ST2)
        cout << "ST1 < ST2";
    else if (ST1 <= ST2)
        cout << "ST1 <= ST2";
    cout << endl;
    ST3 = ST1;
    ST4 = ST1 + ST2;
    cout << "ST3 = ST1 = " << ST3 << endl;
    cout << "ST4 = ST1 + ST2 = " << ST4 << endl;
    return 0;
}

