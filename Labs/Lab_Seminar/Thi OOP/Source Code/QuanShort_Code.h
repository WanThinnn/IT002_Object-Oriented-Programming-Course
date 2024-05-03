//
//  QuanShort_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanShort_Code_h
#define QuanShort_Code_h
QuanShort::QuanShort() {}
QuanShort::~QuanShort() {}
void QuanShort::NhapQuan()
{
    Quan::NhapQuan();
}

void QuanShort::XuatQuan()
{
    Quan::XuatQuan();
}
void QuanShort::XuatFileQuan(ofstream& fo)
{
    Quan::XuatFileQuan(fo);
}

float QuanShort::getDonGia()
{
    return dongia;
}
string QuanShort::LoaiQuan()
{
    return "Quan short";
}

string QuanShort::SizeQuan()
{
    return size;
}

string QuanShort::GioiTinh()
{
    return gioitinh;
}

#endif /* QuanShort_Code_h */
