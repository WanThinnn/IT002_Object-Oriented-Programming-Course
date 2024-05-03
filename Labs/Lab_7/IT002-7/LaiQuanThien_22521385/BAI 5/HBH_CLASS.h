#ifndef HBH_CLASS_h
#define HBH_CLASS_h

class HBH : public HINHHOC
{
private:
    double doDaiCanh;
    double chieuCao;
    
public:
    HBH();
    HBH(double x, double y);
    ~HBH();
    void NhapHinh() override;
    void XuatHinh() override;
    double DienTich() override;
    void VeHinh() override;
};
#endif
