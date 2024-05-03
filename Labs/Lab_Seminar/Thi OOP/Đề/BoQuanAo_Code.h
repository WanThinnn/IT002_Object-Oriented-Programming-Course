//
//  BoQuanAo_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef BoQuanAo_Code_h
#define BoQuanAo_Code_h
BoQuanAo::BoQuanAo() {}
BoQuanAo::~BoQuanAo(){}

BoQuanAo::BoQuanAo(Ao* ao, Quan* quan, PhuKien** phu_kien, int n)
{
    this->n = n;
    this->ao = ao;
    this->quan = quan;
    PK = new PhuKien*[n];
    for (int i = 0; i < n; i++)
        PK[i] = phu_kien[i];
    gia_ban = tinhGiaBan();
}
string BoQuanAo::TenOutFix()
{
    if (ao->GioiTinh() == quan->GioiTinh() and ao->SizeAo() == quan->SizeQuan())
    {
        if (ao->LoaiAo() == "Ao so mi" and quan->LoaiQuan() == "Quan tay")
            return "Hoang Hon";
        else if (ao->LoaiAo() == "Ao thun")
            return "Free";
    }
    return "Khac";
}

double BoQuanAo::tinhGiaBan()
{
    double tong_gia = ao->getDonGia() + quan->getDonGia();
    for (int i = 0; i < n; i++)
        tong_gia = PK[i]->getDonGia();
    
    if (TenOutFix() == "Hoang Hon")
        return 1.3 * tong_gia;
    else if (TenOutFix() == "Free")
        return 1.2 * tong_gia;
    
    return tong_gia;
}
#endif /* BoQuanAo_Code_h */
