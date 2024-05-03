#ifndef CSINHVIEN_H
#define CSINHVIEN_H
#include "cNguoi.h"

class cSinhVien : public cNguoi{
private :
    string MSSV;
    string Tentruong;
public:
    cSinhVien();
    ~cSinhVien();
    void Nhap();
    void Xuat();
};
#endif
