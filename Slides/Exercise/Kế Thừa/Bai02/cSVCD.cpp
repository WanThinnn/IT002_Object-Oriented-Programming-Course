#include "cSVCD.h"

cSVCD::cSVCD()
{

}

cSVCD::~cSVCD()
{

}

void cSVCD::Nhap()
{
    cSinhVien::Nhap();
    cout <<" Nhap diem thi tot nghiep : " << endl;
    cin >>DiemthiTN;
}

void cSVCD::Xuat()
{
    cSinhVien::Xuat();
    cout << " Diem thi tot nghiep : " << DiemthiTN << endl;
}

bool cSVCD::xetTN()
{
    if (tongtinchi>=110&&DiemTB>=5&&DiemthiTN>=5)
        return true;
    return false;
}