//
//  Ao_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef Ao_Code_h
#define Ao_Code_h
Ao::Ao() {}
Ao::~Ao() {}
void Ao::NhapAo()
{
    cout << "Ma ao: ";
    getline(cin, maao);
    cout << "Ten ao: ";
    getline(cin, tenao);
    cout << "Loai ao: ";
    getline(cin, loaiao);
    cout << "Mau ao: ";
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
void Ao::XuatAo()
{
    cout << maao << " " << tenao << " " << loaiao << " " << mau << " " << gioitinh << " " << size << " " << dongia;
}
void Ao::XuatFileAo(ofstream& fo)
{
    fo << maao << " " << tenao << " " << loaiao << " " << mau << " " << gioitinh << " " << size << " " << dongia;
}

float Ao::getDonGia()
{
    return dongia;
}

string Ao::SizeAo()
{
    return size;
}
string Ao::GioiTinh()
{
    return gioitinh;
}
#endif /* Ao_Code_h */
