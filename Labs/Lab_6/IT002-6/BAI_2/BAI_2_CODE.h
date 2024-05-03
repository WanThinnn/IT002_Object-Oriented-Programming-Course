using namespace std;

int PHANSO::ucln(int a, int b)
{
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return ucln(b, a%b);
}

void PHANSO::RutGon()
{
        int uscln = ucln(tu, mau);
        tu /= uscln;
        mau /= uscln;
}

istream& operator >> (istream &is, PHANSO &A)
{
    is >> A.tu >> A.mau;
    return is;
}

ostream& operator << (ostream& os, PHANSO C)
{
    C.RutGon();
    if (C.mau > 0)
        os << C.tu << "/" << C.mau;
    else
        os << -C.tu << "/" << abs(C.mau);
    return os;
}



float PHANSO::Module()
{
    return (float)tu/mau;
}


PHANSO operator + (PHANSO A, PHANSO B)
{
    return PHANSO(A.tu*B.mau + A.mau*B.tu, A.mau*B.mau);
}

PHANSO operator - (PHANSO A, PHANSO B)
{
    return PHANSO(A.tu*B.mau - A.mau*B.tu, A.mau*B.mau);
}

PHANSO operator * (PHANSO A, PHANSO B)
{
    return PHANSO(A.tu*B.tu, A.mau*B.mau);
}

PHANSO operator / (PHANSO A, PHANSO B)
{
    return PHANSO(A.tu*B.mau, A.mau*B.tu);
}

bool operator == (PHANSO A,PHANSO B)
{
    return (A.tu == B.tu and A.mau == B.mau);
}

bool operator != (PHANSO A,PHANSO B)
{
    return (A.tu != B.tu or A.mau != B.mau);
}

bool operator > (PHANSO A,PHANSO B)
{
    return (A.Module() > B.Module());
}

bool operator >= (PHANSO A,PHANSO B)
{
    return (A.Module() >= B.Module());
}

bool operator < (PHANSO A,PHANSO B)
{
    return (A.Module() < B.Module());
}

bool operator <= (PHANSO A,PHANSO B)
{
    return (A.Module() <= B.Module());
}
