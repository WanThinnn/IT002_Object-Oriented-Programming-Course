
#ifndef HaGioi_Code_h
#define HaGioi_Code_h

HaGioi::HaGioi() {}
HaGioi::~HaGioi() {}

bool HaGioi::PhatTrien()
{
    if (linhkhi >= 9 and quytac >= 9)
        return true;
    else
        return false;
}

void HaGioi::Nhap()
{
    TieuVuTru::Nhap();
    cout << "Chi so loai = 1" << endl;
}

void HaGioi::Xuat()
{
    TieuVuTru::Xuat();
    cout << "Chi so loai = 1" << endl;
}


int HaGioi::getChiSoLoai()
{
    return 1;
}


int HaGioi::sucmanh()
{
    return linhkhi*quytac*1;
}



#endif /* HaGioi_Code_h */
