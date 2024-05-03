#ifndef CSINHVIEN_H
#define CSINHVIEN_H
#include <iostream>
#include <string>

using namespace std;

class cSinhVien{
protected:
    string MSSV;
    string Hoten;
    string Diachi;
    int tongtinchi;
    float DiemTB;
public:
    cSinhVien();
    ~cSinhVien();
    void Nhap();
    void Xuat();
    float getDiemTB();
    bool xetTN();
};

#endif