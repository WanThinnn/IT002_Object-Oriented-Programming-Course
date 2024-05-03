//
//  PhuKien_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef PhuKien_Code_h
#define PhuKien_Code_h
PhuKien::PhuKien(){}
PhuKien::~PhuKien(){}

void PhuKien::NhapPK()
{
    cout << "Ma phu kien: ";
    getline(cin, ma);
    cout << "Loai phu kien: ";
    getline(cin, loai);
    cout << "Mau phu kien: ";
    getline(cin, mau);
    cin.ignore();
    cout << "Don gia: ";
    cin >> dongia;
}

void PhuKien::XuatPK()
{
    cout << ma << " " << loai << " " << mau << " " << dongia;
}
void PhuKien::XuatFilePK(ofstream& fo)
{
    fo << ma << " " << loai << " " << mau << " " << dongia;
}
float PhuKien::getDonGia()
{
    return dongia;
}

#endif /* PhuKien_Code_h */
