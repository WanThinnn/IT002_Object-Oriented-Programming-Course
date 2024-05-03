#include <stdio.h>
#include <iostream>
#include "BAI_9_CLASS.h"

using namespace std;

int main()
{
    INTEGER A, B;
    INTEGER C(6);
    A = 5;
    B = 6;
    int D = A + B; // Chuyển đổi INTEGER sang int
    cout << "C = " << C.getValue() << endl;
    cout << "D = " << D << endl;
}
