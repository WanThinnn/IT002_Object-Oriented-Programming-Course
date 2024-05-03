#include "cNhanVien.h"

cNhanVien::cNhanVien()
{

}

cNhanVien::~cNhanVien()
{

}

void cNhanVien::Nhap()
{
    cin.ignore();
    cout <<" Nhap Ho va Ten :" << endl;
    getline(cin,sHoTen);
    cout << " Nhap Ngay sinh :" << endl;
    getline(cin,sNgaySinh);
    iLuong=0;
}

void cNhanVien::Xuat()
{
    cout << " Ho va ten : " << sHoTen << endl;
    cout << " Ngay sinh : " <<sNgaySinh << endl;
}