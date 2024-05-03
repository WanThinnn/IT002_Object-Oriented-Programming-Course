//
//  QuanLyCaSi.cpp
//  IT002-OT
//
//  Created by Thinnn on 03/07/2023.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
struct Text
{
    string nd;
    int mc, mn;
};
class ThanhPhan
{
protected:
    int d,r,x,y;
public:
    virtual void Nhap()
    {
        cout << "D - R -X - Y: ";
        cin >> d >> r >> x >> y;
    }
    virtual void Xuat()
    {
//        cout << "Dai :" << d << endl;
//        cout << "Rong :" << r << endl;
//        cout << "X :" << x << endl;
//        cout << "Y :" << y << endl;
    }
    virtual string NoiDung() = 0;
    virtual int MauChu() = 0;
    virtual int MauNen() = 0;
};

class Label : public ThanhPhan
{
private:
    Text T;
public:
    void Nhap()
    {
//        ThanhPhan::Nhap();
//        cout << "Noi Dung: ";
//        getline(cin, T.nd);
//        cin.ignore();
        cout << "Mau Chu: ";
        cin >> T.mc;
        cout << "Mau Nen: ";
        cin >> T.mn;
    }
    void Xuat()
    {
        ThanhPhan::Xuat();
        cout << "Noi Dung: " << T.nd << endl;
        cout << "Mau Chu:  "<< T.mc << endl;
        cout << "Mau Nen:  "<< T.mn << endl;
    }
    string NoiDung(){return T.nd;}
    int MauChu(){return T.mc;}
    int MauNen(){return T.mn;}
};

class Button : public ThanhPhan
{
private:
    Text T;
    string ha;
public:
    void Nhap()
    {
//        ThanhPhan::Nhap();
        cout << "1. Noi Dung - 2. Hinh Anh - 3. Ca Hai: ";
        int t;
        cin >> t;
        if (t == 1)
        {
//            cout << "Noi Dung: ";
//            getline(cin, T.nd);
//            cin.ignore();
            cout << "Mau Chu: ";
            cin >> T.mc;
            cout << "Mau Nen: ";
            cin >> T.mn;
        }
        else if (t == 2)
        {
            cout << "Hinh Anh: ";
            getline(cin, ha);
            T.mc = T.mn = 0;
        }
        else if (t == 3)
        {
            cout << "Noi Dung: ";
            getline(cin, T.nd);
            cin.ignore();
            cout << "Mau Chu: ";
            cin >> T.mc;
            cout << "Mau Nen: ";
            cin >> T.mn;
            cout << "Hinh Anh: ";
            getline(cin, ha);
        }
    }
    void Xuat()
    {
        ThanhPhan::Xuat();
        cout << "Hinh Anh: " << ha << endl;
        cout << "Noi Dung: " << T.nd << endl;
        cout << "Mau Chu:  "<< T.mc << endl;
        cout << "Mau Nen:  "<< T.mn << endl;
    }
    string NoiDung(){return T.nd;}
    int MauChu(){return T.mc;}
    int MauNen(){return T.mn;}
    string HinhAnh(){return ha;}
};


void swap(ThanhPhan*& x, ThanhPhan*& y)
{
    ThanhPhan* temp = x;
    x = y;
    y = temp;
}

void sort(ThanhPhan** A, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; i < n; i++)
            {
                if (A[i]->MauNen() > A[j]->MauNen())
                    swap(A[i], A[j]);
            }
}

class HeThong
{
private:
    int n, pl;
    ThanhPhan** ds;
public:
    void NhapDS()
    {
        cout << "So luong Thanh Phan: ";
        cin >> n;
        ds = new ThanhPhan*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Label - 2. Button: ";
            cin >> pl;
            cin.ignore();
            switch (pl)
            {
                case 1:
                    ds[i] = new Label();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new Button();
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
    void KT_1()
    {
        int nen = ds[0]->MauNen();
        int chu = ds[0]->MauChu();
        if (abs(nen - chu) == 6)
            cout << "Thanh phan dau tien CO phu hop voi phoi mau bo tuc truc tiep!" << endl;
        else
            cout << "Thanh phan dau tien KHONG phu hop voi phoi mau bo tuc truc tiep!" << endl;
    }
    void KT_2()
    {
        bool check = false;
        //DON SAC
        int d = 0;
        for (int i = 1; i < n; i++)
        {
            if (ds[i]->MauNen() == ds[0]->MauNen())
                d++;
            if (d == n - 1)
            {
                cout << "PHOI MAU DON SAC!" << endl;
                check = true;
                return;
            }
        }
        
        
        //BO TUC
        int k = 0, m = 0;
        if (n >= 2 and n%2 == 0)
            m = n;
        else if (n >= 2 and n%2 != 0)
            m = n - n%2;
        for (int i = 0; i < m - 1; i = i + 2)
        {
            if ((abs(ds[i]->MauNen() - ds[i+1]->MauNen())) == 6)
                k++;
            if (k == n/2)
            {
                cout << "PHOI MAU BO TUC!" << endl;
                check = true;
                return;
            }
        }
        
        //TUONG DONG
        int color = ds[0]->MauNen();
        int i;
        if (color > 1 && color < 12)
        {
               for (i = 1; i < n; i++)
               {
                   int mau = ds[i]->MauNen();
                   if ((mau != color) && (mau != color - 1) && (mau != color + 1))
                       break;
               }
        
            if (i == n)
            {
                check = true;
                cout << "Phoi mau tuong dong";
            }
        }
        else if (color == 1)
        {
            for (i = 1; i < n; i++)
            {
                int mau = ds[i]->MauNen();
                if ((mau != 1) && (mau != 12) && (mau != 2))
                    break;
            }
            if (i == n)
            {
                check = true;
                cout << "Phoi mau tuong dong" << endl;
            }
        }
        else if (color == 12)
        {
            for (i = 1; i < n; i++)
            {
                int mau = ds[i]->MauNen();
                if ((mau != 12) && (mau != 11) && (mau != 1))
                    break;
                if (i == n)
                {
                    check = true;
                    cout << "Phoi mau tuong dong" << endl;
                }
            }
        }
                      
        if (check == false)
            cout << "Khong co quy tac phoi mau nao!" << endl;
        
    }
};


int main()
{
    HeThong T;
    T.NhapDS();
    T.KT_1();
    T.KT_2();
}
