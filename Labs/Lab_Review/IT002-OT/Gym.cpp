//
//  Gym.cpp
//  IT002-OT
//
//  Created by Thinnn on 05/07/2023.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Goi
{
protected:
    string lophoc;
    int phi, cplh, dvxh, pt;
public:
    virtual int PhiCB() = 0;
    virtual int CPLH() = 0;
    virtual int xonghoi() = 0;
    virtual int PT() = 0;
    virtual int Loai() = 0;
    virtual void Xuat()
    {
        cout << "Lop: " << lophoc << endl;
        cout << phi << " " << cplh << " " << dvxh << " " << pt << endl;
    }
    virtual void setLopHoc(string t) {lophoc = t;}
};

class CoBan : public Goi
{
public:
    CoBan()
    {
        phi = 500;
        cplh = 100;
        dvxh  = -1;
        pt = 100;
    }
    int PhiCB()
    {
        return phi;
    }
    int Loai() {return 2;}
    int CPLH() {return cplh;}
    int xonghoi() {return dvxh;}
    int PT() {return pt;}
    void Xuat()
    {
        cout << "Goi: Co Ban" << endl;
        Goi::Xuat();
     }
};

class NangCao : public Goi
{
public:
    NangCao()
    {
        phi = 1000;
        cplh = 0;
        dvxh  = 0;
        pt = 0;
    }
    int PhiCB()
    {
        return phi;
    }
    int CPLH() {return cplh;}
    int xonghoi() {return dvxh;}
    int PT() {return pt;}
    void Xuat()
    {
        cout << "Goi: Nang Cao" << endl;
        Goi::Xuat();
     }
    int Loai() {return 1;}

};

class KhongThanhVien : public Goi
{
public:
    KhongThanhVien()
    {
        phi = 200;
        cplh = -1;
        dvxh  = -1;
        pt = 200;
    }
    int PhiCB()
    {
        return phi;
    }
    int CPLH() {return cplh;}
    int xonghoi() {return dvxh;}
    int PT() {return pt;}
    void Xuat()
    {
        cout << "Goi: KTV" << endl;
        Goi::Xuat();
     }
    int Loai() {return 3;}

};

class KhachHang
{
private:
    Goi* ds[1];
    string CCCD, ht, lophoc;
    int chitieuhangthang;
    int tdk;
public:
    void NhapTT()
    {
        cin.ignore();
        cout << "CCCD: ";
        getline(cin, CCCD);
        cout << "Ho ten: ";
        getline(cin, ht);
        cout << "Dang ky: ";
        cin.ignore();
        cin >> tdk;
        cout << "Chon goi dich vu: " << endl;
        cout << "1. Nang Cao - 2. Co Ban - Khong Thanh Vien: ";
        int temp;
        cin >> temp;
        if (temp == 1)
            ds[0] = new NangCao();
        else if (temp == 2)
            ds[0] = new CoBan();
        else if (temp == 3)
            ds[0] = new KhongThanhVien();
        cin.ignore();
        cout << "Chon lop hoc (yoga, muabung, ....): (khong chon vui long nhap 'khong'): ";
        string t;
        getline(cin, t);
        ds[0]->setLopHoc(t);
        cout << "Chi tieu hang thang: ";
        cin >> chitieuhangthang;
    }
    int TienPhaiTra()
    {
        return ds[0]->PhiCB()*tdk;
    }
    void XuatTT()
    {
        cout << "CCCD: " << CCCD << endl;
        cout << "Ho ten: " << ht << endl;
        cout << "Chi tieu hang thang: " << chitieuhangthang << endl;
        ds[0]->Xuat();
        cout << "Dang ky: " << tdk << " thang" << endl;
        cout << "Tien phai tra: " << TienPhaiTra() << endl;
        cout << endl;
        
    }
    int chitieu() {return chitieuhangthang;}
};

class TrungTam
{
private:
    int n;
    KhachHang* A;
public:
    void NhapDS()
    {
        cout << "So luong khach hang: ";
        cin >> n;
        A = new KhachHang[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Khach hang thu " << i+1 << " : " <<endl;
            A[i].NhapTT();
            cout << endl;
        }
    }
    void XuatDS()
    {
        cout << "So luong khach hang: " << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Khach hang thu " << i+1 << " : " <<endl;
            A[i].XuatTT();
            cout << endl;
        }
    }
    
    vector <KhachHang> MaxKH()
    {
        vector <KhachHang> res;
        int max = A[0].chitieu();
        for (int i = 1; i < n; i++)
        {
            if (A[i].chitieu() > max)
                max = A[i].chitieu();
        }
        for (int i = 1; i < n; i++)
            if (A[i].chitieu() == max)
                res.push_back(A[i]);
        return res;
    }
};



int main()
{
    TrungTam ABC;
    ABC.NhapDS();
    ABC.XuatDS();
    vector <KhachHang> res = ABC.MaxKH();
    for (auto x : res)
        x.XuatTT();
}
