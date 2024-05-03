#ifndef CLIST_H
#define CLIST_H
#include "cSinhVien.h"
#include "cSVCD.h"
#include "cSVDH.h"

class cList{
private:
    int n;
    int Loai[1000];
    cSinhVien *ds[1000];
public:
    cList();
    ~cList();
    void Nhap();
    void Xuat();
    void duDKTN();
    void khongduDKTN();
    int DiemTBDHcaonhat();
    void XuatthongtinSVDHcaonhat();
    int DiemTBCDcaonhat();
    void XuatthongtinSVCDcaonhat();
};

#endif