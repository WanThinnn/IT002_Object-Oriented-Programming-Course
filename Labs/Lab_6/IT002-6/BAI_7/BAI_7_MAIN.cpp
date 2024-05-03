#include <iostream>
#include <cmath>
#include "BAI_7_CLASS.h"
#include "BAI_7_CODE.h"

int main()
{
    Polynomial F, G, T;
    float a[] = {5, 2, 3};
    float b[] = {10, 5, 2};
    cin >> F;
    cin >> G;
    cout << "F(x) = " << F << endl;
    cout << "G(x) = " << G << endl;
    cout << "F(x) + G(x) = " << F + G << endl;
    cout << "F(x) - G(x) = " << F - G << endl;
    cout << "F(x) * G(x) = " << F * G << endl;
    cout << "F(x) / G(x) = " << F / G << endl;
    cout << "F(3) = " << F.calPoly(3) << endl;
    cout << "T(3) = " << T.calPoly(2, 3, a) << endl;
    Polynomial Q(3, b);
    cout << "Q(3) = " << Q.calPoly(3, b) << endl;
}
