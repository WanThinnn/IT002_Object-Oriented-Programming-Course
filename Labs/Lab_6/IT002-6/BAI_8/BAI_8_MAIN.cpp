#include <iostream>
#include "BAI_8_CLASS.h"
#include "BAI_8_CODE.h"

using namespace std;

int main()
{
    double arr[] = {1, 4, -2, 5, 6};
    CVector u, v;
    cin >> u >> v;
    cout << "u = " << u << endl;
    cout << "v = " << u << endl;
    cout << "t = " << CVector(5, arr) << endl;
    cout << "u + v = " << u + v << endl;
    cout << "u - v = " << u - v << endl;
    cout << "u * v = " << u * v << endl;
    cout << "|u| = " << absVec(u) << endl;
    cout << "Goc giua(u,v) = " << Cos(u, v) << endl;
    cout << "u co vuong goc v khong: " << IsPerpendicular(u, v) << endl;
    
    CMatrix A, B;
    cin >> A >> B;
    cout << "A = " << endl << A << endl;
    cout << "B = " << endl << B << endl;
    cout << "A + B = " << endl << A + B << endl;
    cout << "A - B = " << endl << A + B << endl;
    cout << "A * B = " << endl << A * B << endl;
    cout << "A * u = " << endl << A * u << endl;
}
