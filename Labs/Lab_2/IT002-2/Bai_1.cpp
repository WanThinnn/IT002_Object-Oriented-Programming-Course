/*
 Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai phân số kể trên.
*/

#include <iostream>
#include <cmath>
using namespace std;

class PhanSo
{
private:
    int tuso, mauso;
public:
    PhanSo()
    {
        tuso = 0;
        mauso = 1;
    }
    PhanSo(int ts, int ms)
    {
        tuso = ts;
        mauso = ms;
    }
    void Nhap();
    void Xuat();
    void DinhGia();
    PhanSo Cong(PhanSo, PhanSo);
    PhanSo Tru(PhanSo, PhanSo);
    PhanSo Nhan(PhanSo, PhanSo);
    PhanSo Chia(PhanSo, PhanSo);
};

void PhanSo::Nhap()
{
    cin >> tuso >> mauso;
}

void PhanSo::DinhGia()
{
    float giaTri = (float)tuso / mauso;
    cout << "Gia tri cua phan so la: " << giaTri << endl;
}

void PhanSo::Xuat()
{
    if ((tuso >= 0 or tuso <= 0) and (mauso > 0))
        cout << tuso << "/" << mauso;
    else if (tuso >= 0 and mauso < 0)
        cout << "-" << tuso << "/" << abs(mauso);
    else if (tuso >= 0 and mauso > 0)
        cout << tuso << "/" << mauso;
    else if (tuso <= 0 and mauso < 0)
        cout << abs(tuso) << "/" << abs(mauso);
}

PhanSo PhanSo::Cong(PhanSo a, PhanSo b)
{
    PhanSo tong;
    tong.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
    tong.mauso = a.mauso * b.mauso;
    return tong;
}

PhanSo PhanSo::Tru(PhanSo a, PhanSo b)
{
    PhanSo hieu;
    hieu.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
    hieu.mauso = a.mauso * b.mauso;
    return hieu;
}

PhanSo PhanSo::Nhan(PhanSo a, PhanSo b)
{
    PhanSo tich;
    tich.tuso = a.tuso * b.tuso;
    tich.mauso = a.mauso * b.mauso;
    return tich;
}

PhanSo PhanSo::Chia(PhanSo a, PhanSo b)
{
    PhanSo thuong;
    thuong.tuso = a.tuso * b.mauso;
    thuong.mauso = a.mauso * b.tuso;
    return thuong;
}


int main()
{
    PhanSo a, b, cong, tru, nhan, chia;
    a.Nhap();
    b.Nhap();
    
    cong = a.Cong(a, b);
    tru = a.Tru(a, b);
    nhan = a.Nhan(a, b);
    chia = a.Chia(a, b);
    cong.Xuat();

    cout << endl;
    tru.Xuat();
    cout << endl;
    nhan.Xuat();
    cout << endl;;
    chia.Xuat();
    cout << endl;
    
    a.DinhGia();
    b.DinhGia();
    
}
