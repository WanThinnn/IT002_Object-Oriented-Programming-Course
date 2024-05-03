
#ifndef TieuVuTru_Class_h
#define TieuVuTru_Class_h

using namespace std;

class TieuVuTru
{
protected:
    int linhkhi, quytac, chisoloai;
public:
    TieuVuTru();
    ~TieuVuTru();
    virtual void Nhap();
    virtual void Xuat();
    virtual int getChiSoLoai() = 0;
    virtual int sucmanh() = 0;
};




#endif
