//
//  Mu_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Mu_Code_h
#define Mu_Code_h
Mu::Mu(){}
Mu::~Mu(){}
void Mu::NhapPK() {PhuKien::NhapPK();}
void Mu::XuatPK() {PhuKien::XuatPK();}
void Mu::XuatFilePK(ofstream& fo)
{
    PhuKien::XuatFilePK(fo);
}
float Mu::getDonGia()
{
    return dongia;
}

#endif /* Mu_Code_h */
