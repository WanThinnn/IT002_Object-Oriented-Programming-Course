#include "cCaSi.h"

cCaSi::cCaSi()
{

}

cCaSi::~cCaSi()
{

}

void cCaSi::Nhap()
{
    cNguoi::Nhap();
    cin.ignore();
    cout << " Nhap the loai nhac dang hoat dong : " << endl;
    getline(cin,Loainhac);
    cout << " Hinh thuc dang hoat dong ( TU DO hay THEO HOP DONG ) : " <<endl;
    getline(cin,HinhThucHD);
}

void cCaSi::Xuat()
{
    cNguoi::Xuat();
    cout << " Loai nhac hoat dong : " << Loainhac << endl;
    cout << " Hinh thuc hoat dong : " << HinhThucHD << endl;
}