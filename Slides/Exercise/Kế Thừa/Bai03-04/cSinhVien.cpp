#include "cSinhVien.h"

cSinhVien::cSinhVien()
{

}

cSinhVien::~cSinhVien()
{

}

void cSinhVien::Nhap()
{
    cNguoi::Nhap();
    cin.ignore();
    cout << " Nhap MSSV : " << endl;
    getline(cin,MSSV);
    cout << " Nhap ten truong dang hoc : " << endl;
    getline(cin,Tentruong);
}

void cSinhVien::Xuat()
{
    cNguoi::Xuat();
    cout << " MSSV : " << MSSV << endl;
    cout << " Truong dang hoc : " << Tentruong << endl;
}
