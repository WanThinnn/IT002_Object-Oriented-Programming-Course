#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class CaSi
{
protected:
    string ht;
    int SoNam, SoDia, SoBuoi;
public:
    
    CaSi();
    ~CaSi();
    virtual void Nhap();
    virtual void Xuat();
    virtual int luong();
    string getTen();
    int getNam();
    int getBuoi();
};

void CaSi::Nhap()
{
    cout << "Ten: ";
    getline(cin, ht);
    cin.ignore();
    cout << "Nam, Dia, Buoi: ";
    cin >> SoNam >> SoDia >> SoBuoi;
}

class CaSiNT : public CaSi
{
private:
    int SoGameShow;
public:
    CaSiNT();
    ~CaSiNT();
    void Nhap();
    void Xuat();
    string getTen();
    int getGShow();
};


class CaSiCNT : public CaSi
{
public:
    CaSiCNT();
    ~CaSiCNT();
    void Nhap();
    void Xuat();
    string getTen();
    int getGShow();
};

class List
{
private:
    CaSi **ds;
    int *pl;
    int n;
public:
    void NhapDS();
    void XuatDS();
    CaSi* CheckLuong();
};


void List::NhapDS()
{
    cin >> n;
    ds = new CaSi*[n];
    pl = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "1. Ca Si NT - 2. Ca Si Chua Noi Tieng: ";
        cin >> pl[i];
        if (pl[i] == 1)
        {
            ds[i] = new (CaSiNT);
            ((CaSiNT*)ds[i])->Nhap();
        }
        else if (pl[i] == 2)
        {
            ds[i] = new (CaSiCNT);
            ((CaSiCNT*)ds[i])->Nhap();
        }
    }
}

CaSi* List::CheckLuong()
{
    int i;
    int j = -1;
    int Max = -1;
    for (i = 0; i < n; i++)
    {
        if (ds[i]->luong() > Max)
        {
            Max = ds[i]->luong();
            j = i;
        }
    }
    
    return ds[i];
}


int main()
{
    List L;
    L.NhapDS();
    L.XuatDS();
}
