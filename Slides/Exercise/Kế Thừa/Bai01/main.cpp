#include "cList.h"

int main()
{
    cList List;
    List.Nhap();
    List.Xuat();
    cout << " Tong luong phai tra cho tat ca nhan vien : " << List.TongLuong() << endl; 
    List.XuatthongtinNVluongcaonhat();
    List.XuatthongtinNVluongthapnhat();
    return 0;
}