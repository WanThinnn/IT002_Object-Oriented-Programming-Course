
#ifndef SV_DaiHoc_Class_h
#define SV_DaiHoc_Class_h
class SV_DaiHoc : public SinhVien
{
private:
    float diemluanvan;
    string tenluanvan;
public:
    SV_DaiHoc();
    ~SV_DaiHoc();
    void Nhap();
    void Xuat();
    bool TotNghiep();
    float getDTB();
    string TrinhDo();
};

#endif /* SV_DaiHoc_Class_h */
