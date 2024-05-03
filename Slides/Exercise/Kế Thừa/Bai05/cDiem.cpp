#include "cDiem.h"

cDiem::cDiem()
{

}

cDiem::cDiem(float x,float y)
{
    this->x=x;
    this->y=y;
}

cDiem::~cDiem()
{

}

float cDiem::getX()
{
    return x;
}

float cDiem::getY()
{
    return y;
}

void cDiem::Nhap()
{
    cout << " Nhap x : " << endl;
    cin >> x;
    cout << " Nhap y : " << endl;
    cin >> y;
}

void cDiem::Xuat()
{
    cout << " x : " << x << endl;
    cout << " y : " << y << endl; 
}