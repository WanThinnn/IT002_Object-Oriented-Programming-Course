

#ifndef ThuongGioi_Class_h
#define ThuongGioi_Class_h

class ThuongGioi : public TieuVuTru
{
private:
public:
    ThuongGioi();
    ThuongGioi(int lk, int qt);
    ~ThuongGioi();
    int getChiSoLoai();
    int sucmanh();
    void Nhap();
    void Xuat();
    
};


#endif /* ThuongGioi_Class_h */
