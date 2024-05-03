//
//  List_Class.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef List_Class_h
#define List_Class_h
class List
{
private:
    KhachHang** ds;
    float doanhthu;
    int x,y,z;
public:
    List();
    ~List();
    void NhapDS(ifstream& fi);
    void XuatDS(ofstream& fo);
    
};

#endif /* List_Class_h */
