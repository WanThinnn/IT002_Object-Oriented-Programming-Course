
#ifndef ELIP_CLASS_h
#define ELIP_CLASS_h

using namespace std;

class ELIP
{
    protected:
        static float Pi;
        DIEM F1,F2;
        float F;
        float r1; //ban truc lon
        float r2; //ban truc nho
    public:
        ELIP();
        ~ELIP();
        void Nhap();
        void Xuat();
        DIEM getF1();
        DIEM getF2();
        float getR1();
        float getR2();
        float getF();
        float dientich();
};

#endif
