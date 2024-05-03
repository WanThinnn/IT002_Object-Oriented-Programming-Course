#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>

# define Pi 3.141592653589793238462643383279502884L
using namespace std;

char TG[100];


struct Point
{
    float x, y;
};

Point K, Q, H;

class TamGiac
{
    private:
        Point arr[3];
        float alpha, k;
    public:
        TamGiac()
        {
            arr[0].x = arr[1].x = arr[2].x = 0;
            arr[0].y = arr[1].y = arr[2].y = 0;
        }
    
        TamGiac(Point a[3])
        {
            for (int i = 0; i < 3; i++)
            {
                arr[i].x = a[i].x;
                arr[i].y = a[i].y;
            }
        }
        void input(char TG[]);
        void setTamGiac(Point u[3]);
        void tinhtien();
        void phepquayO();
        void phepquayI();
        void phepvituO();
        void phepvituI();
        void options();
        void output();
        void draw();
};

void TamGiac::input(char TG[])
{
    string TG_T;
    cout << "* Nhap Ten cua tam giac ";
    do
    {
        cin >> TG_T;
        if (TG_T.length() > 3)
        cout << "* Nhap lai Ten cua tam giac ";
    }
    while (TG_T.length() > 3);
    for (int i = 0; i < 3; i++)
        TG[i] = TG_T[i];
    cout << "* Nhap diem cua tam giac " << TG <<":\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "- Hoanh do " << TG[i] << "x = ";
        cin >> arr[i].x;
        cout << "- Tung do " << TG[i] << "y = ";
        cin >> arr[i].y;
    }
    cout << endl;
}

void TamGiac::tinhtien()
{
    cout << "* Nhap tung do, hoanh do cua Q(x,y): \n";
    cout << "- Hoanh do Qx = ";
    cin >> Q.x;
    cout << "- Tung do Qy = ";
    cin >> Q.y;
    for (int i = 0; i < 3; i++)
    {
        arr[i].x = arr[i].x + Q.x;
        arr[i].y = arr[i].y + Q.y;
    }
    cout << "* Ta co tam giac " << TG << " voi phep tinh tien (" << Q.x << "," << Q.y << "): "  << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
}

void TamGiac::phepquayO()
{
    Point temp[3];
    float al;
    cout << "* Nhap goc alpha: ";
    cin >> alpha;
    
    al = alpha*Pi/180;
    for (int i = 0; i < 3; i++)
        temp[i].x = arr[i].x*cos(al) - arr[i].y*sin(al);
    
    for (int i = 0; i < 3; i++)
        temp[i].y = arr[i].x*sin(al) + arr[i].y*cos(al);

    cout << "* Ta co tam giac " << TG << " voi phep quay tam O(0,0), goc " << alpha << " do : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}
void TamGiac::phepquayI()
{
    Point temp[3];
    float al;
    cout << "* Nhap diem I: \n";
    cout << "- Hoanh do Kx = ";
    cin >> K.x;
    cout << "- Tung do Ky = ";
    cin >> K.y;
    cout << "* Nhap goc alpha: ";
    cin >> alpha;
    al = alpha*Pi/180;
    for (int i = 0; i < 3; i++)
    {
        temp[i].x = K.x + (arr[i].x - K.x)*cos(al) - (arr[i].y - K.y)*sin(al);
        temp[i].y = K.y + (arr[i].x - K.x)*sin(al) + (arr[i].y - K.y)*cos(al);
       
    }
    
    cout << "* Ta co tam giac "<< TG <<" voi phep quay tam I(" << K.x << "," << K.y << ") goc "  << alpha << " do: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}

void TamGiac::phepvituO()
{
    Point temp[3];
    cout << "* Nhap he so k: ";
    cin >> k;
    for (int i = 0; i < 3; i++)
        temp[i].x = abs(k)*arr[i].x;

    
    for (int i = 0; i < 3; i++)
        temp[i].y = abs(k)*arr[i].y;


    cout << "* Ta co tam giac " << TG << " voi phep vi tu tam O(0,0), he so k = " << fixed << ": " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}

void TamGiac::phepvituI()
{
    Point temp[3];
    cout << "* Nhap diem I: \n";
    cout << "- Hoanh do Hx = ";
    cin >> H.x;
    cout << "- Tung do Hy = ";
    cin >> H.y;
    cout << "* Nhap he so k: ";
    cin >> k;
    for (int i = 0; i < 3; i++)
        temp[i].x = k*arr[i].x + (1-k)*H.x;

    
    for (int i = 0; i < 3; i++)
        temp[i].y = k*arr[i].y + (1-k)*H.y;


    cout << "* Ta co tam giac " << TG << " voi phep vi tu tam I(" << H.x << "," << H.y << ") he so k = "  << k << ": " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}

void TamGiac::output()
{
    cout << "* Ta co tam giac "<< TG <<" voi:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "- Diem " << TG[i] << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
    options();
}

void TamGiac::options()
{
    int option, ctn;
    chon:
    {
    cout << endl;
    cout << "* Vui long chon phep bien hinh: \n";
    cout << "1. Phep quay tam O" << endl << "2. Goc quay tam I(Kx, Ky): " << endl << "3. Phep vi tu tam O: "<< endl << "4. Phep vi tu tam I(Hx, Hy): " << endl << "5. Phep tinh tien Q(x,y): " << endl << "6. Khong chon" << endl;
    cout << endl;
    cout << "* Option: ";

        do
        {
            cin >> option;
            if (option < 1 or option > 6)
                cout << "Loi, chon lai: ";
        }
        while (option < 1 or option > 6);
        
        switch (option)
        {
            case 1:
                phepquayO();
                break;
            case 2:
                phepquayI();
                break;
            case 3:
                phepvituO();
                break;
            case 4:
                phepvituI();
                break;
            case 5:
                tinhtien();
                break;
            case 6:
                ctn = 2;
                break;
        };
    }
    cout << endl;
    cout << "* Ban co muon tiep tuc chuong trinh? \n";
    cout << "1. Tiep tuc" << endl << "2. Dung chuong trinh" << endl;
    cout << "* Option: ";
    do
    {
        cin >> ctn;
        if (ctn < 1 or ctn > 2)
            cout << "Loi, chon lai: ";
    }
    while (ctn < 1 or ctn > 2);
    if (ctn == 2)
        exit(0);
    else if (ctn == 1)
        goto chon;
}


int main()
{
    TamGiac T;
    T.input(TG);
    T.output();
    cout << endl;
}
