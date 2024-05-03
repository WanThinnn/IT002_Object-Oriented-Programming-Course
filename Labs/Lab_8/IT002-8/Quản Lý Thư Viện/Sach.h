//
//  Sach.h
//  IT002-8
//
//  Created by Thinnn on 21/06/2023.
//

#ifndef Sach_h
#define Sach_h
class Sach
{
protected:
    string mss, tensach, nxb;
    int soluong, dongia;
public:
    Sach();
    ~Sach();
    virtual void Nhap();
    virtual void Xuat();
    virtual int ThanhTien() = 0;
    string getNXB();
    virtual string getLoaiSach() = 0;
};

Sach::Sach(){}
Sach::~Sach(){}

void Sach::Nhap()
{
    cout << "MSS: ";
    getline(cin, mss);
    cout << "NXB: ";
    getline(cin, nxb);
    cout << "Ten sach: ";
    getline(cin, tensach);
    cin.ignore();
    cout << "So luong sach: ";
    cin >> soluong;
    cout << "Don gia: ";
    cin >> dongia;
}
void Sach::Xuat()
{
    cout << "MSS: " << mss << endl;
    cout << "NXB: " << nxb << endl;
    cout << "Ten sach: " << tensach << endl;
    cout << "So luong sach: " << soluong << endl;
    cout << "Don gia: " << dongia << endl;
}

string Sach::getNXB()
{
    return nxb;
}



#endif /* Sach_h */
