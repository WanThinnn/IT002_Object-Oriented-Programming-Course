//
//  VangLai.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef VangLai_h
#define VangLai_h
VangLai::VangLai(){}
VangLai::~VangLai(){}

void VangLai::TaoTaiKhoan()
{
    cout << "Moi nhap stk: ";
    cin >> stk;
    cout << "Moi nhap mat khau: ";
    cin >> mk;
    cout << "Xac nhan lai mat khau: ";
    int temp;
    do
    {
        cin >> temp;
        if (temp == mk)
            cout << "Mat khau trung khop!\nBan da tao tai khoan thanh cong!\n";
        else
            cout << "Mat khau khong trung khop, vui long nhap lai!\n";
    }
    while (temp != mk);
}

void VangLai::LienKetTK(TaiKhoan* DS[],int N)
{
    n = N;
    for (int i = 0; i < n; i++)
        ds[i] = DS[i];
}

void VangLai::RutTien_2(int temp)
{
    int choose;
    cout << "Ban co muon su dung tai khoan tiet kiem de rut tien khong?\n";
    cout << "1. Co\n";
    cout << "2. Khong\n";
    cout << "3. Toi khong co tai khoan tiet kiem.\n";
    cout << "Vui long nhap lua chon cua ban: ";
    cin >> choose;
    switch (choose)
    {
        case 1:
            int i;
            for (i = 0; i < n; i++)
               {
                   if (((TietKiem*)(ds[i])) != NULL)
                   {
                       if (((TietKiem*)(ds[i]))->SoDu() >= 0)
                       {
                           if (sodu + ((TietKiem*)(ds[i]))->SoDu() >= temp)
                           {
                               ((TietKiem*)(ds[i]))->setSoDu(sodu - temp);
                               sodu = 0;
                               temp = 0;
                               cout << "Rut tien thanh cong!\n";
                               cout << "So du cua tai khoan Tiet Kiem " << ((TietKiem*)(ds[i]))->getSTK()<< " cua ban la: " << ((TietKiem*)(ds[i]))->SoDu();
                               return;
                           }
                       }
                   }
               }
            if (i == n)
                cout << "Ban khong du dieu kien de rut tien!\n";
            break;
        case 2:
            cout << "Vui long nhan lai the!\n";
            break;
        case 3:
            cout << "Vui long nhan lai the!\n";
            break;
        default:
            cout << "Chon lai!\n";
            break;
    };
}


void VangLai::RutTien()
{
    int temp;
    cout << "Nhap so tien ban muon rut: ";
    cin >> temp;
    if (temp <= sodu)
    {
        sodu = sodu - temp;
        temp = 0;
        cout << "Rut tien thanh cong!";
    }
    else if (temp > sodu)
            RutTien_2(temp);
}


void VangLai::GuiTien()
{
    TaiKhoan::GuiTien();
}

int VangLai::SoDu()
{
    return TaiKhoan::SoDu();
}

void VangLai::XuatTaiKhoan()
{
    cout << "STK: " << stk << endl;
    cout << "So du: " << sodu << endl;
}

string VangLai::getTK()
{
    return "Vang Lai";
}



#endif /* VangLai_h */

/*


 
 */
