cList::cList()
{
    sl_GS=0;
    sl_Bo_parents=0;
    sl_Cuu_parents=0;
    sl_De_parents=0;
}

cList::~cList()
{

}

void cList::Nhap_solieubandau()
{
    cout << " Nhap so luong bo cha me co trong trang trai : " << endl;
    cin >> sl_Bo_parents;
    sl_GS+=sl_Bo_parents;
    for (int i=0;i<sl_GS;i++)
        ds[i]= new (cBo);
    cout << " Nhap so luong de cha me co trong trang trai : " << endl;
    cin >> sl_De_parents;
    sl_GS+=sl_De_parents;
    for (int i=sl_Bo_parents;i<sl_GS;i++)
        ds[i]= new (cDe);
    cout << " Nhap so luong cuu cha me co trong trang trai : " << endl;
    cin >> sl_Cuu_parents;
    sl_GS+=sl_Cuu_parents;
    for (int i=sl_De_parents+sl_Bo_parents;i<sl_GS;i++)
        ds[i]= new (cCuu);
}

void cList::Xuat_thongtin_trangtrai()
{
    int b=0,d=0,c=0;
    int sls_b=0,sls_d=0,sls_c=0;
    for (int i=0;i<sl_Bo_parents;i++)
    {
        b += 1+ds[i]->getCon();
        sls_b+=ds[i]->getSua();
    }
    for (int i=sl_Bo_parents;i<sl_Bo_parents+sl_De_parents;i++)
    {
        d+=1+ds[i]->getCon();
        sls_d+=ds[i]->getSua();
    }
    for (int i=sl_De_parents+sl_Bo_parents;i<sl_GS;i++)
    {
        c+=1+ds[i]->getCon();
        sls_c+=ds[i]->getSua();
    }
    cout << " Tong so gia suc : " << b+d+c << endl;
    cout << " So luong bo : " << b << endl;
    cout << " So luong sua bo san xuat : " << sls_b << endl;
    cout << " So luong de : " << d << endl;
    cout << " So luong sua de san xuat : " << sls_d << endl;
    cout << " So luong cuu : " << c << endl;
    cout << " So luong sua cuu san xuat : " << sls_c << endl;
}

void cList::Amthanh_bi_bodoi()
{
    for (int i=0;i<sl_Bo_parents;i++)
    {
        cout << ds[i]->GiasucDoi()<< "\t";              
        // Bo me doi, bo con cung doi
        for (int j=0;j<ds[i]->getCon();j++)
            cout << ds[i]->GiasucDoi()<< "\t";
    }
    for (int i=sl_Bo_parents;i<sl_Bo_parents+sl_De_parents;i++)
    {
        cout << ds[i]->GiasucDoi() << "\t";             
        //De me doi, de con cung doi
        for (int j=0;j<ds[i]->getCon();j++)
            cout << ds[i]->GiasucDoi()<< "\t";
    }
    for (int i=sl_De_parents+sl_Bo_parents;i<sl_GS;i++)
    {
        cout << ds[i]->GiasucDoi() << "\t";           
        //Cuu me doi, cuu con cung doi
        for (int j=0;j<ds[i]->getCon();j++)
            cout << ds[i]->GiasucDoi()<< "\t";
    }
}

