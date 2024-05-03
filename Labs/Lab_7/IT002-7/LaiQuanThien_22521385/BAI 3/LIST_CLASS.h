#ifndef LIST_CLASS
#define LIST_CLASS

class LIST
{
    private:
        int n;
        int *loai;
        NGUOI **ds;
    public:
        LIST();
        ~LIST();
        friend istream& operator >> (istream &is, LIST &L);
        friend ostream& operator << (ostream &os, LIST L);
};

#endif
