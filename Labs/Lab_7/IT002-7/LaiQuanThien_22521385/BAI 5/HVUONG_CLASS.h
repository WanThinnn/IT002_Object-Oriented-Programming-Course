#ifndef HVUONG_CLASS_h
#define HVUONG_CLASS_h

class HVUONG : public HCN
{
private:
    float canh, S;
public:
    HVUONG();
    HVUONG(float x);
    ~HVUONG();
    void NhapCanh();
    void NhapHinh() override;
    void XuatHinh() override;
    void VeHinh() override;
    double DienTich() override;
    
};


#endif
