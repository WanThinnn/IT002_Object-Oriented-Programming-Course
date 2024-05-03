#ifndef LIST_CLASS
#define LIST_CLASS

class LIST
{
    private:
        int sl_GS;
        int sl_Bo_parents;
        int sl_De_parents;
        int sl_Cuu_parents;
        GIASUC** ds;
    public:
        LIST();
        ~LIST();
        friend istream& operator >> (istream &is, LIST &L);
        friend ostream& operator << (ostream &os, LIST L);
        void Amthanh_bi_bodoi();
};

#endif
