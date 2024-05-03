//
//  QuanShort_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanShort_Class_h
#define QuanShort_Class_h
class QuanShort : public Quan
{
public:
    QuanShort();
    ~QuanShort();
    void NhapQuan();
    void XuatQuan();
    void XuatFileQuan(ofstream& fo);
    float getDonGia();
    string LoaiQuan();
    string SizeQuan();
    string GioiTinh();
};


#endif /* QuanShort_Class_h */
