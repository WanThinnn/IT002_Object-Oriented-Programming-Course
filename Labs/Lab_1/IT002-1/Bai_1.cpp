#include <iostream>
#include <iomanip>
#define MAXN 1000
using namespace std;
 
struct PhanSo
{
    int tu, mau;
};

int ucln(int a, int b)
{
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return ucln(b, a%b);
}

void Nhap(PhanSo a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].tu;
        cin >> a[i].mau;
    }
}

void Xuat(PhanSo a[], int &n)
{
for (int i = 0; i < n; i++)
    {
        if (a[i].mau == 0)
            cout << "Khong thoa yeu cau bai toan" << endl;
        
        else if (a[i].tu == 0)
            cout << 0 << endl;
        
        else if (a[i].tu == a[i].mau)
            cout << 1 << endl;
        
        else if (a[i].tu + a[i].mau == 0)
            cout << -1 << endl;
        
        else if (a[i].tu < 0 and  a[i].mau < 0)
            cout << abs((a[i].tu)/ucln(a[i].tu, a[i].mau)) << "/" << abs((a[i].mau)/ucln(a[i].tu, a[i].mau)) << endl;
        
        else if (a[i].tu < 0 or a[i].mau < 0 and (a[i].tu)%(a[i].mau) != 0)
            cout << "-" << abs((a[i].tu)/ucln(a[i].tu, a[i].mau)) << "/" << abs((a[i].mau)/ucln(a[i].tu, a[i].mau)) << endl;
        
        else if ((a[i].tu)%(a[i].mau) == 0)
            cout << ((a[i].tu)/a[i].mau) << endl;
        
        else
            cout << ((a[i].tu)/ucln(a[i].tu, a[i].mau)) << "/" << ((a[i].mau)/ucln(a[i].tu, a[i].mau)) << endl;
    }
}


int main()
{
PhanSo a[MAXN];
int n;
Nhap(a, n);
Xuat(a, n);
return 0;

}


