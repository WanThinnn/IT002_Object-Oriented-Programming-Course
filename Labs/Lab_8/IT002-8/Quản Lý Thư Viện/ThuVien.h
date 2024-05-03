//
//  ThuVien.h
//  IT002-8
//
//  Created by Thinnn on 21/06/2023.
//

#ifndef ThuVien_h
#define ThuVien_h
class ThuVien
{
private:
    Sach** ds;
    int n, pl, tongtien = 0;
public:
    ThuVien();
    ~ThuVien();
    void NhapDS();
    void XuatDS();
    int TongTien();
    int getN();
    Sach* TimSach(string nxb_t, int i);
    Sach* MinSach();
    void SachReNhat();
    void TimSach(string nxb_t);
    
};

ThuVien::ThuVien(){}
ThuVien::~ThuVien(){}

void ThuVien::NhapDS()
{
    cout << "So luong sach: ";
    cin >> n;
    ds = new Sach*[n];
    for (int i = 0; i < n; i++)
    {
        cout << "1. Sach giao khoa - 2. Sach tham khao: ";
        cin >> pl;
        cin.ignore();
        switch (pl)
        {
            case 1:
                ds[i] = new SachGiaoKhoa();
                ((SachGiaoKhoa*)ds[i])->Nhap();
                break;
            case 2:
                ds[i] = new SachThamKhao();
                ((SachThamKhao*)ds[i])->Nhap();
                break;
            default:
                cout << "Nhap lai!\n";
                break;
        }
    }
}

void ThuVien::XuatDS()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Sach thu " << i+1 << ": " << endl;
        ds[i]->Xuat();
        cout << endl;
    }
}

int ThuVien::TongTien()
{
    for (int i = 0; i < n; i++)
    {
        tongtien += ds[i]->ThanhTien();
    }
    return tongtien;
}

Sach* ThuVien::MinSach()
{
    Sach* min;
    min = ds[0];
    for (int i = 1; i < n; i++)
    {
        if (ds[i]->ThanhTien() < min->ThanhTien())
            min = ds[i];
    }
    return min;
}

Sach* ThuVien::TimSach(string nxb_n, int i)
{
    if (ds[i]->getNXB() == nxb_n)
        return ds[i];
    return NULL;
}

int ThuVien::getN()
{
    return n;
}

void ThuVien::TimSach(string nxb_t)
{
    cout << "Moi nhap NXB can tim: ";
    getline(cin, nxb_t);
    for (int i = 0; i < n; i++)
    {
        if (ds[i]->getLoaiSach() == "Sach Giao Khoa")
        {
            if (TimSach(nxb_t, i) != NULL)
            {
                TimSach(nxb_t, i)->Xuat();
                cout << endl;
            }
            
        }
    }
}
void ThuVien::SachReNhat()
{
    int min = MinSach()->ThanhTien();
    for (int i = 0; i < n; i++)
    {
        if (ds[i]->ThanhTien() == min)
        {
            ds[i]->Xuat();
            cout << endl;
        }
    }
}





#endif /* ThuVien_h */
