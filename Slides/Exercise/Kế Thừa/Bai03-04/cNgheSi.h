#ifndef CNGHESI_H
#define CNGHESI_H
#include "cNguoi.h"

class cNgheSi : public cNguoi{
private:
    string Theloai;
public:
    cNgheSi();
    ~cNgheSi();
    void Nhap();
    void Xuat();
};

#endif