//
//  KhachA_Class.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachA_Class_h
#define KhachA_Class_h
class KH_A : public KhachHang
{
private:

public:
    KH_A();
    ~KH_A();
    void Nhap(ifstream& fi);
    void Xuat(ofstream& fo);
    float TongTien();
};

#endif /* KhachA_Class_h */
