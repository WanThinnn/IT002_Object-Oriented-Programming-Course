#ifndef DIEM_CLASS_h
#define DIEM_CLASS_h

using namespace std;

class DIEM
{
    private:
        float x,y;
    public:
        DIEM();
        DIEM(float xi, float yi);
        ~DIEM();
        float getX();
        float getY();
        void Nhap();
        void Xuat();
};

#endif /* DIEM_CLASS_h */
