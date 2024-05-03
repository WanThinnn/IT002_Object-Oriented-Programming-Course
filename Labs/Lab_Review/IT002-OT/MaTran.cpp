//
//  MaTran.cpp
//  IT002-OT
//
//  Created by Thinnn on 04/07/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class matran
{
private:
    int **a;
    int m, n;
public:
    matran()
    {
        m = n = 0;
        a = NULL;
    }
    matran(int** A, int M, int N)
    {
        m = M;
        n = N;
        a = new int*[m];
        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];
            for (int j = 0; j < n; j++)
                a[i][j] = A[i][j];
        }
    }
    matran(int M, int N)
    {
        m = M;
        n = N;
        a = new int*[m];
        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];
            for (int j = 0; j < n; j++)
                a[i][j] = 0;
        }
    }
    matran(matran& B)
    {
        m = B.m;
        n = B.n;
        a = B.a;
    }
    friend istream& operator >> (istream& is, matran &A)
    {
        is >> A.m >> A.n;
        A.a = new int * [A.m];
        for (int i = 0; i < A.m; i++)
        {
            A.a[i] = new int[A.n];
            for (int j = 0; j < A.n; j++)
                is >> A.a[i][j];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, matran A)
    {
        os << A.m << " " << A.n <<endl;
        
        for (int i = 0; i < A.m; i++)
        {
            for (int j = 0; j < A.n; j++)
                os << A.a[i][j] << " ";
            os << endl;
        }
        return os;
    }
    friend matran operator + (matran A, matran B)
    {
        matran C(A.m, A.n);
        if (A.m == B.m and A.n == B.n)
        {
            for (int i = 0; i < A.m; i++)
                for (int j = 0; j < A.n; j++)
                    C.a[i][j] = A.a[i][j] + B.a[i][j];
        }
        return C;
    }
    friend matran operator - (matran A, matran B)
    {
        matran C(A.m, A.n);
        {
            if (A.m == B.m and A.n == B.n)
            {
                for (int i = 0; i < A.m; i++)
                    for (int j = 0; j < A.n; j++)
                        C.a[i][j] = A.a[i][j] - B.a[i][j];
            }
        }
        return C;
    }
    friend matran operator * (matran A, matran B)
    {
        if (A.n == B.m)
        {
            int** res = new int*[A.m];
            for (int i = 0; i < A.m; i++)
            {
                res[i] = new int[B.n];
                for (int j = 0; j < B.n; j++)
                {
                    for (int k = 0; k < B.m; k++)
                    {
                        res[i][j] += A.a[i][k]*B.a[k][j];
                    }
                }
            }
            matran C(res, A.m, B.n);
            return C;
        }
        return matran();
    }
    bool operator == (matran B)
    {
        int S = 0, P = 0;
        if (m == B.m and n == B.n)
        {
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    S += a[i][j];
            
            for (int i = 0; i < B.m; i++)
                for (int j = 0; j < B.n; j++)
                    P += B.a[i][j];
            if (S == P)
                return true;
        }
        return false;
    }
    matran operator += (matran B)
    {
        {
            if (m == B.m and n == B.n)
            {
                for (int i = 0; i < m; i++)
                    for (int j = 0; j < n; j++)
                        a[i][j] = a[i][j] + B.a[i][j];
            }
        }
        return *this;
    }
    int operator ++ (int)
    {
        int temp = a[0][0];
        a[0][0]++;
        return temp;
    }
};



int main()
{
    matran A;
    cin >> A;
    cout << A << endl;
//    matran B(A);
//    cout << B << endl;
//    cout << A + B << endl;
//    cout << A*B << endl;
//    if (A==B)
//        cout << "TRUE" << endl;
//    else
//        cout << "FALSE" << endl;
//    matran C = A++;
//    cout << A++ << endl;
//    int a = A++;
    cout << A++ << endl;
}
