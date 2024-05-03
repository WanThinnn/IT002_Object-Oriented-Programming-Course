#ifndef DIEM_CODE_h
#define DIEM_CODE_h

DIEM::DIEM() {}

DIEM::DIEM(float xi, float yi)
{
    x = xi;
    y = yi;
}

DIEM::~DIEM() {}


void DIEM::Nhap()
{
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

void DIEM::Xuat()
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

float DIEM::getX() {return x;}

float DIEM::getY() {return y;}

#endif
