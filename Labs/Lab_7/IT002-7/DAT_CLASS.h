#ifndef DAT_CLASS_h
#define DAT_CLASS_h

class DAT
{
private:
    string sgcn, diachi, ngaycap;
    int sothuadat, sobando;
    float dientich, dongia;
public:
    DAT();
    ~DAT();
    virtual void Nhap();
    virtual void Xuat();
    int TienThue();
};

#endif /* DAT_CLASS_h */
