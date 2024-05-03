//
//  Khan_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Khan_Class_h
#define Khan_Class_h
class KhanQuangCo : public PhuKien
{
private:
    double chieu_dai;
public:
    KhanQuangCo();
    ~KhanQuangCo();
    void NhapPK();
    void XuatPK();
    void XuatFilePK(ofstream& fo);
    float getDonGia();

};

#endif /* Khan_Class_h */
