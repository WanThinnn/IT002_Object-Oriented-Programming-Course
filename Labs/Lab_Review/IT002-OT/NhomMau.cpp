//
//  NhomMau.cpp
//  IT002-OT
//
//  Created by Thinnn on 03/07/2023.
//

#include <stdio.h>
#include <iostream>

using namespace std;


class NhomMau
{
protected:
    string Rh;
public:

    void Nhap()
    {
        cout << "Rh: ";
        cin >> Rh;
    }
    string GetRh() {return Rh;}
    virtual bool KTDiTruyen(string me, string con) = 0;
    virtual string GetTen() = 0;
    virtual bool TuongThich(string cho, string rh) = 0;
};

class NhomA : public NhomMau
{
public:

    bool KTDiTruyen(string me, string con)
    {
        if (me == "A")
        {
            if (con == "A" or con == "O")
                return true;
        }
        else if (me == "B")
        {
            if (con == "A" or con == "B" or con == "AB" or con == "O")
                return true;
        }
        else if (me == "O")
        {
            if (con == "A" or con == "O")
                return true;
        }
        else if (me == "AB")
        {
            if (con == "A" or con == "B" or con == "AB")
                return true;
        }
        return false;
    }
    string GetTen() {return "A";}
    bool TuongThich(string cho, string rh)
    {
        if (Rh == "+")
        {
            if (cho == "A" or cho == "O")
                return true;
        }
        else if (Rh == "-")
        {
            if ((cho == "A" or cho == "O") and (rh == "-"))
                return true;
        }
        return false;
    }
};

class NhomB : public NhomMau
{
public:

    bool KTDiTruyen(string me, string con)
    {
        if (me == "B")
        {
            if (con == "B" or con == "O")
                return true;
        }
        else if (me == "A")
        {
            if (con == "A" or con == "B" or con == "AB" or con == "O")
                return true;
        }
        else if (me == "O")
        {
            if (con == "B" or con == "O")
                return true;
        }
        else if (me == "AB")
        {
            if (con == "A" or con == "B" or con == "AB")
                return true;
        }
        return false;
    }
    string GetTen() {return "B";}
    bool TuongThich(string cho, string rh)
    {
        if (Rh == "+")
        {
            if (cho == "B" or cho == "O")
                return true;
        }
        else if (Rh == "-")
        {
            if ((cho == "B" or cho == "O") and (rh == "-"))
                return true;
        }
        return false;
    }
};


class NhomO : public NhomMau
{
public:

    bool KTDiTruyen(string me, string con)
    {
        if (me == "B")
        {
            if (con == "B" or con == "O")
                return true;
        }
        else if (me == "A")
        {
            if (con == "A" or con == "O")
                return true;
        }
        else if (me == "O")
        {
            if ( con == "O")
                return true;
        }
        else if (me == "AB")
        {
            if (con == "A" or con == "B")
                return true;
        }
        return false;
    }
    string GetTen() {return "O";}
    bool TuongThich(string cho, string rh)
    {
        if (Rh == "+")
        {
            if (cho == "O")
                return true;
        }
        else if (Rh == "-")
        {
            if ((cho == "O") and (rh == "-"))
                return true;
        }
        return false;
    }
};

class NhomAB : public NhomMau
{
public:

    bool KTDiTruyen(string me, string con)
    {
        if (me == "B")
        {
            if (con == "B" or con == "A" or con == "AB")
                return true;
        }
        else if (me == "A")
        {
            if (con == "B" or con == "A" or con == "AB")
                return true;
        }
        else if (me == "AB")
        {
            if (con == "B" or con == "A" or con == "AB")
                return true;
        }
        else if (me == "O")
        {
            if (con == "A" or con == "B")
                return true;
        }
        return false;
    }
    string GetTen() {return "AB";}
    bool TuongThich(string cho, string rh)
    {
        if (Rh == "+")
        {
            if (cho == "O" or cho == "AB" or cho == "A" or cho == "B")
                return true;
        }
        else if (Rh == "-")
        {
            if ((cho == "O" or cho == "AB" or cho == "A" or cho == "B") and (rh == "-"))
                return true;
        }
        return false;
    }
};

class NhomNguoi
{
private:
    int n, pl;
    NhomMau** ds;
public:
    void NhapDS(){
        cout << "n = ";
        cin >> n;
        ds = new NhomMau*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1.A - 2.B - 3.O - 4.AB: ";
            cin >> pl;
            cin.ignore();
            switch (pl)
            {
                case 1:
                    ds[i] = new NhomA();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new NhomB();
                    ds[i]->Nhap();
                    break;
                case 3:
                    ds[i] = new NhomO();
                    ds[i]->Nhap();
                    break;
                case 4:
                    ds[i] = new NhomAB();
                    ds[i]->Nhap();
                    break;
            }
        }
    }
    bool KTDT()
    {
        int i, j, k;
        cout << "Nhap lan luot vi tri cha -> me -> con: ";
        cin >> i >> j >> k;
        return ds[i]->KTDiTruyen(ds[j]->GetTen(), ds[k]->GetTen());
    }
    void ChoMau()
    {
        int x;
        cout << "Vi tri nguoi nhan mau: ";
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (i != x)
            {
                if ((ds[x]->TuongThich(ds[i]->GetTen(), ds[i]->GetRh())) == true)
                    cout << "Nguoi thu: " << i + 1 << " cho mau DUOC" << endl;
                else
                    cout << "Nguoi thu: " << i + 1 << " cho mau KHONG DUOC" << endl;
            }
        }
    }
};


int main()
{
    NhomNguoi A;
    A.NhapDS();
    if (A.KTDT())
        cout << "Di Truyen OK" << endl;
    else
        cout << "Sai quy luat di truyen" << endl;
    A.ChoMau();
}
