
#ifndef TieuVuTru_Code_h
#define TieuVuTru_Code_h

TieuVuTru::TieuVuTru() {}
TieuVuTru::~TieuVuTru() {}

void TieuVuTru::Nhap()
{
    cout << "Nong do linh khi: ";
    cin >> linhkhi;
    cout << "Nong do quy tac: ";
    cin >> quytac;
}


void TieuVuTru::Xuat()
{
    cout << "Nong do linh khi: " <<  linhkhi << endl ;
    cout << "Nong do quy tac: "<< quytac << endl;
    cout << "Suc manh: " <<  sucmanh() << endl;
}



#endif /* TieuVuTru_Code_h */
