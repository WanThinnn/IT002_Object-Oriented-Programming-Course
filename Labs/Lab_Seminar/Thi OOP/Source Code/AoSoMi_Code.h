//
//  AoSoMi_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef AoSoMi_Code_h
#define AoSoMi_Code_h
AoSoMi::AoSoMi() {}
AoSoMi::~AoSoMi() {}

void AoSoMi::NhapAo()
{
    Ao::NhapAo();
    cout << "Tieu chuan vai: ";
    getline(cin, tieuchuanvai);
}

void AoSoMi::XuatAo()
{
    Ao::XuatAo();
    cout << " " << tieuchuanvai << endl;
}
void AoSoMi::XuatFileAo(ofstream& fo)
{
    Ao::XuatFileAo(fo);
    fo << " " << tieuchuanvai << endl;
}
float AoSoMi::getDonGia()
{
    return dongia;
}
string AoSoMi::LoaiAo()
{
    return "Ao so mi";
}
string AoSoMi::SizeAo()
{
    return size;
}
string AoSoMi::GioiTinh()
{
    return gioitinh;
}

#endif /* AoSoMi_Code_h */
