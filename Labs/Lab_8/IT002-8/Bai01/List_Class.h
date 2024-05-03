
#ifndef List_Class_h
#define List_Class_h
class List
{
private:
    SinhVien** ds;
    int* pl;
    int n, dh = 0, cd = 0, ktn1 = 0, ktn2 = 0;
public:
    List();
    ~List();
    int compareSinhVien(SinhVien* sv1, SinhVien* sv2);
    void swap(SinhVien* &x, SinhVien* &y);
    void QuickSort(SinhVien** ds, int left, int right);
    void NhapDS();
    void XuatDS();
    void DS_TotNghiep();
    void DS_KhongTotNghiep();
    void XuLyDanhSach();

};


#endif /* Li_st_Class_h */
