//
//  Mu_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Mu_Class_h
#define Mu_Class_h

class Mu : public PhuKien
{
public:
    Mu();
    ~Mu();
    void NhapPK();
    void XuatPK();
    void XuatFilePK(ofstream& fo);
    float getDonGia();

};

#endif /* Mu_Class_h */
