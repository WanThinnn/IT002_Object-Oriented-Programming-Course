#ifndef ThuongGioi_Code_h
#define ThuongGioi_Code_h

ThuongGioi::ThuongGioi() {}
ThuongGioi::ThuongGioi(int lk,int qt)
{
    linhkhi = lk;
    quytac = qt;
}



ThuongGioi::~ThuongGioi() {}

void ThuongGioi::Nhap()
{
    TieuVuTru::Nhap();
    cout << "Chi so loai = 10" << endl;
    chisoloai = 10;
}

int ThuongGioi::sucmanh()
{
    return linhkhi*quytac*10;
}

void ThuongGioi::Xuat()
{
    TieuVuTru::Xuat();
    cout << "Chi so loai = 10" << endl;
}

int ThuongGioi::getChiSoLoai()
{
    return 10;
}

#endif /* ThuongGioi_Code_h */
