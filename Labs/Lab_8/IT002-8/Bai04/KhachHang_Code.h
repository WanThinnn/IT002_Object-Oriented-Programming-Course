//
//  KhachHang_Code.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef KhachHang_Code_h
#define KhachHang_Code_h
KhachHang::KhachHang(){}
KhachHang::~KhachHang(){}

void KhachHang::Nhap(ifstream& fi)
{
    fi.ignore();
    getline(fi, tenkhachhang);
    fi >> soluonghang;
    fi >> dongia;
}

void KhachHang::Xuat(ofstream& fo)
{
    fo << tenkhachhang << endl;
}
#endif /* KhachHang_Code_h */
