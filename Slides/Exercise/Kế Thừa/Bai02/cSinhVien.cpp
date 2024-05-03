#include "cSinhVien.h"

cSinhVien::cSinhVien()
{

}

cSinhVien::~cSinhVien()
{

}

void cSinhVien::Nhap()
{
    cin.ignore();
    cout << " Nhap MSSV : " << endl;
    getline(cin,MSSV);
    cout << " Nhap ho va ten : " << endl;
    getline(cin,Hoten);
    cout << " Nhap dia chi : " << endl;
    getline(cin,Diachi);
    cout << " Nhap tong so tin chi : " << endl;
    cin >> tongtinchi;
    cout << " Nhap diem trung binh : " << endl;
    cin >> DiemTB;
}

void cSinhVien::Xuat()
{
    cout << " MSSV : " << MSSV << endl;
    cout << " Ho va ten : " << Hoten << endl;
    cout << " Dia chi : " << Diachi << endl;
    cout << " Tong so tin chi : " << tongtinchi << endl;
    cout << " Diem trung binh : " << DiemTB << endl;
}

float cSinhVien::getDiemTB()
{
    return DiemTB;
}

bool cSinhVien::xetTN()
{
    return false;
}

