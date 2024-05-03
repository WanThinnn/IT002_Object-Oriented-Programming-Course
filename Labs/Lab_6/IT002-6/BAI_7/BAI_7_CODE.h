using namespace std;

istream& operator >> (istream& is, Polynomial &F)
{
   
    cout << "- Nhap da thuc bac: ";
    is >> F.degree;
    cout << "- Nhap cac he so tu bac " << F.degree << " -> 0: ";
    F.coefficients = new float[F.degree + 1];
    for (int i = F.degree; i >= 0; --i) {
        is >> F.coefficients[i];
    }
    return is;
}

ostream& operator << (ostream& os, const Polynomial F)
{
    for (int i = F.degree; i > 1; i--)
    {
        if (F.coefficients[i] == 1)
            os << "x^" << i;
        else
            os << F.coefficients[i] << "x^" << i;
        if (i > 1)
        {
            os << " + ";
        }
    }
//    os << ((F.coefficients[1] == 1) ? "x" : (to_string(F.coefficients[1]) + "x")) << " + ";
    if (F.coefficients[1] == 1)
        os << "x + " ;
    else if (F.coefficients[1] != 1)
        os << F.coefficients[1] << "x + ";
    os << F.coefficients[0];
    return os;
}

Polynomial operator + (Polynomial F, Polynomial G)
{
    float maxDegree = max(F.degree, G.degree);
    float* coeffs = new float[maxDegree + 1];
    for (int i = 0; i <= maxDegree; i++)
    {
        float coef1 = (i <= F.degree) ? F.coefficients[i] : 0;
        float coef2 = (i <= G.degree) ? G.coefficients[i] : 0;
        coeffs[i] = coef1 + coef2;
    }
    Polynomial result(maxDegree, coeffs);
    delete[] coeffs;
    return result;
}

Polynomial operator - (Polynomial F, Polynomial G)
{
    float maxDegree = max(F.degree, G.degree);
    float* coeffs = new float[maxDegree + 1];
    for (int i = 0; i <= maxDegree; i++)
    {
        float coef1 = (i <= F.degree) ? F.coefficients[i] : 0;
        float coef2 = (i <= G.degree) ? G.coefficients[i] : 0;
        coeffs[i] = coef1 - coef2;
    }
    Polynomial result(maxDegree, coeffs);
    delete[] coeffs;
    return result;
}

Polynomial operator * (Polynomial F, Polynomial G)
{
        float maxDegree = F.degree + G.degree;
        float maxD_t = maxDegree;
        float* coeffs = new float[maxDegree + 1];
        float temp[] = {0};
        Polynomial Res;
        Polynomial result(0,temp);
        for (int i = F.degree; i >= 0; i--)
        {
            for (int j = G.degree; j >= 0; j--)
            {
                coeffs[i+j] = F.coefficients[i] * G.coefficients[j];
            }
            Polynomial Res(maxD_t, coeffs);
            result = result + Res;
            maxD_t--;
        }
    delete [] coeffs;
    return result;
}

Polynomial operator / (Polynomial F, Polynomial G)
{
    if (G.degree == 0 and G.coefficients[0] == 0)
    {
        cout << "Error: Divide by zero!" << endl;
        exit(0);
    }
    else if (G.degree == 0 and G.coefficients[0] != 0)
    {
        for (int i = F.degree; i >= 0; i--)
        {
            F.coefficients[i] = F.coefficients[i] / G.coefficients[0];
        }
        return F;
    }
    else if (G.degree != 0 or G.coefficients[0] != 0)
    {
        int maxDegree = F.degree - G.degree;
        float *quotientCoeffs = new float[maxDegree + 1];
        
        Polynomial remainder = F;
        while (remainder.degree >= G.degree)
        {
            int currDegree = remainder.degree - G.degree;
            int factor = remainder.coefficients[int(remainder.degree)] / G.coefficients[int(G.degree)];
            
            quotientCoeffs[currDegree] = factor;
            
            for (int i = 0; i <= G.degree; ++i)
            {
                remainder.coefficients[currDegree + i] -= factor * G.coefficients[i];
            }
            
            remainder.degree = Polynomial::getDegree(remainder.coefficients, remainder.degree);
        }
        Polynomial quotient(maxDegree, quotientCoeffs);
        delete[] quotientCoeffs;
        return quotient;
    }
    return Polynomial();
}
