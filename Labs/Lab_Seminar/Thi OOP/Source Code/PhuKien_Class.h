//
//  PhuKien_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef PhuKien_Class_h
#define PhuKien_Class_h
class PhuKien
{
protected:
    string ma, loai, mau;
    double dongia;
public:
    PhuKien();
    ~PhuKien();
    virtual void NhapPK();
    virtual void XuatPK();
    virtual void XuatFilePK(ofstream& fo);
    virtual float getDonGia();
};

#endif /* PhuKien_Class_h */
