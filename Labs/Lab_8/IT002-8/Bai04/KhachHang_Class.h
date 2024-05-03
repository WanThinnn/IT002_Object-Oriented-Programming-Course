//
//  KhachHang_Class.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachHang_Class_h
#define KhachHang_Class_h

class KhachHang
{
protected:
    string tenkhachhang;
    int soluonghang;
    float dongia;
public:
    KhachHang();
    ~KhachHang();
    virtual void Nhap(ifstream& fi);
    virtual void Xuat(ofstream& fo);
    virtual float TongTien() = 0;
};

#endif /* KhachHang_Class_h */
