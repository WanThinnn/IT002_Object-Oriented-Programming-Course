//
//  TietKiem_Class.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef TietKiem_Class_h
#define TietKiem_Class_h
class TietKiem : public TaiKhoan
{
private:
    float laisuat;
    int tongsodu;
public:
    TietKiem();
    ~TietKiem();
    void TaoTaiKhoan();
    void RutTien();
    void GuiTien();
    int SoDu();
    void XuatTaiKhoan();
    string getTK();
    friend class VangLai;
};

#endif /* TietKiem_Class_h */
