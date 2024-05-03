#include "cHinhTron.h"

cHinhTron::cHinhTron()
{

}

cHinhTron::~cHinhTron()
{

}

void cHinhTron::Nhap()
{
    cout << " Nhap tam hinh tron : " << endl;
    Tam.Nhap();
    cout << " Nhap ban kinh : " << endl;
    cin >> R;
    TieuDiem1=TieuDiem2=Tam;
    Bantruclon=Bantrucnho=R;
    Tieucu=0;
}

void cHinhTron::Xuat()
{
    cout << " Tam hinh tron : " << Tam.getX() << "\t" << Tam.getY() << endl;
    cout << " Ban kinh : "  << R << endl;
}