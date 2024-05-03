#ifndef HCN_CODE_h
#define HCN_CODE_h
HCN::HCN() {}
HCN::HCN(float x, float y) {chieuDai = x; chieuDai = y;}
HCN::~HCN() {}

void HCN::NhapHinh()
{
    cout << "Nhap chieu dai: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong: ";
    cin >> chieuRong;
}

double HCN::DienTich()
{
    return chieuDai * chieuRong;
}

void HCN::XuatHinh()
{
    cout << "Chieu dai: " << chieuDai << endl;
    cout << "Chieu rong: " << chieuRong << endl;
}

void HCN::VeHinh()
{
    cout << "Ve hinh chu nhat" << endl;
}

#endif
