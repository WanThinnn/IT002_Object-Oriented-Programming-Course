//
//  KhachA_Code.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachA_Code_h
#define KhachA_Code_h
KH_A::KH_A(){}
KH_A::~KH_A(){}

void KH_A::Nhap(ifstream& fi)
{
    KhachHang::Nhap(fi);
}

float KH_A::TongTien()
{
    return soluonghang*dongia + ((soluonghang*dongia)*0.1);
}

void KH_A::Xuat(ofstream& fo)
{
    KhachHang::Xuat(fo);
    fo << TongTien() << endl;
}


#endif /* KhachA_Code_h */
