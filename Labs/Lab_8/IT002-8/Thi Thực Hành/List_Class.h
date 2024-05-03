
#ifndef List_Class_h
#define List_Class_h


class List
{
private:
    TieuVuTru** ds;
    int* pl;
    int n;
    int hg = 0;
    int tg = 0;
public:
    List();
    ~List();
    void NhapDS();
    void XuatDS();
    TieuVuTru* countStrongHG();
    TieuVuTru* countStrongTG();
    int checkPhatTrien();
    TieuVuTru* TGnhieuHG();
};

#endif /* List_Class_h */
