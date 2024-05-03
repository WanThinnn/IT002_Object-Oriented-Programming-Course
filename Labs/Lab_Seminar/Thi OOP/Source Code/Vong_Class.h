//
//  Vong_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Vong_Class_h
#define Vong_Class_h

class VongTay : public PhuKien
{
private:
    double ban_kinh;
public:
    VongTay();
    ~VongTay();
    void NhapPK();
    void XuatPK();
    void XuatFilePK(ofstream& fo);
    float getDonGia();
};
#endif /* Vong_Class_h */
