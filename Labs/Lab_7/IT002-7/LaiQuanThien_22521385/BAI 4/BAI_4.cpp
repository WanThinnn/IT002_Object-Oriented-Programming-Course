#include "BAI_4.hpp"

int main()
{
    HTRON O;
    DIEM G2;
    
    cout << "HTRON\n";
    O.Nhap();
    O.Xuat();
    G2 = O.getO();
    cout << "Thong so tam O: " << G2.getX() << " " << G2.getY() << endl;
    O.VeHinh();
    
}
