#ifndef SINHVIEN_CLASS
#define SINHVIEN_CLASS


class SINHVIEN : public NGUOI
{
    private:
        string ID, school;
        float GPA;
    public:
        SINHVIEN();
        ~SINHVIEN();
        friend istream& operator >> (istream& is, SINHVIEN &A);
        friend ostream& operator << (ostream& os, SINHVIEN A);
};


#endif
