//
//  SachGiaoKhoa.h
//  IT002-8
//
//  Created by Thinnn on 21/06/2023.
//

#ifndef SachGiaoKhoa_h
#define SachGiaoKhoa_h
class SachGiaoKhoa : public Sach
{
private:
    int tinhtrang;
public:
    SachGiaoKhoa();
    ~SachGiaoKhoa();
    void Nhap();
    void Xuat();
    int ThanhTien();
    string getLoaiSach();
};
SachGiaoKhoa::SachGiaoKhoa(){}
SachGiaoKhoa::~SachGiaoKhoa(){}

void SachGiaoKhoa::Nhap()
{
    Sach::Nhap();
    cout << "Tinh trang: ";
    cin >> tinhtrang;
}

void SachGiaoKhoa::Xuat()
{
    Sach::Xuat();
    cout << "Tinh trang: " << tinhtrang << endl;
}

int SachGiaoKhoa::ThanhTien()
{
    if (tinhtrang == 1)
        return soluong*dongia;
    return soluong*dongia*0.5;
}
string SachGiaoKhoa::getLoaiSach()
{
    return "Sach Giao Khoa";
}

#endif /* SachGiaoKhoa_h */
