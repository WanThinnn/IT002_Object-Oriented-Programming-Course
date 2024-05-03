LIST::LIST()
{
    sl_GS = 0;
    sl_Bo_parents = 0;
    sl_Cuu_parents = 0;
    sl_De_parents = 0;
}
LIST::~LIST() {}

istream& operator >> (istream &is, LIST &L)
{
    cout << "* Nhap so luong bo cha me co trong trang trai: ";
    is >> L.sl_Bo_parents;

    cout << "* Nhap so luong de cha me co trong trang trai: ";
    is >> L.sl_De_parents;
    
    cout << "* Nhap so luong cuu cha me co trong trang trai : ";
    is >> L.sl_Cuu_parents;
    
    L.sl_GS = L.sl_Bo_parents + L.sl_De_parents + L.sl_Cuu_parents;
    
    L.ds = new GIASUC*[3];
    

    L.ds[0] = new BO [L.sl_Bo_parents];
        
    L.ds[1] = new CUU [L.sl_Cuu_parents];
    
    L.ds[2] = new DE [L.sl_De_parents];
        
    return is;
}

ostream& operator << (ostream &os, LIST L)
{
    int b = 0, d = 0, c = 0;
    int sls_b = 0, sls_d = 0, sls_c = 0;

    for (int i = 0; i < L.sl_Bo_parents; i++)
    {
        os << "- Bo me de: " <<L.ds[0][i].getCon() << endl;
        b += 1 + L.ds[0][i].getCon();
        sls_b += L.ds[0][i].getSua();
    }

    for (int i = 0; i < L.sl_Cuu_parents; i++)
    {
        c += 1 + L.ds[1][i].getCon();
        sls_c += L.ds[1][i].getSua();
    }

    for (int i = 0; i < L.sl_De_parents; i++)
    {
        d += 1 + L.ds[2][i].getCon();
        sls_d += L.ds[2][i].getSua();
    }
    os << "- Tong so gia suc ban dau: " << L.sl_GS << endl;
    os << "- Tong so gia suc luc sau: " << b + c + d << endl;
    os << "- So luong bo: " << b << endl;
    os << "- So luong sua bo san xuat: " << sls_b << endl;
    os << "- So luong de: " << d << endl;
    os << "- So luong sua de san xuat: " << sls_d << endl;
    os << "- So luong cuu: " << c << endl;
    os << "- So luong sua cuu san xuat: " << sls_c << endl;

    return os;
}

void LIST::Amthanh_bi_bodoi()
{    
    for (int i = 0; i < sl_Bo_parents; i++)
    {
        cout << ds[0][i].GiasucDoi() << " ";
        for (int j = 0; j < ds[0][i].getCon(); j++)
            cout << ds[0][i].GiasucDoi() << "\t";
    }
    cout << endl;
    for (int i = 0; i < sl_Cuu_parents; i++)
    {
        cout << ds[1][i].GiasucDoi() << " ";
        for (int j = 0; j < ds[1][i].getCon(); j++)
            cout << ds[1][i].GiasucDoi() << "\t";
    }
    cout << endl;
    for (int i = 0; i < sl_De_parents; i++)
    {
        cout << ds[2][i].GiasucDoi() << " ";
        for (int j = 0; j < ds[2][i].getCon(); j++)
            cout << ds[2][i].GiasucDoi() << "\t";
    }
}
                            

