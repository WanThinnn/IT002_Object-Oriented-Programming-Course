//
//  QuanLyCaSi.cpp
//  IT002-OT
//
//  Created by Thinnn on 03/07/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class CaSi
{
protected:
    string ht;
    int snlv, sdbd, sbtd;
public:
    virtual void Nhap()
    {
        cout << "Ho ten: ";
        getline(cin, ht);
        cin.ignore();
        cout << "So nam: ";
        cin >> snlv;
        cout << "So dia: ";
        cin >> sdbd;
        cout << "So buoi trinh dien: ";
        cin >> sbtd;
    }
    virtual void Xuat()
    {
        cout << "Ho ten: " << ht << endl;
        cout << "So nam: " << snlv << endl;
        cout << "So dia: " << sdbd << endl;
        cout << "So buoi trinh dien: " << sbtd << endl;
    }
    virtual int Luong() = 0;
};

class ChuaNoiTieng : public CaSi
{
private:
public:
    void Nhap()
    {
        CaSi::Nhap();
    }
    int Luong()
    {
        return 3000000 + 5000000*snlv + 1000*sdbd + 200000*sbtd;
    }
    void Xuat()
    {
        CaSi::Xuat();
        cout << "Luong: " << Luong() << endl;
    }
};
class NoiTieng : public CaSi
{
private:
    int gameshow;
public:
    void Nhap()
    {
        CaSi::Nhap();
        cout << "So gameshow: ";
        cin >> gameshow;
    }
    int Luong()
    {
        return 5000000 + 5000000*snlv + 1200*sdbd + 500000*sbtd + 500000*gameshow;
    }
    void Xuat()
    {
        CaSi::Xuat();
        cout << "Luong: " << Luong() << endl;
    }
};

class QuanLy
{
private:
    int n, pl;
    CaSi** ds;
public:
    void NhapDS()
    {
        cout << "So luong ca si: ";
        cin >> n;
        ds = new CaSi*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Noi Tieng - 2. Chua Noi Tieng: ";
            cin >> pl;
            cin.ignore();
            switch (pl)
            {
                case 1:
                    ds[i] = new NoiTieng();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new ChuaNoiTieng();
                    ds[i]->Nhap();
                    break;
                    
                default:
                    break;
            }
        }
    }
    void XuatDS()
    {
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
            cout << endl;
        }
    }
    CaSi* MaxLuong()
    {
        CaSi* temp = NULL;
        int maxL = ds[0]->Luong();
        if (n == 1)
        {
            return temp = ds[0];
        }
        for (int i = 1; i < n; i++)
        {
            if (ds[i]->Luong() > maxL)
            {
                maxL = ds[i]->Luong();
                temp = ds[i];
            }
        }
        return temp;
    }
};


int main()
{
    QuanLy A;
    A.NhapDS();
    A.XuatDS();
    A.MaxLuong()->Xuat();
}
