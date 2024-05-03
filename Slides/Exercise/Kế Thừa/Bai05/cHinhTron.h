#ifndef CHINHTRON_H
#define CHINHTRON_H
#include "cEllipse.h"

class cHinhTron : public cEllipse{
private:
    float R;
    cDiem Tam;
public:
    cHinhTron();
    ~cHinhTron();
    void Nhap();
    void Xuat();
};

#endif