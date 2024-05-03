#include "B1_CODE_NV.h"
#include "B1_CODE_NVSX.h"
#include "B1_CODE_NVVP.h"


LIST::LIST() {}

LIST::~LIST() {}

void LIST::Nhap()
{
    cout << "- Nhap so luong nhan vien : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "- Nhan vien VP(1) hoac Nhan vien SX(2) : ";
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            ds[i] = new (NV_VANPHONG);
            ((NV_VANPHONG*)ds[i])->Nhap();
        }
        else if (Loai[i] == 2)
        {
            ds[i] = new (NV_SANXUAT);
            ((NV_SANXUAT*)ds[i])->Nhap();
        }
    }
}

void LIST::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        if (Loai[i] == 1)
            ((NV_VANPHONG*)ds[i])->Xuat();
        if (Loai[i] == 2)
            ((NV_SANXUAT*)ds[i])->Xuat();
    }
}

int LIST::TongLuong()
{
    int Tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (Loai[i] == 1)
            Tong += ((NV_VANPHONG*)ds[i])->getLuong();
        if (Loai[i] == 2)
            Tong += ((NV_SANXUAT*)ds[i])->getLuong();
    }
    return Tong;
}

int LIST::MaxLuong()
{
    int maxLuong = 0;
    int tmp = -1;
    for (int i = 0; i < n; i++)
    {
        if (Loai[i] == 1)
        {
            if (((NV_VANPHONG*)ds[i])->getLuong()>maxLuong)
                {
                    maxLuong = ((NV_VANPHONG*)ds[i])->getLuong();
                    tmp = i;
                }
        }
        
        else if (Loai[i] == 2)
        {
            if (((NV_SANXUAT*)ds[i])->getLuong()>maxLuong)
                {
                    maxLuong = ((NV_SANXUAT*)ds[i])->getLuong();
                    tmp = i;
                }
        }
    }
    return tmp;
}

int LIST::MinLuong()
{
    int minLuong = 999999999;
    int tmp = -1;
    for (int i = 0; i < n; i++)
    {
        if (Loai[i]==1)
        {
            if (((NV_VANPHONG*)ds[i])->getLuong() < minLuong)
                {
                    minLuong=((NV_VANPHONG*)ds[i])->getLuong();
                    tmp=i;
                }
        }
        else if (Loai[i] == 2)
        {
            if (((NV_SANXUAT*)ds[i])->getLuong() < minLuong)
                {
                    minLuong = ((NV_SANXUAT*)ds[i])->getLuong();
                    tmp = i;
                }
        }
    }
    return tmp;
}

void LIST::NV_LuongCaoNhat()
{
    int tmp;
    tmp = MaxLuong();
    cout << "- Nhan vien voi luong cao nhat : " << endl;
    if (Loai[tmp] == 1)
        ((NV_VANPHONG*)ds[tmp])->Xuat();
    else
        ((NV_SANXUAT*)ds[tmp])->Xuat();
}

void LIST::NV_LuongThapNhat()
{
    int tmp;
    tmp = MinLuong();
    cout << "- Nhan vien voi luong thap nhat : " << endl;
    if (Loai[tmp]==1)
        ((NV_VANPHONG*)ds[tmp])->Xuat();
    else
        ((NV_SANXUAT*)ds[tmp])->Xuat();
}
