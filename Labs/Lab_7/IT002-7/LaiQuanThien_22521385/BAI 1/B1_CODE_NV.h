NHANVIEN::NHANVIEN() {}

NHANVIEN::~NHANVIEN() {}

void NHANVIEN::Nhap()
{
    cin.ignore();
    cout <<"- Nhap Ho va Ten :";
    getline(cin,Name);
    cout << "- Nhap Ngay sinh :";
    getline(cin,Bday);
    Salary = 0;
}

void NHANVIEN::Xuat()
{
    cout << "- Ho va ten : " << Name << endl;
    cout << "- Ngay sinh : " << Bday << endl;
}
