#ifndef B1_CLASS_NVVP
#define B1_CLASS_NVVP

class NV_VANPHONG : public NHANVIEN
{
    private:
        int luong;
        int songaylamviec;
    public:
        NV_VANPHONG();
        ~NV_VANPHONG();
        void Nhap();
        void Xuat();
        int getLuong();
        int tinhLuong();
};

#endif
