#ifndef HTHANG_CODE_h
#define HTHANG_CODE_h


HTHANG::HTHANG() {}
HTHANG::HTHANG(double x, double y, double z)
{
    chieuCao = x;
    dayLon = y;
    dayNho = z;
}
HTHANG::~HTHANG() {}


void HTHANG::NhapHinh()
{
   cout << "Nhap chieu cao: ";
   cin >> chieuCao;
   cout << "Nhap do dai day lon: ";
   cin >> dayLon;
   cout << "Nhap do dai day nho: ";
   cin >> dayNho;
}

void HTHANG::XuatHinh()
{
   cout << "Chieu cao: " << chieuCao << endl;
   cout << "Do dai day lon: " << dayLon << endl;
   cout << "Do dai day nho: " << dayNho << endl;
}


void HTHANG::VeHinh()
{
    cout << "Ve hinh thang" << endl;
}

double HTHANG::DienTich()
{
   return ((dayLon + dayNho) * chieuCao / 2);
}



#endif
