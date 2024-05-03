#ifndef GIASUC_CLASS
#define GIASUC_CLASS

using namespace std;
class GIASUC
{
    protected:
        int n;
        int nlitsua;
        string tiengkeu;
    public:
        GIASUC();
        ~GIASUC();
        int getCon();
        int getSua();
        friend ostream& operator << (ostream &os, GIASUC A);
        string GiasucDoi();
};

#endif
