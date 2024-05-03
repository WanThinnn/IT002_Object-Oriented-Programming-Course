#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class ThiSinh
{
    private:
        char HT[100];
        char NS[20];
        int MSSV;
        float dT, dV, dA, dTo = 0;
    public:
        void nhap(ThiSinh a[]);
        void xuat();
        void xuly();
        friend class ThiSinh2;
};

class ThiSinh2
{
    public:
        void nhapsl(ThiSinh a[], int &N);
        void xuat2(ThiSinh a[], int N);
};


void ThiSinh2::nhapsl(ThiSinh a[], int &N)
{
    for (int i = 0; i < N; i++)
        a[i].nhap(a);
}

void ThiSinh::nhap(ThiSinh a[])
{
    {
        cin >> MSSV;
        fflush(stdin);
        gets(HT);
        gets(NS);
        cin >> dT;
        cin >> dV;
        cin >> dA;
    }
}

void ThiSinh::xuly()
{
    dTo = dT + dA + dV;
}


void ThiSinh::xuat()
{
    cout << MSSV << " " << HT << " " << NS << " " << dT << " " << dV << " " << dA << endl;
}


void ThiSinh2::xuat2(ThiSinh a[], int N)
{
    for (int i = 0; i < N; i++)
    {
        a[i].xuly();
        if (a[i].dTo >= 15)
            a[i].xuat();
    }
}

int main()
{
    ThiSinh a[1000];
    ThiSinh2 SL;
    int N;
    cin >> N;
    SL.nhapsl(a, N);
    SL.xuat2(a, N);

}
