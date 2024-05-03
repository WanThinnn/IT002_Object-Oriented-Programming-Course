#include "cCongNhan.h"

cCongNhan::cCongNhan()
{

}

cCongNhan::~cCongNhan()
{

}

void cCongNhan::Nhap()
{
    cNguoi::Nhap();
    cin.ignore();
    cout << " Nhap cong ti dang lam viec : " << endl;
    getline(cin,TenCT);
    cout << " Nhap luong : " << endl;
    cin >> Luong;
}

void cCongNhan::Xuat()
{
    cNguoi::Xuat();
    cout << " Cong ti : " << TenCT << endl;
    cout << " Luong : " << Luong << endl; 
}