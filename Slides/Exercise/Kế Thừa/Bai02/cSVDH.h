#ifndef CSVDH_H
#define CSVDH_H
#include "cSinhVien.h"

class cSVDH : public cSinhVien{
private:
    string TenLV;
    float DiemLV;
public:
    cSVDH();
    ~cSVDH();
    void Nhap();
    void Xuat();
    bool xetTN();
};

#endif
