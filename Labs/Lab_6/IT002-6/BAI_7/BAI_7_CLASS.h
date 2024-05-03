using namespace std;
class Polynomial
{
    private:
        float* coefficients; // Lưu trữ các hệ số của đa thức
        float degree; // Bậc của đa thức

    public:
        //Constructer and Destructer
        Polynomial() : coefficients(nullptr), degree(0) {}
        Polynomial(int deg, float* coeffs) : degree(deg)
        {
            coefficients = new float[degree + 1];
            for (int i = 0; i <= degree; i++)
            {
                coefficients[i] = coeffs[i];
            }
        }
//        ~Polynomial() {}
//        ~Polynomial() {delete coefficients;}
        
        //Cac ham get, set:
        static int getDegree(float *coeffs, float currDegree)
        {
            for (int i = currDegree; i >= 0; i--)
            {
                if (coeffs[i] != 0)
                {
                    return i;
                }
            }
            return 0;
        }
    
        //Cac ham tinh F(x) khi x = coeff:
        float calPoly(float coeff)
        {
            float res = 0;
            for (int i = 0; i <= degree; i++)
            {
                res += coefficients[i] * pow(coeff, i);
            }
            return res;
        }
        
        float calPoly(int deg, float coeff, float* coeffs)
        {
            float res = 0;
            for (int i = 0; i <= deg; i++)
            {
                res += coeffs[i] * pow(coeff, i);
            }
            return res;
        }
    
        float calPoly(float coeff, float* coeffs)
        {
            float res = 0;
            for (int i = 0; i <= degree; i++)
            {
                res += coeffs[i] * pow(coeff, i);
            }
            return res;
        }
    
        //Cac ham Operator:
        friend istream& operator >> (istream& is, Polynomial &F);
        friend ostream& operator << (ostream& os, const Polynomial F);
        friend Polynomial operator + (Polynomial F, Polynomial G);
        friend Polynomial operator - (Polynomial F, Polynomial G);
        friend Polynomial operator * (Polynomial F, Polynomial G);
        friend Polynomial operator / (Polynomial F, Polynomial G);
};
