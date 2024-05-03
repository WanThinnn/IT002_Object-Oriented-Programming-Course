using namespace std;

class CVector
{
    private:
        int dimension;
        double* components;
    public:
        CVector() :  components(NULL), dimension(0){}
        CVector(int dim, const double* comps) : dimension(dim)
        {
            components = new double[dimension];
            for (int i = 0; i < dimension; i++)
                components[i] = comps[i];
        }
        ~CVector () {}
        int getDimension() const {return dimension;}
        double getComponent (int index) const
        {
            if (index < 0 or index >= dimension)
            {
                cout << "Error: Index out of range!" << endl;
                exit(0);
            }
            return components[index];
        }
        void setComponent (int index, double value)
        {
                if (index < 0 or index >= dimension)
                {
                    // Xử lý lỗi khi truy cập vượt qua chỉ số
                    cout << "Error: Index out of range!" << endl;
                    exit(1);
                }
                components[index] = value;
        }
        friend class CMatrix;
        friend istream& operator >> (istream &in, CVector &u);
        friend ostream& operator << (ostream &out, CVector u);
        friend CVector operator + (const CVector u, const CVector v);
        friend CVector operator - (const CVector u, const CVector v);
        friend double operator * (const CVector u, const CVector v);
        friend CVector TichCoHuong (const CVector u, const CVector v);
        friend double Cos (const CVector u, const CVector v);
        friend double absVec (const CVector u);
        friend bool IsPerpendicular(const CVector u, const CVector v);
};

class CMatrix
{
private:
    int m, n;
    double** components;
public:
    CMatrix() :  components(NULL), m(0), n(0) {}
    CMatrix(int rows, int cols, const double* const *comps) : m(rows), n(cols)
    {
        components = new double*[m];
        for (int i = 0; i < m; i++)
        {
            components[i] = new double[n];
            for (int j = 0; j < n; j++)
            {
                components[i][j] = comps[i][j];
            }
        }
    }
    ~CMatrix () {}
    int getRows() const {return m;}
    int getCols() const {return n;}
    double getComponent(int i, int j) const
    {
        if (i < 0 or j < 0 or i >= m or j >= n)
        {
            cout << "Error: Index out of range!" << endl;
            exit(0);
        }
        return components[i][j];
    }
    void setComponent(int i, int j, double value)
    {
        if (i < 0 or j < 0 or i >= m or j >= n)
        {
            cout << "Error: Index out of range!" << endl;
            exit(0);
        }
            components[i][j] = value;
    }
    friend class CVecotr;
    friend istream& operator >> (istream &in, CMatrix &A);
    friend ostream& operator << (ostream &out, CMatrix A);
    friend CMatrix operator + (const CMatrix A, const CMatrix B);
    friend CMatrix operator - (const CMatrix A, const CMatrix B);
    friend CMatrix operator * (const CMatrix A, const CMatrix B);
    friend CMatrix operator * (const CMatrix A, const CVector u);
};
