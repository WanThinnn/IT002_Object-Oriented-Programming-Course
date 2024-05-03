#include "cHocSinh.h"

cHocSinh::cHocSinh()
{

}

cHocSinh::~cHocSinh()
{

}

void cHocSinh::Nhap()
{
    cNguoi::Nhap();
    cin.ignore();
    cout << " Nhap lop dang hoc : " << endl;
    cin >> Lop;
    cin.ignore();
    cout << " Nhap truong dang hoc : " << endl;
    getline(cin,TenTruong);
}

void cHocSinh::Xuat()
{
    cNguoi::Xuat();
    cout << " Lop : " << Lop << endl;
    cout << " Truong dang hoc : " << TenTruong << endl;
}