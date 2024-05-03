//
//  VangLai_Class.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef VangLai_Class_h
#define VangLai_Class_h
class VangLai : public TaiKhoan
{
private:
    int n;
    TaiKhoan* ds[10];
public:
    VangLai();
    ~VangLai();
    void TaoTaiKhoan();
    void GuiTien();
    int SoDu();
    void RutTien();
    void XuatTaiKhoan();
    string getTK();
    void RutTien_2(int temp);
    void LienKetTK(TaiKhoan* DS[], int N);


};

#endif /* VangLai_Class_h */
