#ifndef NHANVIENSX_H
#define NHANVIENSX_H
#include "cNhanVien.h"
#include <iostream>

using namespace std;

class cNhanVienSX:public cNhanVien{
private:
    int iLuong;
    int iLuongcanban;
    int iSosanpham;
public:
    cNhanVienSX();
    ~cNhanVienSX();
    void tinhLuong();
    void Nhap();
    void Xuat();
    int getLuong();
};

#endif