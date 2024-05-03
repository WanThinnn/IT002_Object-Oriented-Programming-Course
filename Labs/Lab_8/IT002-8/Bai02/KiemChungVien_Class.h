
#ifndef KiemChungVien_Class_h
#define KiemChungVien_Class_h
class KiemChungVien : public NhanVien
{
private:
    int soloi;
public:
    KiemChungVien();
    ~KiemChungVien();
    void Nhap();
    void Xuat();
    int Luong();
};

#endif /* KiemChungVien_Class_h */
