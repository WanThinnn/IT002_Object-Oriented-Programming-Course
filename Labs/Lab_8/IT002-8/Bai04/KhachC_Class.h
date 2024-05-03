//
//  KhachC_Class.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachC_Class_h
#define KhachC_Class_h
class KH_C : public KhachHang
{
private:
public:
    KH_C();
    ~KH_C();
    void Nhap(ifstream& fi);
    void Xuat(ofstream& fo);
    float TongTien();
};

#endif /* KhachC_Class_h */
