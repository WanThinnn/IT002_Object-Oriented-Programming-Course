
#ifndef HaGioi_Class_h
#define HaGioi_Class_h

class HaGioi : public TieuVuTru
{
private:
public:
    HaGioi();
    ~HaGioi();
    int sucmanh();
    bool PhatTrien();
    void Nhap();
    void Xuat();
    int getChiSoLoai();
};

#endif /* HaGioi_Class_h */
