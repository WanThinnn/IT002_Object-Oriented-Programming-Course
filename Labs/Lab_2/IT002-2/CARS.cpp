
#include <stdio.h>
#include <iostream>

using namespace std;

class CAR
{
    private:
        string mx, hsx, ms;
        int gia, nsx;
    public:
        CAR();
        int km,nbd;
        void input();
        int tuoixe();
        int baoduong();
        void output();
        ~CAR();
    
};

void CAR::input()
{
    fflush(stdin);
    cout << "- Xin moi nhap mau xe: ";
    getline(cin, mx);
    cout << "- Xin moi nhap hang san xuat: ";
    getline(cin, hsx);
    cout << "- Xin moi nhap mau sac cua xe: ";
    getline(cin, ms);
    cout << "- Xin moi nhap gia: ";
    cin >> gia;
    cout << "- Xin moi nhap nam san xuat: ";
    cin >> nsx;
    cout << "- Xin moi nhap so km da di: ";
    cin >> km;
    cout << "- Xin moi nhap thoi gian bao duong gan nhat: ";
    cin >> nbd;
}

int CAR::tuoixe(){
    return (2023 - nsx);
}

int CAR::baoduong()
{
    
    return 0;
}


void CAR::output()
{
    cout << "Mau xe: " << mx << endl;
    cout << "Hang san xuat: " << hsx << endl;
    cout << "Mau sac: " << ms << endl;
    cout << "Gia xe: " << gia << endl;
    cout << "Tuoi xe: " << tuoixe() << endl;
}


int main()
{
    CAR car1;
    car1.input();
    car1.output();
}
