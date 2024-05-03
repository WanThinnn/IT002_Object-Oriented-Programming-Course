
class cList
{
private:
    int sl_GS;
    int sl_Bo_parents;
    int sl_De_parents;
    int sl_Cuu_parents;
    cGiaSuc *ds[1000];
public:
    cList();
    ~cList();
    void Nhap_solieubandau();
    void Xuat_thongtin_trangtrai();
    void Amthanh_bi_bodoi();
};


