//
//  TietKiem.h
//  IT002-8
//
//  Created by Thinnn on 15/06/2023.
//

#ifndef TietKiem_h
#define TietKiem_h
TietKiem::TietKiem(){}
TietKiem::~TietKiem(){}

void TietKiem::TaoTaiKhoan()
{
    cout << "Moi nhap stk: ";
    cin >> stk;
    cout << "Moi nhap lai suat: ";
    cin >> laisuat;
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


void TietKiem::RutTien()
{
    int temp;
    cout << "Nhap so tien ban muon rut: ";
    cin >> temp;
    if (temp <= sodu)
    {
        sodu = sodu - temp;
        cout << "Rut tien thanh cong!";
    }
    else if (temp > sodu)
        cout << "So du tai khoan khong du de rut!";
        
}

void TietKiem::GuiTien()
{
    TaiKhoan::GuiTien();
}

int TietKiem::SoDu()
{
    return TaiKhoan::SoDu();
}

string TietKiem::getTK()
{
    return "Tiet Kiem";
}

void TietKiem::XuatTaiKhoan()
{
    cout << "STK: " << stk << endl;
    cout << "Lai suat: " << laisuat << endl;
    cout << "So du: " << sodu << endl;
}

#endif /* TietKiem_h */
