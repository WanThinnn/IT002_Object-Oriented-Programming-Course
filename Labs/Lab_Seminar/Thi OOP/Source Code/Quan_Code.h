//
//  Quan_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Quan_Code_h
#define Quan_Code_h

Quan::Quan() {}
Quan::~Quan() {}

void Quan::NhapQuan()
{
    cout << "Ma quan: ";
    getline(cin, maquan);
    cout << "Ten quan: ";
    getline(cin, tenquan);
    cout << "Loai quan: ";
    getline(cin, loaiquan);
    cout << "Mau: ";
    getline(cin, mau);
    cout << "Gioi tinh: ";
    getline(cin, gioitinh);
    cout << "Size: ";
    getline(cin, size);
    cin.ignore();
    cout << "Don gia: ";
    cin >> dongia;
    cin.ignore();

}

void Quan::XuatQuan()
{
    cout << maquan << " " << tenquan << " " << loaiquan << " " << mau << " " << gioitinh << " " << size << " " << dongia;
}

void Quan::XuatFileQuan(ofstream& fo)
{
    fo << maquan << " " << tenquan << " " << loaiquan << " " << mau << " " << gioitinh << " " << size << " " << dongia;
}

float Quan::getDonGia()
{
    return dongia;
}


string Quan::SizeQuan()
{
    return size;
}
string Quan::GioiTinh()
{
    return gioitinh;
}

#endif /* Quan_Code_h */
