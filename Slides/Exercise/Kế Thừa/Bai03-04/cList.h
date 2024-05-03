#ifndef CLIST_H
#define CLIST_H
#include "cNguoi.h"

class cList{
private:
    int n;
    int Loai[1000];
    cNguoi *ds[1000];
public:
    cList();
    ~cList();
    void Nhap();
    void Xuat();
};

#endif