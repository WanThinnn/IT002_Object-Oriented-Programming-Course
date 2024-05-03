#ifndef SV_DaiHoc_Code_h
#define SV_DaiHoc_Code_h

SV_DaiHoc::SV_DaiHoc() {}
SV_DaiHoc::~SV_DaiHoc() {}

void SV_DaiHoc::Nhap()
{
    SinhVien::Nhap();
    cin.ignore();
    cout << "Ten luan van: ";
    getline(cin, tenluanvan);
    cin.ignore();
    cout << "Diem luan van: ";
    cin >> diemluanvan;
}

void SV_DaiHoc::Xuat()
{
    SinhVien::Xuat();
    cout << "Diem luan van: " << diemluanvan << endl;
    cout << "Ten luan van: " << tenluanvan << endl;
    
}

bool SV_DaiHoc::TotNghiep()
{
    return (tinchi>=170 and dtb >= 5 and diemluanvan >= 5);
}

float SV_DaiHoc::getDTB()
{
    return dtb;
}

string SV_DaiHoc::TrinhDo()
{
    return "Dai Hoc";
}
#endif /* SV_DaiHoc_Code_h */
