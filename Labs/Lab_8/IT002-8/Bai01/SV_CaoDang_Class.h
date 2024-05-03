#ifndef SV_CaoDang_Class_h
#define SV_CaoDang_Class_h

class SV_CaoDang : public SinhVien
{
private:
    float diemtotnghiep;
public:
    SV_CaoDang();
    ~SV_CaoDang();
    void Nhap();
    void Xuat();
    bool TotNghiep();
    float getDTB();
    string TrinhDo();
};

#endif /* SV_CaoDang_Class_h */
