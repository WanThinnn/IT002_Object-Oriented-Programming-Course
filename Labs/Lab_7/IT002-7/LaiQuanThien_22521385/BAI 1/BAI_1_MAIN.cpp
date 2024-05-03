#include "B1_CLASS_LIST.h"
#include "B1_CODE_LIST.h"

using namespace std;
int main()
{
    LIST List;
    List.Nhap();
    List.Xuat();
    cout << "- Tong luong phai tra cho tat ca nhan vien : " << List.TongLuong() << endl;
//    List.NV_LuongCaoNhat();
//    List.NV_LuongThapNhat();
    return 0;
}
