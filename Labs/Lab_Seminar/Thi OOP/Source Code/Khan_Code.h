//
//  Khan_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Khan_Code_h
#define Khan_Code_h
KhanQuangCo::KhanQuangCo(){}
KhanQuangCo::~KhanQuangCo(){}

void KhanQuangCo::NhapPK()
{
    PhuKien::NhapPK();
    cout << "Chieu dai: ";
    cin >> chieu_dai;
}

void KhanQuangCo::XuatPK()
{
    PhuKien::XuatPK();
    cout << " " << chieu_dai << endl;
}

void KhanQuangCo::XuatFilePK(ofstream& fo)
{
    PhuKien::XuatFilePK(fo);
    fo << " " << chieu_dai << endl;
}

float KhanQuangCo::getDonGia()
{
    return dongia;
}

#endif /* Khan_Code_h */
