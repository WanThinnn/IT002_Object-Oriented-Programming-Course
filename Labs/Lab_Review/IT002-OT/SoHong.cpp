//
//  SoHong.cpp
//  IT002-OT
//
//  Created by Thinnn on 03/07/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Nguoi
{
private:
    string ht, dc, cccd;
    int ns;
public:
    void NhapNguoi()
    {
        cout << "Ho Ten: ";
        getline(cin, ht);
//        cout << "Dia Chi Thuong Tru: ";
//        getline(cin, dc);
//        cout << "CCCD: ";
//        getline(cin, cccd);
//        cout << "Nam Sinh: ";
//        cin.ignore();
        cin >> ns;
        cin.ignore();

    }
    void XuatNguoi()
    {
        cout << "Ho Ten: " << ht << endl;
//        cout << "Dia Chi Thuong Tru: " << dc << endl;
//        cout << "CCCD: " << cccd << endl;
//        cout << "Nam Sinh: " << ns << endl;
    }
};




class SoHong
{
protected:
    int n;
    Nguoi* A;
    string id, idtd, bando, diachi, ngaycap;
    int dongia;
    float dt;
public:
    virtual void Nhap()
    {
        cout << "So Nguoi Dung Ten: ";
        cin >> n;
        cin.ignore();
        A = new Nguoi[n];
        for (int i = 0; i < n; i++)
            A[i].NhapNguoi();
        cout << "ID So: ";
        getline(cin, id);
//        cout << "ID Dat: ";
//        getline(cin, idtd);
//        cout << "So Ban Do: ";
//        getline(cin, bando);
//        cout << "Dia Chi: ";
//        getline(cin, diachi);
//        cout << "Ngay Cap: ";
//        getline(cin, ngaycap);
//        cin.ignore();
//        cout << "Don gia: ";
//        cin >> dongia;
//        cout << "Dien Tich: ";
//        cin>>dt;
//

    }
    virtual void Xuat()
    {
        cout << "So Nguoi Dung Ten: " << n << endl;
        for (int i = 0; i < n; i++)
            A[i].XuatNguoi();
        cout << "ID So: " << id << endl;
//        cout << "ID Dat: " << idtd << endl;
//        cout << "So Ban Do: " << bando << endl;
//        cout << "Dia Chi: " << diachi << endl;
//        cout << "Ngay Cap: " << ngaycap << endl;
//        cout << "Don gia: " << dongia << endl;
        
    }
    virtual int Thue() {
        return dongia*dt;
    }
    virtual int LoaiDat() = 0;
};

class NongNghiep : public SoHong
{
private:
    int hsd;
public:
    void Nhap()
    {
        SoHong::Nhap();
        cout << "HSD: ";
        cin >> hsd;
    }
    int Thue()
    {
        return SoHong::Thue();
    }
    void Xuat()
    {
        SoHong::Xuat();
        cout << "HSD: " << hsd << endl;
        cout << "Thue: " << Thue() << endl;
    }
    int HSD()
    {
        return hsd;
    }
    int LoaiDat() {return 1;}
};

class DatO : public SoHong
{
public:
    void Nhap()
    {
        SoHong::Nhap();
    }
    int Thue()
    {
        return SoHong::Thue();
    }
    void Xuat()
    {
        SoHong::Xuat();
        cout << "Thue: " << Thue() << endl;
    }
    int LoaiDat() {return 2;}


};

class NhaNuoc
{
private:
    int n, pl;
    SoHong** ds;
public:
    void NhapDS()
    {
        cout << "So luong So Hong: ";
        cin >> n;
        ds = new SoHong*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Nong Nghiep - 2. Dat O: ";
            cin >> pl;
            cin.ignore();
            switch (pl)
            {
                case 1:
                    ds[i] = new NongNghiep();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new DatO();
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
//    SoHong* MaxThue()
//    {
//        SoHong* temp = NULL;
//        int maxT = ds[0]->Thue();
//        if (n == 1)
//        {
//            return temp = ds[0];
//        }
//        for (int i = 1; i < n; i++)
//        {
//            if (ds[i]->Thue() > maxT)
//            {
//                maxT = ds[i]->Thue();
//                temp = ds[i];
//            }
//        }
//        return temp;
//    }
//    vector <SoHong*> HSD()
//    {
//        vector <SoHong*> temp;
//        for (int i = 0; i < n; i++)
//        {
//            if (ds[i]->LoaiDat() == 1)
//                if (((NongNghiep*)ds[i])->HSD() < 2023)
//                temp.push_back(ds[i]);
//        }
//        return temp;
//    }
};

int main()
{
    NhaNuoc VN;
    VN.NhapDS();
    VN.XuatDS();
//    cout << "THUE CAO NHAT\n";
//    VN.MaxThue()->Xuat();
//    vector <SoHong*> res = VN.HSD();
//    cout << "HET HAN SU DUNG\n";
//    for (auto i : res)
//    {
//        i->Xuat();
//        cout << endl;
//    }
}
