#include "cList.h"

cList::cList()
{

}

cList::~cList()
{

}

void cList::Nhap()
{
    cout << " Nhap so luong nhan vien :" << endl;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cout << " Nhan vien VP(1) or Nhan vien SX(2) :" << endl;
        cin >> Loai[i];
        if (Loai[i]==1)
        {
            ds[i]= new (cNhanVienVP);
            ((cNhanVienVP*)ds[i])->Nhap();
        }
        if (Loai[i]==2)
        {
            ds[i]= new (cNhanVienSX);
            ((cNhanVienSX*)ds[i])->Nhap();
        }

    }
}

void cList::Xuat()
{
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
            ((cNhanVienVP*)ds[i])->Xuat();
        if (Loai[i]==2)
            ((cNhanVienSX*)ds[i])->Xuat();
    }
}

int cList::TongLuong()
{
    int Tong=0;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
            Tong+=((cNhanVienSX*)ds[i])->getLuong();
        if (Loai[i]==2)
            Tong+=((cNhanVienSX*)ds[i])->getLuong();
    }
    return Tong;
}

int cList::Luongcaonhat()
{
    int maxLuong=0;
    int tmp=-1;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
        {
            if (((cNhanVienVP*)ds[i])->getLuong()>maxLuong)
                {
                    maxLuong=((cNhanVienVP*)ds[i])->getLuong();
                    tmp=i;
                }
        }
        if (Loai[i]==2)
        {
            if (((cNhanVienSX*)ds[i])->getLuong()>maxLuong)
                {
                    maxLuong=((cNhanVienSX*)ds[i])->getLuong();
                    tmp=i;
                }
        }
    }
    return tmp;
}

int cList::Luongthapnhat()
{
    int minLuong=999999999;
    int tmp=-1;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
        {
            if (((cNhanVienVP*)ds[i])->getLuong()<minLuong)
                {
                    minLuong=((cNhanVienVP*)ds[i])->getLuong();
                    tmp=i;
                }
        }
        if (Loai[i]==2)
        {
            if (((cNhanVienSX*)ds[i])->getLuong()<minLuong)
                {
                    minLuong=((cNhanVienSX*)ds[i])->getLuong();
                    tmp=i;
                }
        }
    }
    return tmp;
}

void cList::XuatthongtinNVluongcaonhat()
{
    int tmp;
    tmp=Luongcaonhat();
    cout << " Nhan vien voi luong cao nhat : " << endl;
    if (Loai[tmp]==1)
        ((cNhanVienVP*)ds[tmp])->Xuat();
    else ((cNhanVienSX*)ds[tmp])->Xuat();
}

void cList::XuatthongtinNVluongthapnhat()
{
    int tmp;
    tmp=Luongthapnhat();
    cout << " Nhan vien voi luong thap nhat : " << endl;
    if (Loai[tmp]==1)
        ((cNhanVienVP*)ds[tmp])->Xuat();
    else ((cNhanVienSX*)ds[tmp])->Xuat();
}