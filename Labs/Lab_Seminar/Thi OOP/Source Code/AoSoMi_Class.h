//
//  Ao_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef AoSoMi_Class_h
#define AoSoMi_Class_h

class AoSoMi : public Ao
{
private:
    string tieuchuanvai;
public:
    AoSoMi();
    ~AoSoMi();
    void NhapAo();
    void XuatAo();
    void XuatFileAo(ofstream& fo);
    float getDonGia();
    string LoaiAo();
    string SizeAo();
    string GioiTinh();
};

#endif 
