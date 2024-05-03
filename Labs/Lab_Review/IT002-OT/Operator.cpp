//
//  Operator.cpp
//  IT002-OT
//
//  Created by Thinnn on 04/07/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class IntArr
{
private:
    int count;
    int *values;
public:
    IntArr(){}
    ~IntArr()
    {
        delete []values;
    }
    IntArr(int n, int x)
    {
        count = n;
        values = new int [count];
        for (int i = 0; i < count; i++)
            values[i] = x;
    }
    IntArr(int n)
    {
        count = n;
        values = new int [count];
        for (int i = 0; i < count; i++)
            values[i] = 0;
    }
    friend istream& operator >> (istream& is, IntArr &A)
    {
        is >> A.count;
        A.values = new int[A.count];
        for (int i = 0; i < A.count; i++)
            is >> A.values[i];
        return is;
    }
    
    friend ostream& operator << (ostream& os, IntArr A)
    {
        os << A.count << endl;
        for (int i = 0; i < A.count; i++)
            os << A.values[i] << " ";
        os << endl;
        return os;
    }
    IntArr concat(IntArr A)
    {
        IntArr B;
        B.count = count + A.count;
        B.values = new int[B.count];
        for (int  i = 0; i < count; i++)
            B.values[i] = values[i];
        
        for (int  j = 0; j < A.count; j++)
            B.values[j+count] = A.values[j];
        
        return B;
    }
    void push(int tem)
    {
        IntArr L = *this;
        count++;
        values = new int[count];
        for (int i = 0; i < count-1; i++)
        {
            values[i] = L.values[i];
        }
        values[count-1] = tem;
    }
};



int main()
{
    IntArr l1;
    IntArr l2(3, 2);
    cout << l2;
    cin >> l2;
    cout << l2 << endl;
//    cin >> l1;
//    cout << l1;
//    IntArr l4 = *l2.concat(l1);
//    cout << l4 << endl;
    l2.push(3);
    cout << l2 << endl;
    
}
