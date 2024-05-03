using namespace std;

class SOPHUC
{
    private:
        float thuc, ao;
    public:
        SOPHUC(double thuc = 0.0, double ao = 0.0) : thuc(thuc), ao(ao) {}
        ~SOPHUC() {}
        friend istream& operator >> (istream &is, SOPHUC &A);
        friend ostream& operator << (ostream& os, SOPHUC A);
        float Module();
        friend SOPHUC operator + (SOPHUC A, SOPHUC B);
        friend SOPHUC operator - (SOPHUC A,SOPHUC B);
        friend SOPHUC operator * (SOPHUC A,SOPHUC B);
        friend SOPHUC operator / (SOPHUC A,SOPHUC B);
        friend bool operator == (SOPHUC A,SOPHUC B);
        friend bool operator != (SOPHUC A,SOPHUC B);
        friend bool operator > (SOPHUC A,SOPHUC B);
        friend bool operator >= (SOPHUC A,SOPHUC B);
        friend bool operator < (SOPHUC A,SOPHUC B);
        friend bool operator <= (SOPHUC A,SOPHUC B);
};
