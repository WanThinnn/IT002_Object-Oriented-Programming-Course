//
//  NganHang.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef NganHang_h
#define NganHang_h
NganHang::NganHang(){}
NganHang::~NganHang(){}
void NganHang::NhapDSKH()
{
    cout << "So luong khach hang: ";
    cin >> n;
    cin.ignore();
    KH = new KhachHang[n];
    for (int i = 0; i < n; i++)
        KH[i].ThemTK();
    cout << endl;
}
void NganHang::XuatDSKH()
{
    for (int i = 0; i < n; i++)
        KH[i].XuatTK();
}

void NganHang::RutTienNH()
{
    cout << "STT: ";
    int j;
    cin >> j;
    KH[j-1].RutTien();

}
void NganHang::GuiTienNH()
{
    cout << "STT: ";
    int j;
    cin >> j;
    KH[j-1].GuiTien();

}

#endif /* NganHang_h */
