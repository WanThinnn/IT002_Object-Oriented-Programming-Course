#include <iostream>
#include <stdio.h>

using namespace std;
class Cong
{
protected:
    string nguoigac;
public:
    virtual void Nhap() = 0;
    virtual void Xuat()
    {
        cout << "Nguoi gac cong: " << nguoigac << endl;
    }
    virtual string LoaiCong() = 0;
    virtual int ThongSo() = 0;
    
};

class GiaoThuong : public Cong
{
private:
    int sohang, dongia;
public:
    void Nhap()
    {
        cout << "So hang: "; cin >> sohang;
        cout << "Don gia: "; cin >> dongia;
        nguoigac = "Ten Lai Buon";
    }
    void Xuat()
    {
        Cong::Xuat();
        cout << "So hang: " << sohang << endl;
        cout << "Don gia: " << dongia << endl;
    }
    string LoaiCong()
    {
        return "Giao Thuong";
    }
    int ThongSo()
    {
        return sohang*dongia;
    }
};

class HocThuat : public Cong
{
private:
    int chiso;
public:
    void Nhap()
    {
        cout << "Chi so tri tue: "; cin >> chiso;
        nguoigac = "Nha Hien Triet";
    }
    void Xuat()
    {
        Cong::Xuat();
        cout << "Chi so tri tue: "<< chiso << endl;

    }
    string LoaiCong()
    {
        return "Hoc Thuat";
    }
    int ThongSo()
    {
        return chiso;
    }
};

class SucManh : public Cong
{
private:
    int sm;
public:
    void Nhap()
    {
        cout << "Chi so suc manh: "; cin >> sm;
        nguoigac = "Dung Si";
    }
    void Xuat()
    {
        Cong::Xuat();
        cout << "Chi so suc manh: "<< sm << endl;

    }
    string LoaiCong()
    {
        return "Suc Manh";
    }
    int ThongSo()
    {
        return sm;
    }
};

class HoangTu
{
private:
    int sm, st, tt;
public:
    void NhapTT()
    {
        cout << "Suc Manh: ";
        cin >> sm;
        cout << "Tri Tue: ";
        cin >> tt;
        cout << "So Tien: ";
        cin >> st;
    }
    void XuatTT()
    {
        cout << "Suc Manh: " << sm << endl;
        cout << "Tri Tue: " << tt << endl;
        cout << "So Tien: " << st << endl;
    }
    int getTien() {return st;}
    int getSM() {return sm;}
    int getTT() {return tt;}
    void setTien(int temp)
    {
        st = st - temp;
    }
    void setSM(int temp)
    {
        sm = sm - temp;
    }
};

class LauDai
{
private:
    int n, pl;
    Cong** ds;
public:
    void NhapDS()
    {
        cout << "So luong cong: ";
        cin >> n;
        ds = new Cong*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Giao Thuong - 2. Hoc Thuat - 3. Suc Manh: ";
            cin >> pl;
            switch (pl)
            {
                case 1:
                    ds[i] = new GiaoThuong();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new HocThuat();
                    ds[i]->Nhap();
                    break;

                case 3:
                    ds[i] = new SucManh();
                    ds[i]->Nhap();
                    break;

                default:
                    break;
            }
        }
    }
    void Xuat()
    {
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
            cout << endl;
        }
    }
    void HoangTuQuaCong(HoangTu &A)
    {
        int i = 0;
        cout << "NHAP THONG TIN HOANG TU: " << endl;
        A.NhapTT();
        cout << "TRO CHOI BAT DAU!\n";
        while (i < n and A.getSM() > 0 and A.getTT() > 0 and A.getTien() > 0)
        {
            if (ds[i]->LoaiCong() == "Giao Thuong")
            {
                if (A.getTien() >= ds[i]->ThongSo())
                {
                    cout << "Qua cong thu: " << i+1 << endl;
                    A.setTien(ds[i]->ThongSo());
                }
                else
                {
                    cout << "Thua tai cong thu: " << i+1 << endl;
                    break;
                }
            }
            else if (ds[i]->LoaiCong() == "Hoc Thuat")
            {
                if (A.getTT() >= ds[i]->ThongSo())
                    cout << "Qua cong thu: " << i+1 << endl;
                else
                {
                    cout << "Thua tai cong thu: " << i+1 << endl;
                    break;
                }
            }
            else if (ds[i]->LoaiCong() == "Suc Manh")
            {
                if (A.getTT() >= ds[i]->ThongSo())
                {
                    cout << "Qua cong thu: " << i+1 << endl;
                    A.setSM(ds[i]->ThongSo());
                }
                else
                {
                    cout << "Thua tai cong thu: " << i+1 << endl;
                    break;
                }
            }
            cout << "Thong so hien tai cua hoang tu tai cong thu " << i+1 << ": " << endl;
            A.XuatTT();
            cout << endl;
            
            if (i == n - 1)
            {
                cout << "Da giai cuu Cong Chua thanh cong! Win!!!\n";
                break;
            }
            
            i++;
        }
    }
    
};


int main()
{
    LauDai H;
    HoangTu A;
    H.NhapDS();
    H.HoangTuQuaCong(A);
}
