
#ifndef SinhVien_Code_h
#define SinhVien_Code_h
SinhVien::SinhVien() {}
SinhVien::~SinhVien() {}

void SinhVien::Nhap()
{
    cout << "MSSV: ";
    getline(cin, MSSV);
    cout << "Ho va Ten: ";
    getline(cin, ten);
    cout << "Dia Chi: ";
    getline(cin, diachi);
    cin.ignore();
    cout << "Diem Trung Binh: ";
    cin >> dtb;
    cout << "So tin chi: ";
    cin >> tinchi;
}


void SinhVien::Xuat()
{
    cout << "MSSV: " << MSSV << endl;
    cout << "Ho va Ten: " << ten << endl;
    cout << "Dia Chi: " << diachi << endl;
    cout << "Diem Trung Binh: " << dtb << endl;
    cout << "So tin chi: " << tinchi << endl;
}

float SinhVien::getDTB()
{
    return dtb;
}




#endif /* SinhVien_Code_h */
