//
//  List_Class.h
//  IT002-8
//
//  Created by Thinnn on 09/06/2023.
//

#ifndef List_Class_h
#define List_Class_h
class List
{
private:
    int64_t n = 0;
    NhanVien** ds;
    int64_t* pl;
    int64_t tongluong = 0;
    double luongtb = 0.0;
public:
    List();
    ~List();
    void NhapDS();
    void XuatDS();
    void XulyDS();
    NhanVien* NV_MaxLuong();
    NhanVien* NV_MinLuong();
    LapTrinhVien* LTV_MaxLuong();
    KiemChungVien* KCV_MinLuong();
};

#endif /* List_Class_h */
