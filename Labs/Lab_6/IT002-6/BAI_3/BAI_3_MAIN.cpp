#include <iostream>
#include "BAI_3_CLASS.h"
using namespace std;

void SoSanh()
{
    
}


int main()
{
    CTimeSpan A, B;
    bool temp;
    cin >> A >> B;
    cout << "* The CTimeSpan = SUM(seconds + (minutes * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60))" << endl;
    cout << "- CTimeSpan A = " << A << endl;
    cout << "- CTimeSpan B = " << B << endl;
    cout << "- CtimeSpan C = A + B: " << A + B << endl;
    cout << "- CtimeSpan D = A - B: " <<  A - B << endl;
    cout << "- Compare A and B: " << endl;
    if (A == B)
        cout << "-> A = B" << endl;
    else if (A > B)
        cout << "-> A > B" << endl;
    else if (A <= B)
        cout << "-> A <= B" << endl;
    else if (A < B)
        cout << "-> A < B" << endl;
    else if (A >= B)
        cout << "-> A >= B" << endl;
    
}

