#ifndef LapTrinhVien_Code_h
#define LapTrinhVien_Code_h

LapTrinhVien::LapTrinhVien() {}
LapTrinhVien::~LapTrinhVien() {}

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout << "So gio overtime: ";
    cin >> overtime;
}

int LapTrinhVien::Luong()
{
    return luongcb + overtime*200000;
}

void LapTrinhVien::Xuat()
{
    NhanVien::Xuat();
    cout << "So gio overtime: " << overtime << endl;
    cout << "Luong: " << Luong() << endl;
}

#endif /* LapTrinhVien_Code_h */
