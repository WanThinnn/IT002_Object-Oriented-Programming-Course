#include <iostream>
#include "VATNUOI_DA_HINH.hpp"

using namespace std;

class CONVAT
{
    protected:
        char *ten;
    public:
        CONVAT() {ten = NULL;}
        CONVAT(char *t) { ten = strdup(t);}
        virtual void xungten();
};

class MEO : public CONVAT
{
    public:
        MEO(): CONVAT(){}
        MEO(char *ten): CONVAT(ten) { }
        void xungten() {cout << "\nToi la chu meo " << ten;}
};

class CHO : public CONVAT
{
    public:
        CHO() : CONVAT() {}
        CHO(char *ten) : CONVAT(ten) {}
        void xungten() {cout << "\nToi la chu cho " << ten; }
};

class DS_CONVAT
{
    private:
        int soconvat_hienco;
        int soconvat_toida;
        CONVAT **ds;
    public:
        DS_CONVAT(int max)
        {
            soconvat_hienco = 0;
            soconvat_toida = max;
            ds = new CONVAT*[max];
            for (int i = 0; i < max; ++i)
                ds[i] = NULL;
        }
        int nhap(CONVAT* c);
        CONVAT* xuat(int n);
        void thongke();
};
