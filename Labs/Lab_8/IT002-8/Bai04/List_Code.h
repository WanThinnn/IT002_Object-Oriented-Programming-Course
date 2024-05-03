//
//  List_Code.h
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#ifndef List_Code_h
#define List_Code_h
List::List(){}
List::~List(){}
void List::NhapDS(ifstream& fi)
{
    if (fi.is_open())
    {
        fi >> x >> y >> z;
        ds = new KhachHang*[x+y+z];
        for (int i = 0; i < x; i++)
        {
            ds[i] = new KH_A();
            ds[i]->Nhap(fi);
            doanhthu += ds[i]->TongTien();
        }
        for (int i = x; i < x+y; i++)
        {
            ds[i] = new KH_B();
            ds[i]->Nhap(fi);
            doanhthu += ds[i]->TongTien();
            
        }
        for (int i = x+y; i < x+y+z; i++)
        {
            ds[i] = new KH_C();
            ds[i]->Nhap(fi);
            doanhthu += ds[i]->TongTien();
        }
        cout << "Nhap danh sach thanh cong!" << endl;
    }
    else
        cout << "Khong the mo file XYZ.INP\n";
}

void List::XuatDS(ofstream& fo)
{
    if (fo.is_open())
    {
        fo << x << " " << y << " " << z << endl;
        for (int i = 0; i < x+y+z; i++)
            ds[i]->Xuat(fo);
        fo << doanhthu << endl;
        cout << "Xuat danh sach thanh cong!" << endl;
    }
    else
        cout << "Khong the mo file XYZ.OUT\n";
}

#endif /* List_Code_h */
