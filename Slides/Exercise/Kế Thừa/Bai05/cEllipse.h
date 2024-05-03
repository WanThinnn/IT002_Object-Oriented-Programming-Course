#ifndef CELLIPSE_H
#define CELLIPSE_H
#include <iostream>
#include "cDiem.h"
#include <math.h>

using namespace std;

class cEllipse{
protected:
    static float Pi;
    cDiem TieuDiem1,TieuDiem2;
    float Tieucu;
    float Bantruclon;
    float Bantrucnho;
public:
    cEllipse();
    ~cEllipse();
    void Nhap();
    void Xuat();
    float dientich();
};

#endif