
#ifndef SinhVien_Class_h
#define SinhVien_Class_h

class SinhVien
{
protected:
    string MSSV, ten, diachi;
    float dtb;
    int tinchi;
public:
    SinhVien();
    virtual ~SinhVien() ;
    virtual float getDTB() = 0;
    virtual void Nhap();
    virtual void Xuat();
    virtual bool TotNghiep() = 0;
    virtual string TrinhDo() = 0;
    
};
#endif /* SinhVien_Class_h */
