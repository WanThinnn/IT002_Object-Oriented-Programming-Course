
#ifndef KiemChungVien_Code_h
#define KiemChungVien_Code_h

KiemChungVien::KiemChungVien() {}
KiemChungVien::~KiemChungVien() {}

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Tong so loi phat hien duoc: ";
    cin >> soloi;
}


int KiemChungVien::Luong()
{
    return luongcb + soloi*50000;
}

void KiemChungVien::Xuat()
{
    NhanVien::Xuat();
    cout << "Tong so loi phat hien duoc: " << soloi << endl;
    cout << "Luong: " << Luong() << endl;
}

#endif /* KiemChungVien_Code_h */
