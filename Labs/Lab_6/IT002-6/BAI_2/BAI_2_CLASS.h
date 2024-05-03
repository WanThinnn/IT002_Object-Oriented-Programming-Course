using namespace std;

class PHANSO
{
    private:
        int tu, mau;
    public:
        PHANSO(int tu = 0, int mau = 1) : tu(tu), mau(mau) {}
        ~PHANSO() {}
        friend istream& operator >> (istream &is, PHANSO &A);
        friend ostream& operator << (ostream& os, PHANSO A);
        void RutGon() ;
        float Module();
        int ucln(int a, int b);
        friend PHANSO operator + (PHANSO A, PHANSO B);
        friend PHANSO operator - (PHANSO A,PHANSO B);
        friend PHANSO operator * (PHANSO A,PHANSO B);
        friend PHANSO operator / (PHANSO A,PHANSO B);
        friend bool operator == (PHANSO A,PHANSO B);
        friend bool operator != (PHANSO A,PHANSO B);
        friend bool operator > (PHANSO A,PHANSO B);
        friend bool operator >= (PHANSO A,PHANSO B);
        friend bool operator < (PHANSO A,PHANSO B);
        friend bool operator <= (PHANSO A,PHANSO B);
};
