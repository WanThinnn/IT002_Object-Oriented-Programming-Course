#ifndef HINHHOC_CLASS_h
#define HINHHOC_CLASS_h

using namespace std;

class HINHHOC
{
    public:
    HINHHOC();
    ~HINHHOC();
        virtual void NhapHinh() = 0;
        virtual void XuatHinh() = 0;
        virtual double DienTich() = 0;
        virtual void VeHinh() = 0;
        
};


#endif
