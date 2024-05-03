//
//  KhachHang.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef KhachHang_h
#define KhachHang_h
KhachHang::KhachHang(){}
KhachHang::~KhachHang(){}
void KhachHang::ThemTK()
{
    cout << "THEM TAI KHOAN\n";
    cout << "Ho ten: ";
    getline(cin, hoten);
    cin.ignore();
    cout << "Nhap so luong tai khoan muon them: ";
    cin >> m;
    int k = m + n;
    if (k <= 10)
    {
        for (int i = n; i < k; i++)
        {
            cout << "1. TK Tiet Kiem - 2. TK Vang Lai: ";
            cin >> pl[i];
            switch (pl[i])
            {
                case 1:
                    ds[i] = new TietKiem();
                    (static_cast<TietKiem*>(ds[i]))->TaoTaiKhoan();
                    break;
                case 2:
                    ds[i] = new VangLai();
                    (static_cast<VangLai*>(ds[i]))->TaoTaiKhoan();
                    break;
                default:
                    cout << "Nhap lai!" << endl;
                    break;
            }
        }
    }
    n = k;
    for (int i = 0; i < n; i++)
    {
        if (pl[i] == 2)
            (static_cast<VangLai*>(ds[i]))->LienKetTK(ds,n);
    }
}

void KhachHang::XuatTK()
{
    cout << "\nTHONG TIN TAI KHOAN" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "STT: " << i + 1 << endl;
        cout << "Loai tai khoan: " << ds[i]->getTK() << endl;
        (ds[i])->XuatTaiKhoan();
        cout << endl;
    }
}

void KhachHang::SoTaiKhoan()
{
    for (int i = 0; i < n; i++)
        cout << ds[i]->getSTK() << endl;
}

void KhachHang::RutTien()
{
    cout << "\nRUT TIEN" << endl;
    cout << "Chon tai khoan ma ban muon rut: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "STT: " << i + 1 << endl;
        cout << "Loai tai khoan: " << ds[i]->getTK() << endl;
        (ds[i])->XuatTaiKhoan();
        cout << endl;
    }
    cout << "Chon: ";
    int i;
    cin >> i;
    ds[i-1]->RutTien();
    cout << "\nSo du moi cua tai khoan: "<< ds[i-1]->getSTK() <<" la: " << ds[i-1]->SoDu() << endl;
    cout << endl;
}

void KhachHang::GuiTien()
{
    cout << "GUI TIEN" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "STT: " << i + 1 << endl;
        cout << "Loai tai khoan: " << ds[i]->getTK() << endl;
        (ds[i])->XuatTaiKhoan();
        ds[i]->GuiTien();
        cout << "So du moi: " << ds[i]->SoDu() << endl;
        cout << endl;
    }
}

#endif /* KhachHang_h */
