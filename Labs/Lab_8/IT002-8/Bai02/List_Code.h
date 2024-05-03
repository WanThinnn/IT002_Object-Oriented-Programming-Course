//
//  List_Code.h
//  IT002-8
//
//  Created by Thinnn on 09/06/2023.
//

#ifndef List_Code_h
#define List_Code_h
List::List() {}
List::~List() {}

void List::NhapDS()
{
    cout << "So luong Nhan Vien: ";
    cin >> n;
    ds = new NhanVien*[n];
    pl = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "1. Lap Trinh Vien - 2. Kiem Chung Vien: ";
        cin >> pl[i];
        switch (pl[i])
        {
            case 1:
                ds[i] = new LapTrinhVien();
                ((LapTrinhVien*)ds[i])->Nhap();
                tongluong += ((LapTrinhVien*)ds[i])->Luong();
                break;
            case 2:
                ds[i] = new KiemChungVien();
                ((KiemChungVien*)ds[i])->Nhap();
                tongluong += ((KiemChungVien*)ds[i])->Luong();
                break;
            default:
                cout << "Nhap lai!" << endl;
                break;
        }
    }
}
void List::XuatDS()
{
    cout << "\nDANH SACH NHAN VIEN\n";
    for (int i = 0; i < n; i++)
    {
        ds[i]->Xuat();
        cout << endl;
    }
}

void List::XulyDS()
{
    luongtb = tongluong/n;
    cout << "LUONG TRUNG BINH: " << fixed << luongtb << endl;
    cout << "\nDANH SACH NHAN VIEN THAP HON LUONG TRUNG BINH\n";
    for (int i = 0; i < n; i++)
        if (ds[i]->Luong() < luongtb)
        {
            ds[i]->Xuat();
            cout << endl;
        }
}

NhanVien* List::NV_MaxLuong()
{
    int i, j = 0, max = -1;
    for (i = 0; i < n; i++)
        if (ds[i]->Luong() > max)
        {
            max = ds[i]->Luong();
            j = i;
        }
    return ds[j];
}

NhanVien* List::NV_MinLuong()
{
    int i, j = 0, min = 1410065407;
    for (i = 0; i < n; i++)
        if (ds[i]->Luong() < min)
        {
            min = ds[i]->Luong();
            j = i;
        }
    return ds[j];
}

LapTrinhVien* List::LTV_MaxLuong()
{
    LapTrinhVien* maxLTV = NULL;
    float maxLuong = 0.0;
    for (int i = 0; i < n; i++)
    {
        LapTrinhVien* ltv = (LapTrinhVien*)ds[i];
        if (ltv != NULL)
        {
            if (ltv->Luong() > maxLuong)
            {
                maxLuong = ltv->Luong();
                maxLTV = ltv;
            }
        }
    }
    return maxLTV;
}

KiemChungVien* List::KCV_MinLuong()
{
    KiemChungVien* minKCV = NULL;
    float minLuong = 1410065407.0;
    for (int i = 0; i < n; i++)
    {
        KiemChungVien* kcv = (KiemChungVien*)ds[i];
        if (kcv != NULL)
        {
            if (kcv->Luong() < minLuong)
            {
                minLuong = kcv->Luong();
                minKCV = kcv;
            }
        }
    }
    return minKCV;
}




#endif /* List_Code_h */
