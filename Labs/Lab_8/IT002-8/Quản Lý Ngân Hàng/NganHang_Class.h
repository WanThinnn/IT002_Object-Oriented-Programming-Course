//
//  NganHang_Class.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef NganHang_Class_h
#define NganHang_Class_h
class NganHang
{
private:
    KhachHang* KH;
    int n;
public:
    NganHang();
    ~NganHang();
    void NhapDSKH();
    void RutTienNH();
    void GuiTienNH();
    void XuatDSKH();
};

#endif /* NganHang_Class_h */
