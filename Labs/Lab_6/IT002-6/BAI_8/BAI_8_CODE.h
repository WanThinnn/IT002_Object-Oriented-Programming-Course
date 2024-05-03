#include <iomanip>
#define Pi 3.141592653589793238462643383279502884L

using namespace std;

istream& operator >> (istream &in, CVector &u)
{
    cout << "- Nhap so chieu Vector: ";
    in >> u.dimension;
    cout << "- Nhap cac thanh phan cua vector: ";
    u.components = new double[u.dimension];
    for (int i = 0; i < u.dimension; i++)
    {
        in >> u.components[i];
    }
    return in;
}

istream& operator >> (istream &in, CMatrix &A)
{
    cout << "- Nhap kich co mn cua Ma tran: ";
    in >> A.m >> A.n;
    cout << "- Nhap cac thanh phan cua Matran: " << endl;
    A.components = new double*[A.m]; // cấp phát động cho một con trỏ hai chiều
    for (int i = 0; i < A.m; i++)
    {
        A.components[i] = new double[A.n]; // cấp phát động cho mỗi hàng
        for (int j = 0; j < A.n; j++)
            in >> A.components[i][j];
    }
    return in;
}

ostream& operator << (ostream &out, CVector u)
{
    for (int i = 0; i < u.dimension; i++)
    {
        out << u.components[i] << " ";
    }
    return out;
}

ostream& operator << (ostream &out, const CMatrix A)
{
    for (int i = 0; i < A.m; i++)
    {
        for (int j = 0; j < A.n; j++)
        {
            out << A.components[i][j] << " ";
        }
        out << endl;
    }
    return out;
}


CVector operator + (const CVector u, const CVector v)
{
    if (u.dimension == v.dimension)
    {
        double* comps = new double[u.dimension];
        for (int i = 0; i < u.dimension; i++)
        {
            comps[i] = u.components[i] + v.components[i];
        }
        CVector result(u.dimension, comps);
        delete[] comps;
        return result;
    }
    else
        cout << "Khong xac dinh!";
    return CVector();
}

CMatrix operator + (const CMatrix A, const CMatrix B)
{
    if (A.m == B.m and A.n == B.n)
    {
        double** comps = new double*[A.m];
        for (int i = 0; i < A.m; i++)
        {
            comps[i] = new double[A.n];
            for (int j = 0; j < A.n; j++)
                comps[i][j] = A.components[i][j] + B.components[i][j];
        }
        CMatrix result(A.m, A.n, comps);
        for (int i = 0; i < A.m; i++)
                    delete[] comps[i];
                delete[] comps;
        return result;
    }
    else
    {
        cout << "Khong xac dinh!";
        return CMatrix();
    }
}



CVector operator - (const CVector u, const CVector v)
{
    if (u.dimension == v.dimension)
    {
        double* comps = new double[u.dimension];
        for (int i = 0; i < u.dimension; i++)
        {
            comps[i] = u.components[i] - v.components[i];
        }
        CVector result(u.dimension, comps);
        delete [] comps;
        return result;
    }
    else
        cout << "Khong xac dinh!";
    return CVector();
}

CMatrix operator - (const CMatrix A, const CMatrix B)
{
    if (A.m == B.m and A.n == B.n)
    {
        double** comps = new double*[A.m];
        for (int i = 0; i < A.m; i++)
        {
            comps[i] = new double[A.n];
            for (int j = 0; j < A.n; j++)
                comps[i][j] = A.components[i][j] - B.components[i][j];
        }
        CMatrix result(A.m, A.n, comps);
        for (int i = 0; i < A.m; i++)
                    delete[] comps[i];
                delete[] comps;
        return result;
    }
    else
    {
        cout << "Khong xac dinh!";
        return CMatrix();
    }
}

double operator * (const CVector u, const CVector v)
{
    if (u.dimension == v.dimension)
    {
        double* comps = new double[u.dimension];
        double temp = 0.0;
        for (int i = 0; i < u.dimension; i++)
        {
            comps[i] = u.components[i] * v.components[i];
            temp += comps[i];
        }
        delete [] comps;
        return temp;
    }
    else
    {
        return -99999;
    }
}

CMatrix operator * (const CMatrix A, const CMatrix B)
{
    if (A.n == B.m)
    {
        double** comps = new double*[A.m];
        for (int i = 0; i < A.m; i++)
        {
            comps[i] = new double[B.n];
            for (int j = 0; j < B.n; j++)
            {
                for (int t = 0; t < B.m; ++t)
                {
                    comps[i][j] += (A.components[i][t] * B.components[t][j]);
                }
            }
        }
        CMatrix result(A.m, B.n, comps);
        for (int i = 0; i < A.m; i++)
            delete[] comps[i];
        delete[] comps;
        return result;
    }
        else
        {
            cout << "Khong xac dinh!";
            return CMatrix();
        }
}


CVector TichCoHuong (const CVector u, const CVector v)
{
    if (u.dimension != v.dimension)
    {
        cout << "Khong xac dinh!";
    }
    else if (u.dimension == 3 and v.dimension == 3)
    {
        double* comps = new double[u.dimension];
        comps[0] = u.components[1] * v.components[2] - u.components[2] * v.components[1];
        comps[1] = u.components[2] * v.components[0] - u.components[0] * v.components[2];
        comps[2] = u.components[0] * v.components[1] - u.components[1] * v.components[0];
        CVector result(3, comps);
        delete [] comps;
        return result;
    }
    return CVector();
}

CMatrix operator * (const CMatrix A, const CVector u)
{
    if (A.n == u.getDimension())
    {
        double** comps = new double*[A.m];
        for (int i = 0; i < A.m; i++)
        {
            comps[i] = new double[1];
            comps[i][0] = 0.0;
            for (int t = 0; t < u.getDimension(); ++t)
                comps[i][0] += (A.components[i][t] * u.getComponent(t));
        }
        CMatrix result(A.m, 1, comps);
        for (int i = 0; i < A.m; i++)
            delete[] comps[i];
        delete[] comps;
        return result;
    }
        else
        {
            cout << "Khong xac dinh!";
            return CMatrix();
        }
}


double absVec (const CVector u)
{
    double sumSquares = 0.0;
    for (int i = 0; i < u.getDimension(); i++)
        sumSquares += u.getComponent(i) * u.getComponent(i);
    return sqrt(sumSquares);
}

double Cos (const CVector u, const CVector v)
{
    if (u.dimension != v.dimension || u.dimension < 2 || v.dimension < 2)
        return -2;

    else if (u.getDimension() == v.getDimension())
    {
        if (u.getDimension() == 2 || u.getDimension() == 3)
            return acos((u*v) / (absVec(u) * absVec(v))) * 180 / Pi;
    }

    return -2;
}

bool IsPerpendicular(const CVector u, const CVector v)
{
    if (u.getDimension() != v.getDimension())
        return false;
    else if (u.getDimension() == v.getDimension())
    {
        if (u.getDimension() == 2 or u.getDimension() == 3)
            if (int(u*v) == 0)
                return true;
    }
    return false;
}
