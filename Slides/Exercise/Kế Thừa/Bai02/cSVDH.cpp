#include "cSVDH.h"

cSVDH::cSVDH()
{

}

cSVDH::~cSVDH()
{

}

void cSVDH::Nhap()
{
    cSinhVien::Nhap();
    cin.ignore();
    cout << " Nhap ten luan van : " << endl;
    getline(cin,TenLV);
    cout << " Nhap diem luan van : " << endl;
    cin >> DiemLV;
}

void cSVDH::Xuat()
{
    cSinhVien::Xuat();
    cout << " Ten Luan van : " << TenLV << endl;
    cout << " Diem luan van : " << DiemLV << endl;
}

bool cSVDH::xetTN()
{
    if (tongtinchi>=145&&DiemTB>=5&&DiemLV>=5)
        return true;
    return false;
}