

#ifndef NGHESI_CLASS
#define NGHESI_CLASS


class NGHESI : public NGUOI
{
    private:
        string company, art;
        int salary;
    public:
        NGHESI();
        ~NGHESI();
        friend istream& operator >> (istream& is, NGHESI &A);
        friend ostream& operator << (ostream& os, NGHESI A);
};


#endif
