#ifndef ELIP_CODE_h
#define ELIP_CODE_h

ELIP::ELIP() {}

//ELIP::ELIP(float xi, float yi)
//{
//    x = xi;
//    y = yi;
//}

ELIP::~ELIP() {}


void ELIP::Nhap()
{
    cout << "Nhap tieu diem thu 1: " << endl;
    F1.Nhap();
    cout << "Nhap tieu diem thu 2: " << endl;
    F2.Nhap();
    cout << "Nhap tieu cu: ";
    cin >> F;
    cout << "Nhap ban truc lon: ";
    cin >> r1;
    cout << "Nhap ban truc nho: ";
    cin >> r2;
}

void ELIP::Xuat()
{
    cout << "Tieu diem thu 1: " << endl; F1.Xuat(); cout << endl;
    cout << "Tieu diem thu 2: " << endl; F2.Xuat(); cout << endl;
    cout << "Tieu cu: " << F << endl;
    cout << "Ban truc lon: " << r1 << endl;
    cout << "Ban truc nho: " << r2 << endl;
}

DIEM ELIP::getF1()
{
    return F1;
}

DIEM ELIP::getF2()
{
    return F2;
}

float ELIP::getR1()
{
    return r1;
}

float ELIP::getR2()
{
    return r2;
}

float ELIP::getF()
{
    return F;
}

float ELIP::dientich()
{
    return 3.14*r1*r2;
}

#endif
