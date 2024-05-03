#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP()
{

}

cNhanVienVP::~cNhanVienVP()
{

}

void cNhanVienVP::tinhLuong()
{
    iLuong=iSongay_lamviec*100000;
}

void cNhanVienVP::Nhap()
{
    cNhanVien::Nhap();
    cout << " Nhap so ngay di lam :" << endl;
    cin >> iSongay_lamviec;
    tinhLuong();
}

void cNhanVienVP::Xuat()
{
    cNhanVien::Xuat();
    cout << " Luong : " <<iLuong << endl;
}

int cNhanVienVP::getLuong()
{
    return iLuong;
}