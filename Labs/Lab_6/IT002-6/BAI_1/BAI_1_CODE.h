using namespace std;

istream& operator >> (istream &is, SOPHUC &A)
{
    is >> A.thuc >> A.ao;
    return is;
}

ostream& operator << (ostream& os, SOPHUC A)
{
    os << A.thuc;
    if (A.ao >= 0)
        os << "+" << A.ao << "i";
    else
        os << "-" << abs(A.ao) << "i";
    return os;
}

float SOPHUC::Module()
{
    return sqrt(thuc * thuc + ao * ao);
}


SOPHUC operator + (SOPHUC A, SOPHUC B)
{
    return SOPHUC(A.thuc + B.thuc, A.ao + B.ao);
}

SOPHUC operator - (SOPHUC A, SOPHUC B)
{
    return SOPHUC(A.thuc - B.thuc, A.ao - B.ao);
}

SOPHUC operator * (SOPHUC A, SOPHUC B)
{
    return SOPHUC(A.thuc * B.thuc - A.ao * B.ao, A.ao * B.thuc + A.thuc * B.ao);
}

SOPHUC operator / (SOPHUC A, SOPHUC B)
{
    return SOPHUC((A.thuc * B.thuc - A.ao * B.ao)/(B.thuc * B.thuc + B.ao * B.ao),(A.thuc * B.ao - A.ao * B.thuc)/(B.thuc * B.thuc + B.ao * B.ao));
}

bool operator == (SOPHUC A,SOPHUC B)
{
    return (A.ao = B.ao and A.thuc == B.thuc);
}

bool operator != (SOPHUC A,SOPHUC B)
{
    return (A.ao != B.ao or A.thuc != B.thuc);
}

bool operator > (SOPHUC A,SOPHUC B)
{
    return (A.Module() > B.Module());
}

bool operator >= (SOPHUC A,SOPHUC B)
{
    return (A.Module() >= B.Module());
}

bool operator < (SOPHUC A,SOPHUC B)
{
    return (A.Module() < B.Module());
}

bool operator <= (SOPHUC A,SOPHUC B)
{
    return (A.Module() <= B.Module());
}
