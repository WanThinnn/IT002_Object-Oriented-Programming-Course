#include <iostream>
#include <cmath>

using namespace std;

class PHANSO
{
    private:
        int tu, mau;
    public:
    PHANSO();
    PHANSO(int tsm, int msm);
    PHANSO(int T);
    ~PHANSO() {}
    friend istream& operator >> (istream &is, PHANSO &A);
    friend ostream& operator << (ostream& os, PHANSO A);
    friend PHANSO operator + (PHANSO A, PHANSO B);
    PHANSO operator--(int);
       
};

PHANSO::PHANSO(int tsm, int msm)
{
    tu = tsm;
    mau = msm;
}
PHANSO::PHANSO()
{
    tu = 0;
    mau = 1;
}

PHANSO::PHANSO(int T)
{
    tu = T;
    mau = 1;
}

istream& operator >> (istream &is, PHANSO &A)
{
    is >> A.tu >> A.mau;
    return is;
}

ostream& operator << (ostream& os, PHANSO C)
{
    if (C.mau > 0)
        os << C.tu << "/" << C.mau;
    else
        os << -C.tu << "/" << abs(C.mau);
    return os;
}


PHANSO operator + (PHANSO A, PHANSO B)
{
    return PHANSO(A.tu*B.mau + A.mau*B.tu, A.mau*B.mau);
}

PHANSO PHANSO::operator -- (int)
{
    PHANSO temp = *this;
    tu = tu - mau;
    return temp;
}


int main()
{
    PHANSO ps1, ps2(-2, 3), ps3;
    cin >> ps1;
    ps3 = 5 + ps1 + ps2--;
    cout << "psl = " << ps1 << endl<< "ps2 = " << ps2 << endl << "ps3 = "<< ps3 << endl;

    
}


