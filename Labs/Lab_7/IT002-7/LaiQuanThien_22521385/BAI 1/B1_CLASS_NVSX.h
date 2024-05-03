#ifndef B1_CLASS_NVSX
#define B1_CLASS_NVSX
#include <iostream>

using namespace std;

class NV_SANXUAT : public NHANVIEN
{
    private:
        int luong;
        int luongcanban;
        int sosanpham;
    public:
        NV_SANXUAT();
        ~NV_SANXUAT();
        void Nhap();
        void Xuat();
        int tinhLuong();
        int getLuong();
};

#endif
