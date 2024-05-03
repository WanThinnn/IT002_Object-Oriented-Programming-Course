#ifndef HVUONG_CODE_h
#define HVUONG_CODE_h

HVUONG::HVUONG() {}
HVUONG::HVUONG(float x) {canh = x;}
HVUONG::~HVUONG() {}

void HVUONG::NhapCanh()
{
    cout << "Nhap canh: ";
    cin >> canh;
}


void HVUONG::NhapHinh()
{
    NhapCanh();
}

void HVUONG::XuatHinh()
{
    cout << "Chieu dai: " << canh << endl;
}

void HVUONG::VeHinh()
{
    cout << "Ve hinh vuong" << endl;
}

double HVUONG::DienTich()
{
    return canh*canh;
}





#endif
