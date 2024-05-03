//
//  VuotRung.cpp
//  IT002-OT
//
//  Created by Thinnn on 04/07/2023.
//
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
class ChuongNgaiVat
{
protected:
public:
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual int Loai() = 0;
};

class RungChong : public ChuongNgaiVat
{
private:
    int chieucao[7];
    int tao;
public:
    void Nhap()
    {
        cout << "NHAP CHIEU CAO 7 CAY CHONG: ";
        for (int i = 0; i < 7; i++)
            cin >> chieucao[i];
        cout << "NHAP SUC MANH QUA TAO: ";
        cin >> tao;

    }
    void Xuat()
    {
        cout << "CHIEU CAO 7 CAY CHONG: ";
        for (int i = 0; i < 7; i++)
            cout << chieucao[i] << " ";
        cout << endl;
        cout << "SUC MANH QUA TAO: " << tao << endl;
        
    }
    int Loai() {return 1;}
    int Tao() {return tao;}
    int ChieuCao(int i) {return chieucao[i];}
};

class DuongHam : public ChuongNgaiVat
{
private:
    int n;
    int* chieucao;
public:
    void Nhap()
    {
        cout << "SO COT MOC: "; cin >> n;
        chieucao = new int[n];
        cout << "NHAP CHIEU CAO DUONG HAM: ";
        for (int i = 0; i < n; i++)
            cin >> chieucao[i];
        sort(chieucao, chieucao + n);
    }
    void Xuat()
    {
        cout << "CHIEU CAO DUONG HAM: ";
        for (int i = 0; i < n; i++)
            cout << chieucao[i] << " ";
        cout << endl;
        
    }
    int MinChieuCao() {return chieucao[0];}
    int Loai() {return 2;}
};
class QuaiVat : public ChuongNgaiVat
{
private:
    int sucmanh[5];
public:
    void Nhap()
    {
        cout << "NHAP 5 SUC MANH QUAI VAT: ";
        for (int i = 0; i < 5; i++)
            cin >> sucmanh[i];
    }
    void Xuat()
    {
        cout << "SUC MANH QUAI VAT: ";
        for (int i = 0; i < 5; i++)
            cout << sucmanh[i] << " ";
        cout << endl;
        
    }
    int SucManh(int i) {return sucmanh[i];}
    int Loai() {return 3;}
};


class NguoiChoi
{
private:
    int sucnhay[7];
    int chieucao;
    int sucmanh[5];
public:
    void NhapNguoiChoi()
    {
        cout << "SUC NHAY: ";
        for (int i = 0; i < 7; i++)
            cin >> sucnhay[i];
        cout << "CHIEU CAO: "; cin >> chieucao;
        cout << "SUC MANH: ";
        for (int i = 0; i < 5; i++)
            cin >> sucmanh[i];
    }
    void Xuat()
    {
        cout << "SUC NHAY: ";
        for (int i = 0; i < 7; i++)
            cout <<  sucnhay[i] << " ";
        cout << endl;
        cout << "CHIEU CAO: " << chieucao << endl;
        cout << "SUC MANH: ";
        for (int i = 0; i < 5; i++)
            cout << sucmanh[i] << " ";
        cout << endl;
    }
    void setSM(int t)
    {
        for (int i = 0; i < 5; i++)
            sucmanh[i] += t;
    }
    int SM(int i) {return sucmanh[i];}
    int CC() {return chieucao;}
    int SN(int i) {return sucnhay[i];}
};

class Game
{
private:
    int n, pl;
    NguoiChoi A;
    ChuongNgaiVat** ds;
public:
    void NhapDS()
    {
        cout << "SO CHUONG NGAI VAT THOA [1;49]: ";
        cin >> n;
        ds = new ChuongNgaiVat*[n];
        for (int i = 0; i < n; i++)
        {
            cout << "1. Rung Chong - 2. Duong Ham - 3. Quai Vat: ";
            cin >> pl;
            switch (pl)
            {
                case 1:
                    ds[i] = new RungChong();
                    ds[i]->Nhap();
                    break;
                case 2:
                    ds[i] = new DuongHam();
                    ds[i]->Nhap();
                    break;
                case 3:
                    ds[i] = new QuaiVat();
                    ds[i]->Nhap();
                    break;
                default:
                    break;
            }
        }
    }
    void XuatDS()
    {
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
            cout << endl;
        }
    }
    bool ChoiGame()
    {
        bool res = true;
        cout << "THONG TIN NGUOI CHOI: \n";
        A.NhapNguoiChoi();
        for (int i = 0; i < n; i++)
        {
            if (ds[i]->Loai() == 1)
            {
                A.setSM(((RungChong*)ds[i])->Tao());
                for (int j = 0; j < 7; j++)
                    if (A.SN(j) < (((RungChong*)ds[i])->ChieuCao(j)))
                    {
                        res = false;
                        break;
                    }
            }
            else if (ds[i]->Loai() == 2)
            {
                if (A.CC() > (((DuongHam*)ds[i])->MinChieuCao()))
                {
                    res = false;
                    break;
                }
            }
            else if (ds[i]->Loai() == 3)
            {
                int a = 0, b = 0;
                for (int j = 0; j < 5; j++)
                {
                    if (A.SM(j) > (((QuaiVat*)ds[i])->SucManh(j)))
                        a++;
                    else if (A.SM(j) < (((QuaiVat*)ds[i])->SucManh(j)))
                        b++;
                }
                if (b > a)
                {
                    res = false;
                    break;
                }
            }
        }
        return res;
    }
    
};


int main()
{
    Game A;
    A.NhapDS();
    if (A.ChoiGame())
        cout << "WIN" << endl;
    else
        cout << "LOSE" << endl;
//    A.XuatDS();
}
