//
//  QuanJean_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef QuanJean_Class_h
#define QuanJean_Class_h

class QuanJean : public Quan
{
public:
    QuanJean();
    ~QuanJean();
    void NhapQuan();
    void XuatQuan();
    void XuatFileQuan(ofstream& fo);
    string LoaiQuan();
    string SizeQuan();
    string GioiTinh();
};

#endif /* QuanJean_Class_h */
