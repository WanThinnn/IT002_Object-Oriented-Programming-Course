#ifndef List_Code_h
#define List_Code_h
List::List() {}
List::~List() {
    for (int i = 0; i < n; i++)
    {
        delete[] ds[i];
        delete[] pl;
    }
    delete[] ds;
}

void List::NhapDS()
{
    cout << "So luong sinh vien: ";
    cin >> n;
    ds = new SinhVien*[n];
    pl = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "1. SV Dai Hoc - 2. SV Cao Dang: ";
        cin >> pl[i];
        cin.ignore();
        switch (pl[i])
        {
            case 1:
                ds[i] = new SV_DaiHoc();
                dh++;
                (static_cast <SV_DaiHoc*> (ds[i]))->Nhap();
                break;
            case 2:
                ds[i] = new SV_CaoDang();
                (static_cast <SV_CaoDang*> (ds[i]))->Nhap();
                break;
            default:
                cout << "Nhap lai!" << endl;
                break;
        }
    }
    cd = n - dh;
}

void List::swap(SinhVien* &x, SinhVien* &y)
{
    SinhVien* temp = x;
    x = y;
    y = temp;
}


int List::compareSinhVien(SinhVien* sv1, SinhVien* sv2)
{
    // So sánh trình độ Đại học trước, cao đẳng sau
    if (sv1->TrinhDo() == "Dai Hoc" and sv2->TrinhDo() == "Cao Dang") {
        return -1; // sv1 < sv2
    }
    else if (sv1->TrinhDo() == "Cao Dang" and sv2->TrinhDo() == "Dai Hoc") {
        return 1; // sv1 > sv2
    }
    else
    {
        // Trình độ giống nhau, so sánh điểm trung bình
        if (sv1->getDTB() < sv2->getDTB()) {
            return -1; // sv1 < sv2
        }
        else if (sv1->getDTB() > sv2->getDTB()) {
            return 1; // sv1 > sv2
        }
        else {
            return 0; // sv1 = sv2
        }
    }
}

void List::QuickSort(SinhVien** ds, int left, int right)
{
    if (left >= right) {
        return;
    }

    SinhVien* x = ds[(left + right) / 2];
    int i = left;
    int j = right;

    while (i <= j)
    {
        while (compareSinhVien(ds[i], x) < 0) {
            i++;
        }
        while (compareSinhVien(ds[j], x) > 0) {
            j--;
        }
        if (i <= j)
        {
            swap(ds[i], ds[j]);
            i++;
            j--;
        }
    }

    QuickSort(ds, left, j);
    QuickSort(ds, i, right);
}



void List::XuatDS()
{
    cout << "\nDANH SACH SINH VIEN\n";
    for (int i = 0; i < n; i++)
    {
        switch (pl[i])
        {
            case 1:
                (static_cast <SV_DaiHoc*> (ds[i]))->Xuat();
                break;
            case 2:
                (static_cast <SV_CaoDang*> (ds[i]))->Xuat();
                break;
        }
    }
}

void List::DS_TotNghiep()
{
    cout << "\nDANH SACH SINH VIEN TOT NGHIEP\n";
    for (int i = 0; i < n; i++)
    {
        switch (pl[i])
        {
            case 1:
                if (((SV_DaiHoc*)ds[i])->TotNghiep() == true)
                    (static_cast <SV_DaiHoc*> (ds[i]))->Xuat();
                break;
            case 2:
                if (((SV_CaoDang*)ds[i])->TotNghiep() == true)
                    (static_cast <SV_CaoDang*> (ds[i]))->Xuat();
                break;
        }
    }
}

void List::DS_KhongTotNghiep()
{
    cout << "\nDANH SACH SINH VIEN KHONG TOT NGHIEP\n";
    for (int i = 0; i < n; i++)
    {
        switch (pl[i])
        {
            case 1:
                if (((SV_DaiHoc*)ds[i])->TotNghiep() == false)
                {
                    (static_cast <SV_DaiHoc*> (ds[i]))->Xuat();
                    cout << endl;
                    ktn1++;
                }
                break;
            case 2:
                if (((SV_CaoDang*)ds[i])->TotNghiep() == false)
                {
                    (static_cast <SV_CaoDang*> (ds[i]))->Xuat();
                    cout << endl;
                    ktn2++;
                }
                break;
        }
    }
}

void List::XuLyDanhSach()
{
    SinhVien** temp = new SinhVien*[n];
    for (int i = 0; i < n; i++) {
        temp[i] = ds[i];
    }
    QuickSort(temp, 0, n-1);
    cout << "SV Dai Hoc co diem trung cao nhat:\n";
    temp[dh-1]->Xuat();
    cout << endl;
    cout << "SV Cao Dang co diem trung cao nhat:\n";
    temp[n-1]->Xuat();
    cout << endl;
    cout << "So luong SV Dai Hoc khong tot nghiep: " << ktn1 << endl;
    cout << "So luong SV Cao Dang khong tot nghiep: " << ktn2 << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] temp[i];
    }
    delete[] temp;
}


#endif /* List_Code_h */
