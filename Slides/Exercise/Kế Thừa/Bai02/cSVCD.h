#ifndef CSVCD_H
#define CSVCD_H
#include "cSinhVien.h"

class cSVCD : public cSinhVien{
private:
    float DiemthiTN;
public:
    cSVCD();
    ~cSVCD();
    void Nhap();
    void Xuat();
    bool xetTN();
};

#endif