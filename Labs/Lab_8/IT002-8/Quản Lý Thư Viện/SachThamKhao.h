//
//  SachThamKhao.h
//  IT002-8
//
//  Created by Thinnn on 21/06/2023.
//

#ifndef SachThamKhao_h
#define SachThamKhao_h
class SachThamKhao : public Sach
{
private:
    int tienthue;
public:
    SachThamKhao();
    ~SachThamKhao();
    void Nhap();
    void Xuat();
    int ThanhTien();
    string getLoaiSach();
};

SachThamKhao::SachThamKhao(){}
SachThamKhao::~SachThamKhao(){}

void SachThamKhao::Nhap()
{
    Sach::Nhap();
    cout << "Tien Thue: ";
    cin >> tienthue;
}

void SachThamKhao::Xuat()
{
    Sach::Xuat();
    cout << "Tien Thue: " << tienthue << endl;
}

int SachThamKhao::ThanhTien()
{
    return soluong*dongia+tienthue;
}
string SachThamKhao::getLoaiSach()
{
    return "Sach Tham Khao";
}

#endif /* SachThamKhao_h */
