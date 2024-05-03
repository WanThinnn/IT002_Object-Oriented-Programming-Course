#ifndef HBH_CODE_h
#define HBH_CODE_h
HBH::HBH() {}
HBH::HBH(double x, double y)
{
    chieuCao = x; doDaiCanh = y;
}

HBH::~HBH() {}

void HBH::NhapHinh()
{
    cout << "Nhap chieu cao: ";
    cin >> chieuCao;
    cout << "Nhap do dai canh: ";
    cin >> doDaiCanh;
}

void HBH::XuatHinh()
{
    cout << "Chieu cao: " << chieuCao << endl;
    cout << "Do dai canh: " << doDaiCanh << endl;
}

double HBH::DienTich()
{
    return doDaiCanh * chieuCao;
}

void HBH::VeHinh()
{
   cout << "Ve hinh binh hanh" << endl;
}
#endif
