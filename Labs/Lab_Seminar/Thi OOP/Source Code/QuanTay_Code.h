//
//  QuanTay_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanTay_Code_h
#define QuanTay_Code_h

QuanTay::QuanTay() {}
QuanTay::~QuanTay() {}

void QuanTay::NhapQuan()
{
    Quan::NhapQuan();
    cout << "Tieu chuan vai: ";
    getline(cin, loaiquan);
}

void QuanTay::XuatQuan()
{
    Quan::XuatQuan();
    cout << " " << loaiquan;
}

void QuanTay::XuatFileQuan(ofstream &fo)
{
    Quan::XuatFileQuan(fo);
    fo << " " << loaiquan;
}

float QuanTay::getDonGia()
{
    return dongia;
}
string QuanTay::LoaiQuan()
{
    return "Quan tay";
}

string QuanTay::SizeQuan()
{
    return size;
}
string QuanTay::GioiTinh()
{
    return gioitinh;
}

#endif /* QuanTay_Code_h */
