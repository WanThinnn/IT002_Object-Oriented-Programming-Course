//
//  TaiKhoan_Class.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef TaiKhoan_Class_h
#define TaiKhoan_Class_h
class TaiKhoan
{
protected:
    int stk, sodu, mk;
public:
    TaiKhoan();
    ~TaiKhoan();
    virtual void TaoTaiKhoan() = 0;
    virtual void RutTien() = 0;
    virtual void GuiTien();
    virtual void XuatTaiKhoan() = 0;
    int getSTK();
    virtual string getTK() = 0;
    int SoDu();
    void setSoDu(int sdm);

};

#endif /* TaiKhoan_Class_h */
