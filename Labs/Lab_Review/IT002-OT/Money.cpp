//
//  Money.cpp
//  IT002-OT
//
//  Created by Thinnn on 04/07/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;


class Money
{
protected:
    int dola, cent;
public:
    Money() {}
    ~Money(){}
    friend istream& operator >> (istream& is, Money& M)
    {
        is >> M.dola >> M.cent;
        return is;
    }
    Money operator++()
    {
        cent++;
        if (cent == 100)
        {
            dola++;
            cent= 0;
        }
        return *this;
    }
    Money operator++(int)
    {
        Money Temp = *this;
        cent++;
        if (cent == 100)
        {
            dola++;
            cent= 0;
        }
        return Temp;
    }
    friend ostream& operator << (ostream& os, Money M)
    {
        os << "$" << M.dola << " @" << M.cent;
        return os;
    }
};


int main()
{
    Money M;
    cin >> M;
    ++M;
    cout << M;
}
