cGiaSuc::cGiaSuc()
{
    Soluongcon=rand()%10+1;
    Solitsua=0;
    Tiengkeu="";
}

cGiaSuc::~cGiaSuc()
{

}


void cGiaSuc::Xuatsolieu()
{
    cout << " So luong con sinh ra : " << Soluongcon << endl;
    cout << " So lit sua : " << Solitsua << endl;
    cout << " Tieng keu : " << Tiengkeu << endl;
}

string cGiaSuc::GiasucDoi()
{
    return Tiengkeu;
}

int cGiaSuc::getCon()
{
    return Soluongcon;
}

int cGiaSuc::getSua()
{
    return Solitsua;
}
