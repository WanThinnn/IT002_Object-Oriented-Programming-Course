
#ifndef NhanVien_Code_h
#define NhanVien_Code_h

NhanVien::NhanVien() {}
NhanVien::~NhanVien() {}
void NhanVien::Nhap()
{
    cin.ignore();
    cout << "MSNV: ";
    getline(cin, msnv);
    cout << "Ho va Ten: ";
    getline(cin, ht);
    cout << "So dien thoai: ";
    getline(cin, sdt);
    cout << "Email: ";
    getline(cin, email);
    cin.ignore();
    cout << "Luong co ban: ";
    cin >> luongcb;
}

void NhanVien::Xuat()
{
    cout << "MSNV: " << msnv << endl;
    cout << "Ho va Ten: " << ht << endl;
    cout << "So dien thoai: " << sdt << endl;
    cout << "Email: " << email << endl;
    cout << "Luong co ban: " << luongcb << endl;
}

#endif /* NhanVien_Code_h */
