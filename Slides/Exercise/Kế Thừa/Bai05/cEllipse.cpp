#include "cEllipse.h"

float cEllipse::Pi=3.14;

cEllipse::cEllipse()
{

}

cEllipse::~cEllipse()
{

}

void cEllipse::Nhap()
{
    cout << " Nhap tieu diem thu 1 : " << endl;
    TieuDiem1.Nhap();
    cout << " Nhap tieu diem thu 2 : " << endl;
    TieuDiem2.Nhap();
    cout << " Nhap tieu cu : " << endl;
    cin >> Tieucu;
    cout << " Nhap ban truc lon : " << endl;
    cin >> Bantruclon;
    Bantrucnho=pow(Bantruclon,2)-pow(Tieucu/2,2);
}

void cEllipse::Xuat()
{
    cout << "Tieu diem thu nhat : " << TieuDiem1.getX() << "\t" << TieuDiem1.getY() << endl;
    cout << " Tieu diem thu hai : " << TieuDiem2.getX() << "\t" << TieuDiem2.getY() << endl;
    cout << " Tieu cu ( 2c ) : " << Tieucu << endl;
    cout << " Ban truc lon ( a ) : " << Bantruclon << endl;
    cout << " Ban truc nho ( b ) : " << Bantrucnho << endl;
}

float cEllipse::dientich()
{
    return Pi*Bantruclon*Bantrucnho;
}