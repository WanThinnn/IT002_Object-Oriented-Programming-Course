//
//  KhachC_Code.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachC_Code_h
#define KhachC_Code_h
KH_C::KH_C(){}
KH_C::~KH_C(){}
void KH_C::Nhap(ifstream& fi)
{
    KhachHang::Nhap(fi);
}

float KH_C::TongTien()
{
    return (soluonghang*dongia)*0.5 + (soluonghang*dongia)*0.1 ;
}

void KH_C::Xuat(ofstream& fo)
{
    KhachHang::Xuat(fo);
    fo << TongTien() << endl;
}

#endif /* KhachC_Code_h */
