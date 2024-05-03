#ifndef HTRON_CODE_h
#define HTRON_CODE_h

HTRON::HTRON()
{

}

HTRON::~HTRON()
{

}

void HTRON::Nhap()
{
    cout << "Nhap tam hinh tron : " << endl;
    O.Nhap();
    cout << "Nhap ban kinh : ";
    cin >> R;
    F1 = F2 = O;
    r1 = r2 = R;
    F = 0;
}

void HTRON::Xuat()
{
    cout << "Tam hinh tron: " << endl;
    O.Xuat();
    cout << "Ban kinh: " << R << endl;
}

DIEM HTRON::getO()
{
    return O;
}

float HTRON::getR()
{
    return R;
}

void HTRON::VeHinh()
{
    cout << "Vẽ hình tròn!!\n" << std::endl;
}
#endif
