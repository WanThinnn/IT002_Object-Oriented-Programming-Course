
#ifndef List_Code_h
#define List_Code_h


List::List() {}
List::~List() {}

void List::NhapDS()
{
    cout << "So luong tieu the gioi: ";
    cin >> n;
    ds = new TieuVuTru*[n];
    pl = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "1. Ha Gioi - 2. Thuong Gioi: ";
        cin >> pl[i];
        if (pl[i] == 1)
        {
            ds[i] = new (HaGioi);
            ((HaGioi*)ds[i])->Nhap();
            hg++;
        }
        else if (pl[i] == 2)
        {
            ds[i] = new (ThuongGioi);
            ((ThuongGioi*)ds[i])->Nhap();
            tg++;
        }
    }
}

int List::checkPhatTrien()
{
    for (int i = 0; i < n; i++)
    {
        if ( (pl[i] == 1) and
            ((HaGioi*)ds[i])->PhatTrien() == true)
            hg++;
    }
    return hg;
}


TieuVuTru* List::countStrongHG()
{
    int i;
    int j = -1;
    int max = -1;
    for (i = 0; i < n; i++)
        if (pl[i] == 1)
        {
            if (ds[i]->sucmanh() > max)
            {
                max = ds[i]->sucmanh();
                j = i;
            }
        }
    return ds[i];
}

TieuVuTru* List::countStrongTG()
{
    int i;
    int j = -1;
    int max = -1;
    for (i = 0; i < n; i++)
        if (pl[i] == 10)
        {
            if (ds[i]->sucmanh() > max)
            {
                max = ds[i]->sucmanh();
                j = i;
            }
        }
    return ds[i];
}

void List::XuatDS()
{
    cout << "Cac Tieu the gioi: ";
    for (int i = 0; i < n; i++)
    {
        if (pl[i] == 1)
        {
            ((HaGioi*)ds[i])->Xuat();
            cout << endl;
        }
        else if (pl[i] == 2)
        {
            ((ThuongGioi*)ds[i])->Xuat();
            cout << endl;
        }
    }
}

#endif
