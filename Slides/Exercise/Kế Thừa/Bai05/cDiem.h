#ifndef CDIEM_H
#define CDIEM_H
#include <iostream>

using namespace std;

class cDiem{
private:
    float x,y;
public:
    cDiem();
    cDiem(float x, float y);
    ~cDiem();
    float getX();
    float getY();
    void Nhap();
    void Xuat();
};

#endif