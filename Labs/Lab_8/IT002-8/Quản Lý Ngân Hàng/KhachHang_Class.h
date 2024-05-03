//
//  KhachHang_Class.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef KhachHang_Class_h
#define KhachHang_Class_h
class KhachHang
{
private:
    string hoten;
    TaiKhoan* ds[10];
    int pl[10];
    unsigned int n = 0, m = 0;
public:
    KhachHang();
    ~KhachHang();
    void ThemTK();
    void XuatTK();
    void SoTaiKhoan();
    void RutTien();
    void GuiTien();
};

#endif /* KhachHang_Class_h */
