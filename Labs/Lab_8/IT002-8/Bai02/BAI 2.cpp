
using namespace std;
#include "BAI 2.hpp"

int main()
{
    List A;
    A.NhapDS();
    A.XuatDS();
    A.XulyDS();
    cout << endl;
    cout << "NV CO LUONG THAP NHAT: \n";
    A.NV_MinLuong()->Xuat();
    cout << endl;
    cout << "NV CO LUONG CAO NHAT: \n";
    A.NV_MaxLuong()->Xuat();
    cout << endl;
    cout << "LTV CO LUONG CAO NHAT: \n";
    A.LTV_MaxLuong()->Xuat();
    cout << endl;
    cout << "KCV CO LUONG THAP NHAT: \n";
    A.KCV_MinLuong()->Xuat();
    cout << endl;

}
