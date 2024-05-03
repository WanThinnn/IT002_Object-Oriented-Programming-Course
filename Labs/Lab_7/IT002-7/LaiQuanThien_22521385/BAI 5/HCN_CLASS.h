#ifndef HCN_CLASS_h
#define HCN_CLASS_h

class HCN : public HINHHOC
{
    private:
        double chieuDai;
        double chieuRong;
    public:
        HCN();
        HCN(float x, float y);
        ~HCN();
        void NhapHinh() override;
        void XuatHinh() override;
        double DienTich() override;
        void VeHinh() override;
};

#endif
