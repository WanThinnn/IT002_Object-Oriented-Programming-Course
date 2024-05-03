//
//  Quan_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Quan_Class_h
#define Quan_Class_h

class Quan
{
protected:
    string maquan, tenquan, loaiquan, mau, gioitinh, size;
    int dongia;
public:
    Quan();
    ~Quan();
    virtual void NhapQuan();
    virtual void XuatQuan();
    virtual void XuatFileQuan(ofstream& fo);
    virtual float getDonGia();
    virtual string LoaiQuan() = 0;
    virtual string SizeQuan();
    virtual string GioiTinh();
};


#endif /* Quan_Class_h */
