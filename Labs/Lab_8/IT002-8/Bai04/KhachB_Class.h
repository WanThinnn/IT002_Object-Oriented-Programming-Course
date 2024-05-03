//
//  KhachB_Class.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachB_Class_h
#define KhachB_Class_h
class KH_B : public KhachHang
{
private:
    int sonamthanthiet;
public:
    KH_B();
    ~KH_B();
    void Nhap(ifstream& fi);
    void Xuat(ofstream& fo);
    float KhuyenMai();
    float TongTien();
};

#endif /* KhachB_Class_h */
