#ifndef B1_CLASS_LIST
#define B1_CLASS_LIST
#include "B1_CLASS_NV.h"
#include "B1_CLASS_NVVP.h"
#include "B1_CLASS_NVSX.h"
class LIST
{
private:
    int n;
    int Loai[1000];
    NHANVIEN *ds[1000];
public:
        LIST();
        ~LIST();
        void Nhap();
        void Xuat();
        int TongLuong();
        int MaxLuong();
        void NV_LuongCaoNhat();
        int MinLuong();
        void NV_LuongThapNhat();
};

#endif
