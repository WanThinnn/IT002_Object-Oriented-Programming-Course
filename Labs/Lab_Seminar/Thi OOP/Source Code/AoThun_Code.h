//
//  AoThun_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef AoThun_Code_h
#define AoThun_Code_h
AoThun::AoThun() {}
AoThun::~AoThun() {}

void AoThun::NhapAo()
{
    Ao::NhapAo();
}

void AoThun::XuatAo()
{
    Ao::XuatAo();
}
void AoThun::XuatFileAo(ofstream& fo)
{
    Ao::XuatFileAo(fo);
}
float AoThun::getDonGia()
{
    return dongia;
}
string AoThun::LoaiAo()
{
    return "Ao thun";
}
string AoThun::SizeAo()
{
    return size;
}
string AoThun::GioiTinh()
{
    return gioitinh;
}

#endif /* AoThun_Code_h */
