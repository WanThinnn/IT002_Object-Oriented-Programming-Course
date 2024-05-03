//
//  Sim.cpp
//  IT002-OT
//
//  Created by Thinnn on 03/07/2023.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char A[] = "(+001)";
    char B[10];
    string a[2] = {"Abb", "Acc"};
    cout << "B = ";
    cin >> B;
    strcat(A, B);
    cout << a[0] << endl;
}
