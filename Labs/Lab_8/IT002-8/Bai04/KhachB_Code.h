//
//  KhachB_Code.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachB_Code_h
#define KhachB_Code_h
KH_B::KH_B(){}
KH_B::~KH_B(){}
void KH_B::Nhap(ifstream& fi)
{
    KhachHang::Nhap(fi);
    fi >> sonamthanthiet;
}

float KH_B::KhuyenMai()
{
    return max(float(sonamthanthiet)*0.05, 0.5);
}

float KH_B::TongTien()
{
    return ((soluonghang*dongia)*(1 - KhuyenMai())) + (soluonghang*dongia)*0.1 ;
}

void KH_B::Xuat(ofstream& fo)
{
    KhachHang::Xuat(fo);
    fo << TongTien() << endl;
}

#endif /* KhachB_Code_h */
