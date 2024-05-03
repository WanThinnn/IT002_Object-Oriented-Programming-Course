#include <stdio.h>
#include <iostream>

using namespace std;
int max = 2, MSC, temp;
struct Phanso
{
    int tu, mau;
};

void nhap(Phanso &a)
{
    {
        cin >> a.tu >> a.mau;
    }
}

int xuly(Phanso a, Phanso b)
{
    double del1, del2;
    del1 = 1.0*a.tu/a.mau;
    del2 = 1.0*b.tu/b.mau;
    if (del1 > del2)
        return 1;
    else if (del1 < del2)
        return -1;
    return 0;
}

void xuat(Phanso a, Phanso b)
{
    if (xuly(a,b) == 1)
        cout << a.tu << "/" << a.mau;
    else if (xuly(a,b) == -1)
        cout << b.tu << "/" << b.mau;
    else if (xuly(a,b) == 0)
        cout << "bang nhau";
}

int main()
{
    Phanso a, b;
    nhap(a);
    nhap(b);
    xuly(a,b);
    xuat(a,b);
}
