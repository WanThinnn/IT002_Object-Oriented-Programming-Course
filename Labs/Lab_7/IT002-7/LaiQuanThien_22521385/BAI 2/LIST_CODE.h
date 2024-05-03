LIST::LIST() {}
LIST::~LIST() {}

istream& operator >> (istream &is, LIST &L)
{
    cout << "- Chon loai doi tuong: ";
    L.ds = new NGUOI;
        cout << "\n* CLASSIFICATION TABLE *" << endl;
        cout << "1. Sinh Vien." << endl;
        cout << "2. Hoc Sinh." << endl;
        cout << "3. Cong Nhan." << endl;
        cout << "4. Ca Si." << endl;
        cout << "5. Nghe Si." << endl;
        do
        {
            cout << "Type: ";
            is >> L.loai;
            is.ignore();
            if (L.loai == 1)
            {
                L.ds = new SINHVIEN();
                is >> *(static_cast <SINHVIEN*> (L.ds));
            }
            if (L.loai == 2)
            {
                L.ds = new HOCSINH();
                is >> *(static_cast <HOCSINH*> (L.ds));
            }
            if (L.loai == 3)
            {
                L.ds = new HOCSINH();
                is >> *(static_cast <CONGNHAN*> (L.ds));
            }
            
            if (L.loai == 4)
            {
                L.ds = new HOCSINH();
                is >> *(static_cast <CASI*> (L.ds));
            }
            
            if (L.loai == 5)
            {
                L.ds = new HOCSINH();
                is >> *(static_cast <NGHESI*> (L.ds));
            }
            
            if (L.loai < 1 or L.loai > 5)
                cout << "- Nhap lai!" << endl;
        }
        while (L.loai < 1 or L.loai > 5);
    return is;
}
    
ostream& operator << (ostream &os, LIST L)
{
    os << "\n*** INFORMATION OF LIST ***" << endl;
        if (L.loai == 1)
        {
            os << *(static_cast <SINHVIEN*> (L.ds)) << endl;
        }
        if (L.loai == 2)
        {
            os << *(static_cast <HOCSINH*> (L.ds)) << endl;
        }
        if (L.loai == 3)
        {
            os << *(static_cast <CONGNHAN*> (L.ds)) << endl;
        }
        
        if (L.loai == 4)
        {
            os << *(static_cast <CASI*> (L.ds)) << endl;
        }
        if (L.loai == 5)
        {
            os << *(static_cast <NGHESI*> (L.ds)) << endl;
        }
    return os;
}
