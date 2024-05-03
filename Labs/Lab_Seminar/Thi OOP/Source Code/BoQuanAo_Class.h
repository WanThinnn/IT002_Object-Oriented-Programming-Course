//
//  BoQuanAo_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef BoQuanAo_Class_h
#define BoQuanAo_Class_h
class BoQuanAo
{
public:
    Ao* ao;
    Quan* quan;
    PhuKien** PK;
    double gia_ban;
    int n;
    BoQuanAo();
    BoQuanAo(Ao* ao, Quan* quan, PhuKien** phu_kien, int n);
    ~BoQuanAo();
    double tinhGiaBan();
    string TenOutFix();
};

#endif /* BoQuanAo_Class_h */
