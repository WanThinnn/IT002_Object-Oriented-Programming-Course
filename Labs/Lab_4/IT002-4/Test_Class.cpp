#include <iostream>


using namespace std;



struct Don_Thuc
{
    float heso, bac;
};

class Da_Thuc
{
private:
    int n, k, p;
    int a[100];
    Don_Thuc f[100];
public:
    Da_Thuc(int n = 0)
    {
        for (int i = 0; i < n; i++)
        {
            f[i].heso = 0;
            f[i].bac = 0;
        }
    }
    void setFx(float h, float b, int i)
    {
        f[i].heso = h;
        f[i].bac = b;
    }
    Don_Thuc getFx(Don_Thuc f[100], int i)
    {
        return f[i];
    }
    
    void quick_sort_bac(Don_Thuc p[], int left, int right);

    void TongFx(Da_Thuc P, int n, int m);
    void Rut_Gon(Don_Thuc f[100], int &n);
   
   
    friend istream &input(istream &is, Da_Thuc &F, Don_Thuc f[], int &n)
    {
        cout << "* So luong don thuc = ";
        cin >> n;
        cout << "* F(x) = ";
        for (int i = 0; i < n; i++)
        {
            is >> f[i].heso >> f[i].bac;
            F.setFx(f[i].heso, f[i].bac, i);
        }
        F.quick_sort_bac(f, 0, n-1);
        F.Rut_Gon(f, n);
        return is;
    }
    friend ostream &output(ostream &os, Don_Thuc f[100], int &n)
    {
        
        if (f[0].heso >= 0)
        {
            os  << f[0].heso << "x^" << f[0].bac;
        }
        else if (f[0].heso < 0)
        {
            os  << " - " << abs(f[0].heso) << "x^" << f[0].bac;
        }
        for (int i = 1; i < n; i++)
        {
            if (f[i].heso < 0)
                os << " - " << abs(f[i].heso) << "x^" << f[i].bac;
            else if (f[i].heso >= 0)
                os << " + " << f[i].heso << "x^" << f[i].bac;
        }
        os << endl;
        return os;
    }
};
    

void swap(Don_Thuc &x, Don_Thuc &y)
{
    Don_Thuc temp;
    temp = x;
    x = y;
    y = temp;
}

void Da_Thuc::quick_sort_bac(Don_Thuc p[], int left, int right)
{
    int i, j;
    Don_Thuc x;
    x = p[(left+right)/2];
    i = left;
    j = right;
    while (i < j)
    {
        while (p[i].bac < x.bac)
            i++;
        while (p[j].bac > x.bac)
            j--;
        if (i <= j)
        {
            swap(p[i], p[j]);
            i++;
            j--;
        }
    }
    if (left < j)
        quick_sort_bac(p, left, j);
    if (i < right)
        quick_sort_bac(p, i, right);
}

void Da_Thuc::TongFx(Da_Thuc P, int n, int m) //noi 2 da thuc lai
{
    
    int k = n + m;
    Don_Thuc temp[100];
    for (int i = 0; i < m; i++)
    {
        P.f[i].bac = i;
    }
    for (int i = 0; i < m; i++)
        cout << P.f[i].bac << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << f[i].bac << " ";
    cout << endl;
}

int main()
{
    Da_Thuc A, B;
    A.TongFx(B, 4, 5);
}
