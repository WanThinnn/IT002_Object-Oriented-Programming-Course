
#ifndef CASI_CLASS
#define CASI_CLASS


class CASI : public NGUOI
{
    private:
        string company, kind;
        int salary;
    public:
        CASI();
        ~CASI();
        friend istream& operator >> (istream& is, CASI &A);
        friend ostream& operator << (ostream& os, CASI A);
};


#endif
