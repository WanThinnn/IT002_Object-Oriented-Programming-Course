#ifndef CONGNHAN_CLASS
#define CONGNHAN_CLASS


class CONGNHAN : public NGUOI
{
    private:
        string ID, company;
        int salary;
    public:
        CONGNHAN();
        ~CONGNHAN();
        friend istream& operator >> (istream& is, CONGNHAN &A);
        friend ostream& operator << (ostream& os, CONGNHAN A);
};


#endif
