#ifndef HTHANG_CLASS_h
#define HTHANG_CLASS_h

class HTHANG : public HINHHOC
{
private:
    double dayLon;
    double dayNho;
    double chieuCao;
    
public:
    HTHANG();
    HTHANG(double x, double y, double z);
    ~HTHANG();
    void NhapHinh() override;
    void XuatHinh() override;
    double DienTich() override;
    void VeHinh() override;
};


#endif
