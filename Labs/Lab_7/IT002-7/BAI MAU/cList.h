#ifndef CLIST_H
#define CLIST_H
#include "cNhanVien.h"
#include "cNhanVienSX.h"
#include "cNhanVienVP.h"

class cList{
private:
    int n;
    int Loai[1000];
    cNhanVien *ds[1000];
public:
        cList();
        ~cList();
        void Nhap();
        void Xuat(); 
        int TongLuong();
        int Luongcaonhat();
        void XuatthongtinNVluongcaonhat();
        int Luongthapnhat();
        void XuatthongtinNVluongthapnhat();
};

#endif