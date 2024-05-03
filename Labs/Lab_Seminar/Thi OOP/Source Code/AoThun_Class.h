//
//  Ao_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef AoThun_Class_h
#define AoThun_Class_h
class AoThun : public Ao
{
public:
    AoThun();
    ~AoThun();
    void NhapAo();
    void XuatAo();
    void XuatFileAo(ofstream& fo);
    float getDonGia();
    string LoaiAo();
    string SizeAo();
    string GioiTinh();

};


#endif /* Ao_Class_h */
