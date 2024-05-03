//
//  Vong_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Vong_Code_h
#define Vong_Code_h

VongTay::VongTay(){}
VongTay::~VongTay(){}

void VongTay::NhapPK()
{
    PhuKien::NhapPK();
    cout << "Ban kinh: ";
    cin >> ban_kinh;
}

void VongTay::XuatPK()
{
    PhuKien::XuatPK();
    cout << " " << ban_kinh << endl;
}

void VongTay::XuatFilePK(ofstream& fo)
{
    PhuKien::XuatFilePK(fo);
    fo << " " << ban_kinh << endl;
}


float VongTay::getDonGia()
{
    return dongia;
}

#endif /* Vong_Code_h */
