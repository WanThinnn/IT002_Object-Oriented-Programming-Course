
#ifndef SV_CaoDang_Code_h
#define SV_CaoDang_Code_h

SV_CaoDang::SV_CaoDang() {}
SV_CaoDang::~SV_CaoDang() {}

void SV_CaoDang::Nhap()
{
    SinhVien::Nhap();
    cout << "Diem tot nghiep: ";
    cin >> diemtotnghiep;
}

void SV_CaoDang::Xuat()
{
    SinhVien::Xuat();
    cout << "Diem tot nghiep: " << diemtotnghiep << endl;
}

bool SV_CaoDang::TotNghiep()
{
    return (tinchi>=120 and dtb >= 5 and diemtotnghiep >= 5);
}

float SV_CaoDang::getDTB()
{
    return dtb;
}
string SV_CaoDang::TrinhDo()
{
    return "Cao Dang";
}

#endif
