#include <iostream>

using namespace std;

string DaThuc[] = {"F(x)", "P(x)"};
int ind = 0;

using namespace std;

class Don_Thuc
{
    private:
        int heso;
        int bac;
    public:
        friend istream &operator >>(istream &is, Don_Thuc &f)
        {
            is >> f.heso >> f.bac;
            return is;
        }
        friend ostream &operator <<(ostream &os, Don_Thuc &f)
        {
            if (f.heso < 0)
                os << " - " << abs(f.heso) << "x^" << f.bac;
            else if (f.heso >= 0)
                os << " + " << f.heso << "x^" << f.bac;
            return os;
        }
        int operator + (Don_Thuc P) const;
        float getHS() const {return heso;}
        float getB() const {return bac;}
        friend class Da_Thuc;
//        friend class Da_Thuc_Rut_Gon;
    
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
    
    void quick_sort_bac(Don_Thuc a[], int left, int right);
    void TongFx(Da_Thuc Q, Don_Thuc p[100], int n, int m);
    void HieuFx(Da_Thuc Q, Don_Thuc p[100], int n, int m);
    void TichFx(Da_Thuc Q, Don_Thuc p[100], int n, int m);
    void Rut_Gon(Da_Thuc Q, Don_Thuc f[100], int &n);
    friend istream &input(istream &is, Da_Thuc &F, Don_Thuc f[], int &n)
    {
        cout << "* So luong don thuc = ";
        cin >> n;
        cout << "* " << DaThuc[ind] << " = ";
        for (int i = 0; i < n; i++)
        {
            is >> f[i];
            F.setFx(f[i].getHS(), f[i].getB(), i);
        }
        F.quick_sort_bac(f, 0, n-1);
        F.Rut_Gon(F, f, n);
        ind++;
        return is;
    }
    friend ostream &output(ostream &os, Da_Thuc &F, Don_Thuc f[100], int &n)
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
            os << f[i];
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

void Da_Thuc::quick_sort_bac(Don_Thuc P[], int left, int right)
{
    int i, j;
    Don_Thuc x;
    x = P[(left+right)/2];
    i = left;
    j = right;
    while (i < j)
    {
        while (P[i].getB() < x.getB())
            i++;
        while (P[j].getB() > x.getB())
            j--;
        if (i <= j)
        {
            swap(P[i], P[j]);
            i++;
            j--;
        }
    }
    if (left < j)
        quick_sort_bac(P, left, j);
    if (i < right)
        quick_sort_bac(P, i, right);
}

//int Don_Thuc::operator + (Don_Thuc P) const {
//    return (heso + P.heso);
//}


void Da_Thuc::TongFx(Da_Thuc Q, Don_Thuc p[100], int n, int m) //noi 2 da thuc lai
{
    int k = n + m;
    Don_Thuc temp[100];
    for (int i = 0; i < n; i++)
    {
        temp[i].bac = f[i].bac;
        temp[i].heso = f[i].heso;
    }
    for (int i = n, j = 0; i < k; i++)
    {
        temp[i].bac = p[j].bac;
        temp[i].heso = p[j].heso;
        j++;
    }
    quick_sort_bac(temp, 0, k-1);
    Rut_Gon(Q, temp, k);
    cout << "* Tong Da Thuc F(x) + P(x) = " ;
    output(cout, Q, temp, k);
}

void Da_Thuc::HieuFx(Da_Thuc Q, Don_Thuc p[100], int n, int m)
{
    int k = n + m;
    Don_Thuc temp[100];
    for (int i = 0; i < m; i++)
    {
        temp[i].bac = p[i].bac;
        temp[i].heso = -1*p[i].heso;
    }
   
    for (int i = n, j = 0; i < k; i++)
    {
        temp[i].bac = f[j].bac;
        temp[i].heso = f[j].heso;
        j++;
    }
    quick_sort_bac(temp, 0, k-1);
    Rut_Gon(Q, temp, k);
    cout << "* Hieu Da Thuc F(x) - P(x) = ";
    output(cout, Q, temp, k);
}

void Da_Thuc::TichFx(Da_Thuc Q, Don_Thuc p[100], int n, int m)
{
    Don_Thuc tich[100];
    int k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            tich[k].heso = f[i].heso * p[j].heso;
            tich[k].bac = f[i].bac + p[j].bac;
            k++;
        }
    quick_sort_bac(tich, 0, k-1);
    Rut_Gon(Q, tich, k);
    cout << "* Tich Da Thuc F(x) * P(x) = ";
    output(cout, Q, tich, k);
}

void Da_Thuc::Rut_Gon(Da_Thuc Q, Don_Thuc f[100], int &n)
{
    k = 0;
    int N = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] != a[i+1])
        {
            k++;
        }
    }
    if (k%2 == 0)
        N = k/2;
    else
        N = k/2 + 1;
    for (int t = 0; t < N; t++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (f[i].bac == f[i+1].bac)
            {
                f[i].heso = f[i].heso + f[i+1].heso;
                
                
                {
                    for (int j = i+1; j < n-1; j++)
                    {
                        f[j].heso = f[j+1].heso;
                        f[j].bac = f[j+1].bac;
                    }
                    n--;
                }
            }
        }
    }
}


int main()
{
    int n, m;
    Da_Thuc F, P; Don_Thuc f[100], p[100];
    input(cin, F, f, n);
    input(cin, P, p, m);
    cout << "* Da Thuc F(x) = ";
    output(cout, F, f, n);
    cout << "* Da Thuc P(x) = ";
    output(cout, P, p, m);
    F.TongFx(P, p, n, m);
    F.HieuFx(P, p, n, m);
    F.TichFx(P, p, n, m);
}
