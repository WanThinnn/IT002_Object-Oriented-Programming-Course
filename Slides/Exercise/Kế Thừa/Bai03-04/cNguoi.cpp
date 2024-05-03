#include "cNguoi.h"

cNguoi::cNguoi()
{

}

cNguoi::~cNguoi()
{

}

void cNguoi::Nhap()
{
    cin.ignore();
    cout << " Nhap Ho va ten : " << endl;
    getline(cin,Hoten);
    cout << " Nhap dia chi : " << endl;
    getline (cin,Diachi);
    cout << " Nhap tuoi : " << endl;
    cin >> Tuoi;
}

void cNguoi::Xuat()
{
    cout << " Ho va ten : " << Hoten << endl;
    cout << " Dia chi : "  << Diachi << endl;
    cout << " Tuoi : " << Tuoi << endl;
}
