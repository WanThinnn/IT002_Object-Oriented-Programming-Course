#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX()
{

}

cNhanVienSX::~cNhanVienSX()
{

}

void cNhanVienSX::tinhLuong()
{
    iLuong=iLuongcanban+iSosanpham*5000;      
}

void cNhanVienSX::Nhap()
{
    cNhanVien::Nhap();
    cout << " Nhap luong co ban :" << endl;
    cin >>iLuongcanban;
    cout << " Nhap so san pham :" << endl;
    cin >> iSosanpham;
    tinhLuong();
}

void cNhanVienSX::Xuat()
{
    cNhanVien::Xuat();
    cout <<" Luong : " << iLuong << endl;
}

int cNhanVienSX::getLuong()
{
    return iLuong;
}