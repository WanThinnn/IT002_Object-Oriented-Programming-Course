#include <iostream>

NV_VANPHONG::NV_VANPHONG() {}

NV_VANPHONG::~NV_VANPHONG() {}

void NV_VANPHONG::Nhap()
{
    NHANVIEN::Nhap();
    cout <<"- Nhap So Ngay Lam Viec: ";
    cin >> songaylamviec;
}


int NV_VANPHONG::tinhLuong()
{
    luong = songaylamviec*100000;
    return luong;
}

void NV_VANPHONG::Xuat()
{
    NHANVIEN::Xuat();
    cout << "- So Ngay Lam Viec: " << songaylamviec << endl;
    cout << "- Luong: " << tinhLuong() << endl;
}

int NV_VANPHONG::getLuong()
{
    return luong;
}
