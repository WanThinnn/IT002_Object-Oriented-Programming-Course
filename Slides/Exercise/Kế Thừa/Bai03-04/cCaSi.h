#ifndef CCASI_H
#define CCASI_H
#include "cNguoi.h"

class cCaSi : public cNguoi{
private:
    string Loainhac;
    string HinhThucHD;
public:
    cCaSi();
    ~cCaSi();
    void Nhap();
    void Xuat();
};

#endif