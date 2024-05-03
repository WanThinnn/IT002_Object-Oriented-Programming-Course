#ifndef B1_CLASS_NV
#define B1_CLASS_NV
#include <string>
#include <iostream>
using namespace std;
class NHANVIEN
{
    protected:
        string Name, Bday;
        int Salary;
    public:
        NHANVIEN();
        ~NHANVIEN();
        void Nhap();
        void Xuat();
};

#endif
