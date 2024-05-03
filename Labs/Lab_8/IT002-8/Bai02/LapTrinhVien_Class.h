#ifndef LapTrinhVien_Class_h
#define LapTrinhVien_Class_h

class LapTrinhVien : public NhanVien
{
private:
    int overtime;
public:
    LapTrinhVien();
    ~LapTrinhVien();
    void Nhap();
    void Xuat();
    int Luong();
};

#endif /* LapTrinhVien_Class_h */
