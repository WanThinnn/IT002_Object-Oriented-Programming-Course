#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <string.h>
#include <iostream>

using namespace std;

class cNhanVien{
protected:
    string sHoTen;
    string sNgaySinh;
    int iLuong;
public: 
    cNhanVien();
    ~cNhanVien();
    void Nhap();
    void Xuat();

};

#endif