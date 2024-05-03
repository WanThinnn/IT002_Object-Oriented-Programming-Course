//
//  main.cpp
//  IT002-CK
//
//  Created by Thinnn on 11/07/2023.
//

#include <iostream>
using namespace std;

class ConVat
{
protected:
    int n;
    int gd[5];
public:
    ConVat(){}
    ~ConVat(){}
    virtual void Nhap() = 0;
    void Xuat()
    {
        for (int i = 0; i < n; i++)
            cout << gd[i] << " ";
        cout << endl;
    }
    virtual bool KiemTra() = 0;
    virtual int Loai() = 0;
};

class Muoi : public ConVat
{
public:
    Muoi() {n = 4;}
    ~Muoi() {}
    void Nhap()
    {
        cout << "Nhap Muoi: ";
        for (int i = 0; i < n; i++)
            cin >> gd[i];
    }
    bool KiemTra()
    {
        if (gd[0] < 1 or gd[0] > 3)
            return false;
        else if (gd[1] < 4 or gd[1] > 10)
            return false;
        else if (gd[2] < 2 or gd[2] > 3)
            return false;
        else if (gd[3] < 5 or gd[3] > 8)
            return false;
        return true;
    }
    int Loai() {return 1;}
};
class Buom : public ConVat
{
public:
    Buom() {n = 4;}
    ~Buom() {}
    void Nhap()
    {
        cout << "Nhap Buom: ";

        for (int i = 0; i < n; i++)
            cin >> gd[i];
    }
    bool KiemTra()
    {
        if (gd[0] < 3 or gd[0] > 8)
            return false;
        else if (gd[1] < 15 or gd[1] > 16)
            return false;
        else if (gd[2] < 10 or gd[2] > 10)
            return false;
        else if (gd[3] < 2 or gd[3] > 3)
            return false;
        return true;
    }
    int Loai() {return 2;}

};

class Ech : public ConVat
{
public:
    Ech() {n = 5;}
    ~Ech() {}
    void Nhap()
    {
        cout << "Nhap Ech (tuan): ";

        for (int i = 0; i < n; i++)
            cin >> gd[i];
    }
    bool KiemTra()
    {
        if (gd[0] < 1 or gd[0] > 3)
            return false;
        else if (gd[1] < 4 or gd[1] > 4)
            return false;
        else if (gd[2] < 6 or gd[2] > 9)
            return false;
        else if (gd[3] < 1 or gd[3] > 4)
            return false;
        else if (gd[3] < 52*2 or gd[3] > 52*4)
            return false;
        return true;
    }
    int Loai() {return 3;}

};

class KhuRung
{
private:
    int n, pl;
    ConVat** ds;
public:
    KhuRung(){}
    ~KhuRung(){}
    void NhapDS()
    {
        cout << "Nhap n trong khoang [1; 20]: ";
        cin >> n;
        while (n < 1 or n > 20)
        {
            cout << "Nhap lai: ";
            cin >> n;
        }
        ds = new ConVat*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Muoi - 2. Buom - 3. Ech: ";
            cin >> pl;
            switch (pl)
            {
                case 1:
                    ds[i] = new Muoi();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new Buom();
                    ds[i]->Nhap();
                    break;
                case 3:
                    ds[i] = new Ech();
                    ds[i]->Nhap();
                    break;
                    
                default:
                    cout << "Nhap lai: ";
                    break;
            }
        }
    }
    void XuatDS()
    {
        for (int i = 0; i < n; i++)
        {
            if (ds[i]->KiemTra() == false)
                cout << i+1 << " ";
        }
        cout << endl;
    }
    bool DaDangSinhHoc()
    {
        int dmuoi = 0, dech = 0, dbuom = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (ds[i]->Loai() == 1)
                dmuoi++;
            else if (ds[i]->Loai() == 2)
                dbuom++;
            else if (ds[i]->Loai() == 3)
                dech++;
        }
        
        if (dmuoi >= 1 and dbuom >= 1 and dech >= 1)
            return true;
        return false;
    }
};






int main()
{
    KhuRung A;
    A.NhapDS();
    A.XuatDS();
    bool res = A.DaDangSinhHoc();
    if (res)
        cout << "Khu vuc nay da dang sinh hoc!" << endl;
    else
        cout << "Khu vuc nay KHONG da dang sinh hoc!" << endl;
}
