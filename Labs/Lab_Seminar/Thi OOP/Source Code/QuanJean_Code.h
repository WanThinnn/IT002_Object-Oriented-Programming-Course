//
//  QuanJean_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanJean_Code_h
#define QuanJean_Code_h

QuanJean::QuanJean() {}
QuanJean::~QuanJean() {}

void QuanJean::NhapQuan() {Quan::NhapQuan();}
void QuanJean::XuatQuan() {Quan::XuatQuan();}

void QuanJean::XuatFileQuan(ofstream &fo)
{
    Quan::XuatFileQuan(fo);
}
string QuanJean::LoaiQuan()
{
    return "Quan jean";
}

string QuanJean::SizeQuan()
{
    return size;
}
string QuanJean::GioiTinh()
{
    return gioitinh;
}
#endif /* QuanJean_Code_h */
