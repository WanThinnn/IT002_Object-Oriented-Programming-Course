#ifndef CHOCSINH_H
#define CHOCSINH_H
#include "cNguoi.h"

class cHocSinh : public cNguoi{
private:
    int Lop;
    string TenTruong;
public:
    cHocSinh();
    ~cHocSinh();
    void Nhap();
    void Xuat();
};

#endif