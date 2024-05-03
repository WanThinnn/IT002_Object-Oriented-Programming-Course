#ifndef CCONGNHAN_H
#define CCONGNHAN_H
#include "cNguoi.h"

class cCongNhan : public cNguoi{
private:
    string TenCT;
    int Luong;
public:
    cCongNhan();
    ~cCongNhan();
    void Nhap();
    void Xuat();
};

#endif