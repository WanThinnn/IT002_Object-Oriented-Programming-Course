//
//  Ao_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Ao_Class_h
#define Ao_Class_h

class Ao
{
protected:
    string maao, tenao, loaiao, mau, gioitinh, size;
    float dongia;
public:
    Ao();
    ~Ao();
    virtual void NhapAo();
    virtual void XuatAo();
    virtual void XuatFileAo(ofstream& fo);
    virtual float getDonGia();
    virtual string LoaiAo() = 0;
    virtual string SizeAo();
    virtual string GioiTinh();
};

#endif /* Ao_Class_h */
