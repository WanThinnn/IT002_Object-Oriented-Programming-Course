
NV_SANXUAT::NV_SANXUAT() {}

NV_SANXUAT::~NV_SANXUAT() {}


void NV_SANXUAT::Nhap()
{
    NHANVIEN::Nhap();
    cout << "- So San Pham: ";
    cin >> sosanpham;
    cout << "- Luong Can Ban: ";
    cin >> luongcanban;
}

int NV_SANXUAT::tinhLuong()
{
    luong = luongcanban + sosanpham*5;
    return luong;
}

void NV_SANXUAT::Xuat()
{
    NHANVIEN::Xuat();
    cout << "- So San Pham: " << sosanpham << endl;
    cout << "- Luong Can Ban: " << luongcanban << endl;
    cout << "- Luong: " << tinhLuong() << endl;
}


int NV_SANXUAT::getLuong()
{
    return luong;
}
