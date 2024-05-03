LIST::LIST() {}
LIST::~LIST() {}

istream& operator >> (istream &is, LIST &L)
{
    cout << "- Nhap so luong nguoi: ";
    is >> L.n;
    L.loai = new int[L.n];
    L.ds = new NGUOI*[L.n];
    for (int i = 0; i < L.n; i++)
    {
        cout << "\n* CLASSIFICATION TABLE *" << endl;
        cout << "1. Sinh Vien." << endl;
        cout << "2. Hoc Sinh." << endl;
        cout << "3. Cong Nhan." << endl;
        cout << "4. Ca Si." << endl;
        cout << "5. Nghe Si." << endl;
        do
        {
            cout << "Type: ";
            is >> L.loai[i];
            is.ignore();
            if (L.loai[i] == 1)
            {
                L.ds[i] = new SINHVIEN();
                is >> *(static_cast <SINHVIEN*> (L.ds[i]));
            }
            if (L.loai[i] == 2)
            {
                L.ds[i] = new HOCSINH();
                is >> *(static_cast <HOCSINH*> (L.ds[i]));
            }
            if (L.loai[i] == 3)
            {
                L.ds[i] = new HOCSINH();
                is >> *(static_cast <CONGNHAN*> (L.ds[i]));
            }
            
            if (L.loai[i] == 4)
            {
                L.ds[i] = new HOCSINH();
                is >> *(static_cast <CASI*> (L.ds[i]));
            }
            
            if (L.loai[i] == 5)
            {
                L.ds[i] = new HOCSINH();
                is >> *(static_cast <NGHESI*> (L.ds[i]));
            }
            
            if (L.loai[i] < 1 or L.loai[i] > 5)
                cout << "- Nhap lai!" << endl;
        }
        while (L.loai[i] < 1 or L.loai[i] > 5);
        
    }
    return is;
}
ostream& operator << (ostream &os, LIST L)
{
    os << "\n*** INFORMATION OF LIST ***" << endl;
    for (int i = 0; i < L.n; i++)
    {
        if (L.loai[i] == 1)
        {
            os << "* Number: " << i+1 << endl;
            os << *(static_cast <SINHVIEN*> (L.ds[i])) << endl;
        }
        if (L.loai[i] == 2)
        {
            os << "* Number: " << i+1 << endl;
            os << *(static_cast <HOCSINH*> (L.ds[i])) << endl;
        }
        if (L.loai[i] == 3)
        {
            os << "* Number: " << i+1 << endl;
            os << *(static_cast <CONGNHAN*> (L.ds[i])) << endl;
        }
        
        if (L.loai[i] == 4)
        {
            os << "* Number: " << i+1 << endl;
            os << *(static_cast <CASI*> (L.ds[i])) << endl;
        }
        if (L.loai[i] == 5)
        {
            os << "* Number: " << i+1 << endl;
            os << *(static_cast <NGHESI*> (L.ds[i])) << endl;
        }
    }
    return os;
}
