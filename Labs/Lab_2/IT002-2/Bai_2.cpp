#include <iostream>
#include <cmath>
using namespace std;

class SOPHUC
{
    private:
        float thuc, ao;
    public:
        void Nhap();
        void Xuat();
        void DinhGia();
        SOPHUC Cong(SOPHUC, SOPHUC);
        SOPHUC Tru(SOPHUC, SOPHUC);
        SOPHUC Nhan(SOPHUC, SOPHUC);
        SOPHUC Chia(SOPHUC, SOPHUC);
};

void SOPHUC::Nhap()
{
    cin >> thuc >> ao;
}

void SOPHUC::Xuat()
{
    if (ao < 0)
        cout << thuc << "" << ao << "i";
    else
        cout << thuc << "+" << ao << "i";
    cout << endl;
}

void SOPHUC::DinhGia()
{
    cout << sqrt(thuc*thuc + ao*ao);
}


SOPHUC SOPHUC::Cong(SOPHUC a, SOPHUC b)
{
    SOPHUC tong;
    tong.thuc = a.thuc + b.thuc;
    tong.ao = a.ao + b.ao;
    return tong;
}

SOPHUC SOPHUC::Tru(SOPHUC a, SOPHUC b)
{
    SOPHUC hieu;
    hieu.thuc = a.thuc - b.thuc;
    hieu.ao = a.ao - b.ao;
    return hieu;
}

SOPHUC SOPHUC::Nhan(SOPHUC a, SOPHUC b)
{
    SOPHUC tich;
    tich.thuc = a.thuc*b.thuc - a.ao*b.ao;
    tich.ao = a.thuc*b.thuc + a.ao*b.ao;
    return tich;
}

SOPHUC SOPHUC::Chia(SOPHUC a, SOPHUC b)
{
    SOPHUC thuong;
    thuong.thuc = (a.thuc*b.thuc - a.ao*b.ao)/(b.thuc*b.thuc + b.ao*b.ao);
    thuong.ao = (a.thuc*b.ao - a.ao*b.thuc)/(b.thuc*b.thuc + b.ao*b.ao);
    return thuong;
}
int main()
{
    SOPHUC a, b, C, T, N, CH;
    a.Nhap(); b.Nhap();
    C = a.Cong(a, b); C.Xuat();
    T = a.Tru(a, b); T.Xuat();
    N = a.Nhan(a, b); N.Xuat();
    CH = a.Chia(a, b); CH.Xuat();
}
