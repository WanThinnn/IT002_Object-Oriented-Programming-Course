//
//  QuanTay_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanTay_Class_h
#define QuanTay_Class_h

class QuanTay : public Quan
{
private:
    string loaiquan;
public:
    QuanTay();
    ~QuanTay();
    void NhapQuan();
    void XuatQuan();
    void XuatFileQuan(ofstream& fo);
    float getDonGia();
    string LoaiQuan();
    string SizeQuan();
    string GioiTinh();
};

#endif /* QuanTay_Class_h */
