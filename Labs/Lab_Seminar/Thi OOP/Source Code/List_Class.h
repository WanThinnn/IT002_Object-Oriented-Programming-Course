//
//  List_Class.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef List_Class_h
#define List_Class_h
class List
{
private:
    int n, m;
    Ao** A;
    Quan** Q;
    PhuKien** PK;
    int* pla;
    int* plq;
    int* plpk;
    vector <BoQuanAo> ds;
    
public:
    List();
    ~List();
    void NhapDS();
    void XuatDS();
    void XuatFile();
};

#endif /* List_Class_h */
