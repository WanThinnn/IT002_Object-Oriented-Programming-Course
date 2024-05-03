//
//  QuanLyThuVien.cpp
//  IT002-8
//
//  Created by Thinnn on 21/06/2023.
//

#include "QuanLyThuVien.hpp"

int main()
{
    ThuVien DHQG;
    string find;
    cout << "NHAP DANH SACH\n";
    DHQG.NhapDS();
    cout << endl << endl;
    
    cout << "XUAT DANH SACH\n";
    DHQG.XuatDS();
    
    cout << "TIM SACH\n";
    cin.ignore();
    DHQG.TimSach(find);
    
    cout << "SACH RE NHAT\n";
    DHQG.SachReNhat();
    
    cout << "TONG TIEN\n";
    cout << DHQG.TongTien() << endl;

}
