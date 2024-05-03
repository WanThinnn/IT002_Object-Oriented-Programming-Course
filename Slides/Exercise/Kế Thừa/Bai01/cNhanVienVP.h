#ifndef NHANVIENVP_H
#define NHANVIENVP_H
#include "cNhanVien.h"

class cNhanVienVP:public cNhanVien{
private:
    int iLuong;
    int iSongay_lamviec;
public:
    cNhanVienVP();
    ~cNhanVienVP();
    void tinhLuong();
    void Nhap();
    void Xuat();
    int getLuong();
};

#endif