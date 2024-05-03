//
//  TaiKhoan.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef TaiKhoan_h
#define TaiKhoan_h
TaiKhoan::TaiKhoan(){}
TaiKhoan::~TaiKhoan(){}
void TaiKhoan::GuiTien()
{
    cout << "Nhap so tien ban muon gui: ";
    int temp;
    cin >> temp;
    sodu = sodu + temp;
    temp = 0;
}
int TaiKhoan::SoDu()
{
    return sodu;
}
int TaiKhoan::getSTK()
{
    return stk;
}

void TaiKhoan::setSoDu(int sdm)
{
    sodu += sdm;
}


#endif /* TaiKhoan_h */
