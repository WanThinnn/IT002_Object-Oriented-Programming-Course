#include "BAI_5.hpp"
using namespace std;
int main()
{
    HINHHOC* H;

    int choice;
    cout << "Chon hinh muon nhap: " << endl;
    cout << "1. Hinh Chu Nhat: " << endl;
    cout << "2. Hinh Vuong: " << endl;
    cout << "3. Hinh Thang: " << endl;
    cout << "4. Hinh Binh Hanh: " << endl;
    cout << "Chon hinh so: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            H = new HCN();
            break;
        case 2:
            H = new HVUONG();
            break;
        case 3:
            H = new HTHANG();
            break;
        case 4:
            H = new HBH();
            break;
        default:
            cout << "Lua chon khong hop le." << endl;
            return 0;
    }

    H->NhapHinh();
    H->XuatHinh();
    cout << "Dien tich: " << H->DienTich() << endl;
    H->VeHinh();

//    delete H;

    return 0;
}
