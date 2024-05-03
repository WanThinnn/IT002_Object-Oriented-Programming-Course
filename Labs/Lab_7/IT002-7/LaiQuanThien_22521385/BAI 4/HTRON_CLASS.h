
#ifndef HTRON_CLASS_h
#define HTRON_CLASS_h


class HTRON : public ELIP
{
private:
    float R;
    DIEM O;
public:
    HTRON();
    ~HTRON();
    void Nhap();
    void Xuat();
    void VeHinh();
    float getR();
    DIEM getO();
};


#endif
