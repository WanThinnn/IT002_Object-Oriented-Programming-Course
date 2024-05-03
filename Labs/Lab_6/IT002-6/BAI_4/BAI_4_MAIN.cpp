#include <iostream>
#include "BAI_4_CLASS.h"
#include "BAI_4_CODE.h"


int main()
{
    cout << "HELLO" << endl;
    CTime T1, T2;
    cin >> T1;
    cin >> T2;
    cout << "* T1 = " <<T1 << endl;
    cout << "* T2 = " << T2 << endl;
    cout << "* Them 3 giay vao T1: " << T1 + 3 << endl;
    cout << "* T1++: "; T1++;
    cout << T1 << endl;
    cout << "* T1--: "; T1--;
    cout << T1 << endl;
    cout << "T3 = delta(|T1 - T2|): " << T1 - T2 << endl;
}
