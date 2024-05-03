#include <iostream>
#include <stdio.h>

using namespace std;

class Game
{
protected:
    float st;
    string he; int he_int;
    int cap;
public:
    virtual void NhapNVG()
    {
        cout << "Nhap Cap: ";
        cin >> cap;
        cout << "Nhap He" << endl;
        cout << "0. Kim - 1. Moc - 2. Thuy - 3. Hoa - 4. Tho: ";
        int temp;
        cin >> temp;
        switch (temp)
        {
            case 0:
                he = "Kim"; he_int = 0;
                break;
            case 1:
                he = "Moc"; he_int = 1; break;
            case 2:
                he = "Thuy"; he_int = 2; break;
            case 3:
                he = "Hoa"; he_int = 3; break;
            case 4:
                he = "Tho"; he_int = 4; break;
        }
    }
    virtual void XuatNVG()
    {
        cout << "Cap do: " << cap << endl;
        cout << "He: " << he << endl;
    }
    string getHe() {return he;}
    virtual float getST() = 0;
    bool SoSanh(Game* B)
    {
        float stAB = st;
        float stBA = B->getST();
        string bhe = B->getHe();
        if ((he == "Kim" and bhe == "Thuy") or (he == "Thuy" and bhe == "Moc") or (he == "Moc" and bhe == "Hoa") or (he == "Hoa" and bhe == "Tho") or(he == "Tho" and bhe == "Kim"))
            stAB = st*1.1;
        else if ((he == "Kim" and bhe == "Moc") or (he == "Moc" and bhe == "Tho") or (he == "Tho" and bhe == "Thuy") or (he == "Thuy" and bhe == "Hoa") or(he == "Hoa" and bhe == "Kim"))
        {
            stAB = st*1.2;
            stBA = B->getST()*0.8;
        }
        else if ((bhe == "Kim" and he == "Moc") or (bhe == "Moc" and he == "Tho") or (bhe == "Tho" and he == "Thuy") or (bhe == "Thuy" and he == "Hoa") or(bhe == "Hoa" and he == "Kim"))
        {
            stBA = st*1.2;
            stAB = B->getST()*0.8;
        }
        if (stAB > stBA)
            return true;
        return false;
    }
};

class NhanVat : public Game
{
private:
    string monphai;
public:
    void NhapNVG()
    {
        Game::NhapNVG();
        int temp;
        cout << "Nhap Mon Phai: " << endl;
        switch (he_int)
        {
            case 0:
                cout << "1. Thieu Lam - 2. Thien Vuong: ";
                cin >> temp;
                if (temp == 1) monphai = "Thieu Lam";
                else if (temp == 2) monphai = "Thieu Lam";
                break;
            case 1:
                cout << "1. Ngu Doc - 2. Duong Mon: ";
                cin >> temp;
                if (temp == 1) monphai = "Ngu Doc";
                else if (temp == 2) monphai = "Duong Mon";
                break;
                
            case 2:
                cout << "1. Nga My - 2. Thuy Yen: ";
                cin >> temp;
                if (temp == 1) monphai = "Nga My";
                else if (temp == 2) monphai = "Thuy Yen";
                break;
            case 3:
                cout << "1. Cai Bang - 2. Thien Nhan: ";
                cin >> temp;
                if (temp == 1) monphai = "Cai Bang";
                else if (temp == 2) monphai = "Thien Nhan";
                break;
            case 4:
                cout << "1. Con Lon - 2. Vo Dang: ";
                cin >> temp;
                if (temp == 1) monphai = "Con Lon";
                else if (temp == 2) monphai = "Vo Dang";
                break;
            default:
                break;
        }
        st = cap*5;
    }
    void XuatNVG()
    {
        Game::XuatNVG();
        cout << "Mon phai: " << monphai << endl;
        cout << "Sat thuong: " << st << endl;
    }
    string getHe()
    {
        return he;
    }
    float getST()
    {
        return st;
    }
};

class QuaiVat : public Game
{
private:
    string loai;
public:
    void NhapNVG()
    {
        Game::NhapNVG();
        cout << "Nhap loai quai: " << endl;
        cout << "1. Thong Thuong - 2. Dau Linh: ";
        int t;
        cin >> t;
        if (t == 1)
        {
            loai = "Thong Thuong";
            st = cap*3;
        }
        else if (t == 2)
        {
            loai = "Dau Linh";
            st = cap*7;
        }
    }
    void XuatNVG()
    {
        Game::XuatNVG();
        cout << "Loai quai vat: " << loai << endl;
        cout << "Sat thuong: " << st << endl;
    }
    string getHe()
    {
        return he;
    }
    float getST()
    {
        return st;
    }
};

class HeThong
{
private:
    int n, pl;
    Game** ds;
public:
    void NhapDS()
    {
      cout << "So luong nhan vat game: ";
      cin >> n;
      ds = new Game*[n];
      for (int i = 0; i < n; i++)
      {
          cout << "1. Nhan Vat - 2. Quai Vat: ";
          cin >> pl;
          switch (pl)
          {
              case 1:
                  ds[i] = new NhanVat();
                  ds[i]->NhapNVG();
                  break;
              case 2:
                  ds[i] = new QuaiVat();
                  ds[i]->NhapNVG();
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
            ds[i]->XuatNVG();
            cout << endl;
        }
    }
    Game* MaxST()
    {
        Game* Temp = NULL;
        float max = -1;
        for (int i = 0; i < n; i++)
            if (ds[i]->getST() > max)
            {
                max = ds[i]->getST();
                Temp = ds[i];
            }
        return Temp;
    }
    vector <Game*> DanhSach(float st);
    
    void SoSanhAB()
    {
        int i, j;
        cout << "Chon phan tu so sanh: ";
        cin >> i >> j;
        bool comp = ds[i]->SoSanh(ds[j]);
        if (comp == true)
            cout << "A manh hon B";
        else
            cout << "B manh hon A";
        cout << endl;
    }
};

vector <Game*> HeThong::DanhSach(float st)
{
    vector <Game*> temp;
    for (int i = 0; i < n; i++)
        if (ds[i]->getST() > st)
            temp.push_back(ds[i]);
    return temp;
}

int main()
{
    HeThong A;
    A.NhapDS();
    A.XuatDS();
    cout << "Max: \n";
    A.MaxST()->XuatNVG(); cout << endl;
    A.SoSanhAB();
    vector <Game*> res = A.DanhSach(6);
    for (auto i : res)
    {
        i->XuatNVG();
        cout << endl;
    }
}
