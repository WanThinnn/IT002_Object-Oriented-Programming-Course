#include <iostream>
#include <stdio.h>
using namespace std;

class KyHieu
{
protected:
    float truongdo;
public:
    KyHieu(){}
    ~KyHieu(){}
    virtual void Nhap()
    {
        int td;
        cout << "Nhap Truong Do: \n";
        cout << "1. Tron - 2. Trang - 3. Den - 4. Don - 5. Kep - 6. Tam - 7. Tu: ";
        cin >> td;
        switch (td)
        {
            case 1:
                truongdo = 4;
                break;
            case 2:
                truongdo = 2;
                break;
            case 3:
                truongdo = 1;
                break;
            case 4:
                truongdo = 0.5;
                break;
            case 5:
                truongdo = 0.25;
                break;
            case 6:
                truongdo = 0.125;
                break;
            case 7:
                truongdo = 0.0625;
                break;
            default:
                cout << "Nhap lai!";
                break;
        }
    }
    virtual void Xuat()
    {
        cout << "Truong do: " << truongdo << endl;
    }
    virtual bool DauLangDen()
    {
        return false;
    }
    virtual int CaoDo() = 0;
};

class NotNhac : public KyHieu
{
private:
    int caodo;
public:
    NotNhac() {}
    ~NotNhac() {}
    void Nhap()
    {
        KyHieu::Nhap();
        cout << "Nhap Cao Do:\n";
        cout << "1. Do - 2. Re - 3. Mi - 4. Fa - 5. Sol - 6. La - 7. Si: ";
        int cd;
        cin >> cd;
        caodo = cd;
    }
    void Xuat()
    {
        KyHieu::Xuat();
        cout << "Cao do: " << caodo << endl;
    }
    int CaoDo() {return caodo;}
    bool DauLangDen()
    {
        return false;
        
    }
};

class DauLang : public KyHieu
{
private:
public:
    DauLang() {}
    ~DauLang(){}
    bool DauLangDen()
    {
        if (truongdo == 1)
            return true;
        return false;
    }
    int CaoDo() {return 0;}
    void Xuat()
    {
        KyHieu::Xuat();
        cout << "Cao do: " << CaoDo() << endl;
    }
};

class BaiNhac
{
private:
    int n, pl, S = 0;
    KyHieu** ds;
public:
    void TaoNhac()
    {
        cout << "n = "; cin >> n;
        ds = new KyHieu*[n];
        for (int i = 0; i < n; i ++)
        {
            cout << "1. Not Nhac - 2. Dau Lang: ";
            cin >> pl;
            switch (pl)
            {
                case 1:
                    ds[i] = new NotNhac();
                    ((NotNhac*)ds[i])->Nhap();
                    break;
                case 2:
                    ds[i] = new DauLang();
                    ((DauLang*)ds[i])->Nhap();
                    break;
                default:
                    cout << "Nhap lai!\n";
                    break;
            }
        }
    }
    void XuatNhac()
    {
        for (int i = 0; i < n; i ++){
            ds[i]->Xuat();
            cout << endl;
        }
    }
    int DemDauLang()
    {
        for (int i = 0; i < n; i ++)
            if (ds[i]->DauLangDen() == true)
                S++;
        return S;
    }
    KyHieu* MaxCaoDo()
    {
        KyHieu* temp = NULL;
        int maxcd = -1;
        for (int i = 0; i < n; i ++)
            if (ds[i]->CaoDo() != 0)
                if (ds[i]->CaoDo() > maxcd)
                {
                    maxcd = ds[i]->CaoDo();
                    temp = ds[i];
                }
        return temp;
    }
};

int main()
{
    BaiNhac A;
    A.TaoNhac();
    A.XuatNhac();
    cout << A.DemDauLang() << endl;
    A.MaxCaoDo()->Xuat();
}
