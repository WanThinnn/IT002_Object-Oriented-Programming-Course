#include "cList.h"

cList::cList()
{

}

cList::~cList()
{

}

void cList::Nhap()
{
    cout << " Nhap so luong sinh vien : " << endl;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cout << " SVCD(1) or SCDH(2) : " << endl;
        cin >> Loai[i];
        if (Loai[i]==1)
            {
                ds[i]= new (cSVCD);
                ((cSVCD*)ds[i])->Nhap();
            }
        if (Loai[i]==2)
            {
                ds[i]= new (cSVDH);
                ((cSVDH*)ds[i])->Nhap();
            }
    }
}

void cList::Xuat()
{
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
            {
                ((cSVCD*)ds[i])->Xuat();
            }
        if (Loai[i]==2)
            {
                ((cSVDH*)ds[i])->Xuat();
            }
    }
}

void cList::duDKTN()
{
    cout << " Danh sach dau tot nghiep : " << endl;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
        {
            if (((cSVCD*)ds[i])->xetTN()==true)
                ((cSVCD*)ds[i])->Xuat();
        }
        if (Loai[i]==2)
        {
            if (((cSVDH*)ds[i])->xetTN()==true)
                ((cSVDH*)ds[i])->Xuat();
        }
    }
}

void cList::khongduDKTN()
{
    cout << " Danh sach khong dau tot nghiep : " << endl;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
        {
            if (((cSVCD*)ds[i])->xetTN()==false)
                ((cSVCD*)ds[i])->Xuat();
        }
        if (Loai[i]==2)
        {
            if (((cSVDH*)ds[i])->xetTN()==false)
                ((cSVDH*)ds[i])->Xuat();
        }
    }
}

int cList::DiemTBDHcaonhat()
{
    float maxTB=0;
    int tmp;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==2)
        {
            if (ds[i]->getDiemTB()>maxTB)
            {
                maxTB=ds[i]->getDiemTB();
                tmp=i;
            }
        }
    }
    return tmp;
}

int cList::DiemTBCDcaonhat()
{
    float maxTB=0;
    int tmp;
    for (int i=0;i<n;i++)
    {
        if (Loai[i]==1)
        {
            if (ds[i]->getDiemTB()>maxTB)
            {
                maxTB=ds[i]->getDiemTB();
                tmp=i;
            }
        }
    }
    return tmp;
}

void cList::XuatthongtinSVDHcaonhat()
{
    cout << " Sinh vien dai hoc co diem cao nhat : " << endl;
    int tmp=DiemTBDHcaonhat();
    ((cSVDH*)ds[tmp])->Xuat();
}

void cList::XuatthongtinSVCDcaonhat()
{
    cout << " Sinh vien cao dang co diem cao nhat : " << endl;
    int tmp=DiemTBCDcaonhat();
    ((cSVCD*)ds[tmp])->Xuat();
}
