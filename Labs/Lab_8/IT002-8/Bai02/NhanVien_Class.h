
#ifndef NhanVien_Class_h
#define NhanVien_Class_h

class NhanVien
{
protected:
    string msnv, ht, email, sdt;
    int tuoi, luongcb;
public:
    NhanVien();
    ~NhanVien();
    virtual void Nhap();
    virtual void Xuat();
    virtual int Luong() = 0;
};

#endif /* NhanVien_Class_h */
