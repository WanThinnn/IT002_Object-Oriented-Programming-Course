#include "cList.h"
#include "cSinhVien.h"
#include "cHocSinh.h"
#include "cCaSi.h"
#include "cNgheSi.h"
#include "cCongNhan.h"

cList::cList()
{

}

cList::~cList()
{

}

void cList::Nhap()
{
    cout << " Nhap so luong nguoi : " << endl;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cout << " SinhVien(1) or HocSinh(2) or CongNhan(3) or NgheSi(4) or CaSi(5) : " << endl;
        cin >>Loai[i];
        if ( Loai[i]==1)
        {
            ds[i]= new (cSinhVien);
            ((cSinhVien*)ds[i])->Nhap();
        }
        if ( Loai[i]==2)
        {
            ds[i]= new (cHocSinh);
            ((cHocSinh*)ds[i])->Nhap();
        }
        if ( Loai[i]==3)
        {
            ds[i]= new (cCongNhan);
            ((cCongNhan*)ds[i])->Nhap();
        }
        if ( Loai[i]==4)
        {
            ds[i]= new (cNgheSi);
            ((cNgheSi*)ds[i])->Nhap();
        }
        if ( Loai[i]==5)
        {
            ds[i]= new (cCaSi);
            ((cCaSi*)ds[i])->Nhap();
        }
    }
}

void cList::Xuat()
{
    for (int i=0;i<n;i++)
    {
        if ( Loai[i]==1)
        {
            ((cSinhVien*)ds[i])->Xuat();
        }
        if ( Loai[i]==2)
        {
            ((cHocSinh*)ds[i])->Xuat();
        }
        if ( Loai[i]==3)
        {
            ((cCongNhan*)ds[i])->Xuat();
        }
        if ( Loai[i]==4)
        {
            ((cNgheSi*)ds[i])->Xuat();
        }
        if ( Loai[i]==5)
        {
            ((cCaSi*)ds[i])->Xuat();
        }
    }
}