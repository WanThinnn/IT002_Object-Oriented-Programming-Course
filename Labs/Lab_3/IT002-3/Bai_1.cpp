#include <iostream>
#include <stdio.h>
#include <stdlib.h>



using namespace std;

struct Point
{
    float x, y;
};

class Points
{
    private:
        Point P;
    public:
        Points(){
            P.x = 0;
            P.y = 0;
        }
        Points(float Px, float Py){
            P.x = Px;
            P.y = Py;
        }
        void input();
        float getPx() {
            return P.x;
        }
        float getPy() {
            return P.y;
        }
        void setPxy(float Kx, float Ky);
        void tinhtien(float Qx, float Qy);
        void output();
        void draw();
};

void Points::input()
{
    cout << "Hoanh do Px = ";
    cin >> P.x;
    cout << "Tung do Py = ";
    cin >> P.y;
}

void Points::setPxy(float Kx, float Ky)
{
    
    P.x = Kx;
    P.y = Ky;
}

void Points::tinhtien(float Qx, float Qy)
{
    P.x = P.x + Qx;
    P.y = P.y + Qy;
}

void Points::output()
{
    cout << "Vay ta co diem A(" << getPx() << "," << getPy() << ")";
}

void Options(Points A, Point Q, Point K, int &option)
{
    cout << "Co muon set gia tri cua Px va Py khong? (1/0) \n";
    cout << "Option: ";
    do
    {
        cin >> option;
        if (option < 0 or option > 1) cout << "Loi, chon lai: ";
    }
    while (option < 0 or option > 1);
    switch (option)
    {
        case 1:
            cout << "Hoanh do Kx = ";
            cin >> K.x;
            cout << "Tung do Ky = ";
            cin >> K.y;
            A.setPxy(K.x, K.y);
            cout << "Hoanh do va tung do moi cua Px, Py dc set tu Kx, Ky la: " << A.getPx() << " " << A.getPy();
            break;
        case 0:
            cout << "Hoanh do va tung do cua Px, Py la: " << A.getPx() << " " << A.getPy();
            break;
    };
    cout << endl;
    cout << "Co muon tinh tien gia tri cua Px va Py khong? (1/0) \n";
    cout << "Options: ";
    do
    {
        cin >> option;
        if (option < 0 or option > 1) cout << "Loi, chon lai: ";
    }
    while (option < 1 or option > 1);
    switch (option)
    {
        case 1:
            cout << "Hoanh do Qx = ";
            cin >> Q.x;
            cout << "Tung do Qy = ";
            cin >> Q.y;
            A.tinhtien(Q.x, Q.y);
            cout << "Hoanh do va tung do sau tinh tien cua Px, Py la: " << A.getPx() << " " << A.getPy();
            break;
        case 0:
            cout << "Hoanh do va tung do cua Px, Py van la: " << A.getPx() << " " << A.getPy();
            break;
    };
}

int main()
{
    Points A;
    Point Q, K;
    int option;
    A.input();
    Options(A, Q, K, option);
    cout << endl;
    A.output();
    cout << endl;
}
