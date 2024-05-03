//
//  List_Code.h
//  Thi OOP
//
//  Created by Thinnn on 12/06/2023.
//

#ifndef List_Code_h
#define List_Code_h
List::List() {}
List::~List() {}
void List::NhapDS()
{
    cout << "Nhập số lượng bộ quần áo: ";
    cin >> n;
    A = new Ao*[n];
    Q = new Quan*[n];
    PK = new PhuKien*[n];
    pla = new int[n];
    plq = new int[n];
    for (int i = 0; i < n; i++)
    {

        cout << "1. Ao Thun - 2. Ao So Mi: ";
        cin >> pla[i];
        cin.ignore();
        switch (pla[i])
        {
            case 1:
                A[i] = new AoThun();
                ((AoThun*)A[i])->NhapAo();
                break;
            case 2:
                A[i] = new AoSoMi();
                ((AoSoMi*)A[i])->NhapAo();
                break;
            default:
                cout << "Nhap lai!" << endl;
                break;
        }
        
        cout << "1. Quan Short - 2. Quan Tay - 3. Quan Jean: ";
        cin >> plq[i];
        cin.ignore();
        switch (plq[i])
        {
            case 1:
                Q[i] = new QuanShort();
                ((QuanShort*)Q[i])->NhapQuan();
                break;
            case 2:
                Q[i] = new QuanTay();
                ((QuanTay*)Q[i])->NhapQuan();
                break;
            case 3:
                Q[i] = new QuanJean();
                ((QuanJean*)Q[i])->NhapQuan();
                break;
            default:
                cout << "Nhap lai!" << endl;
                break;
        }
        
        cout << "So luong phu kien: ";
        cin >> m;
        plpk = new int[m];
        for (int j = 0; j < m; j++)
        {
            cout << "1. Vong Tay - 2. Khan Quang Co - 3. Mu: ";
            cin >> plpk[j];
            cin.ignore();
            switch (plpk[j])
            {
                case 1:
                    PK[j] = new VongTay();
                    ((VongTay*)PK[j])->NhapPK();
                    break;
                case 2:
                    PK[j] = new KhanQuangCo();
                    ((KhanQuangCo*)PK[j])->NhapPK();
                    break;
                case 3:
                    PK[j] = new Mu();
                    ((Mu*)PK[j])->NhapPK();
                    break;
                default:
                    cout << "Nhap lai!" << endl;
                    break;
            }
        }
        BoQuanAo B(A[i], Q[i], PK, m);
        ds.push_back(B);
    }
}


void List::XuatDS()
{
    // Hiển thị lại danh sách N bộ quần áo
       cout << "Danh sách bộ quần áo:\n";
       for (int i = 0; i < ds.size(); i++)
       {
           cout << "Bộ quần áo thứ " << i + 1 << ":\n";
           cout << "Ao: ";
           ds[i].ao->XuatAo();
           cout << endl;
           cout << "Quan: ";
           ds[i].quan->XuatQuan();
           cout << endl;
           for (int j = 0; j < m; j++)
           {
               cout << "Phu kien thu " << j + 1 << ": ";
               ds[i].PK[j]->XuatPK();
           }
           cout << endl;
           cout << "Giá bán: " << ds[i].tinhGiaBan() << endl;
           cout << "------------------------\n";
       }
}


void List::XuatFile()
{
    // Lưu danh sách bộ quần áo xuống file
    ofstream file_out("danh_sach_bo_quan_ao.txt");
    if (file_out.is_open())
    {
        for (int i = 0; i < ds.size(); i++)
        {
            file_out << "Ao: ";
            ds[i].ao->XuatFileAo(file_out);
            file_out << endl;
            file_out << "Quan: ";
            ds[i].quan->XuatFileQuan(file_out);
            file_out << endl;
            for (int j = 0; j < m; j++)
            {
                file_out << "Phu kien thu " << j + 1 << ": ";
                ds[i].PK[j]->XuatFilePK(file_out);
            }
            file_out << endl;
        }
        cout << "Danh sách bộ quần áo đã được lưu xuống file ds.txt\n";
        file_out.close();
    }
    else
        cout << "Không thể mở file ds.txt để lưu trữ\n";
}

#endif /* List_Code_h */
