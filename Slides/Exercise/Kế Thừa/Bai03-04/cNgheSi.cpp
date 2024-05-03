#include "cNgheSi.h"

cNgheSi::cNgheSi()
{

}

cNgheSi::~cNgheSi()
{

}

void cNgheSi::Nhap()
{
    cNguoi::Nhap();
    cin.ignore();
    cout << " Nhap loai hinh nghe thuat : " << endl;
    getline(cin,Theloai);
}

void cNgheSi::Xuat()
{
    cNguoi::Xuat();
    cout << " La nghe si thuoc loai hinh nghe thuat : " << Theloai << endl;
}