#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>

# define Pi 3.141592653589793238462643383279502884L
using namespace std;

char DG[100];
string DG_T;
int I = 0;

struct Point
{
    float x, y;
};

Point K, Q, H;

class DaGiac
{
    private:
        Point arr[3];
        float alpha, k;
    public:
        DaGiac()
        {
            arr[0].x = arr[1].x = arr[2].x = 0;
            arr[0].y = arr[1].y = arr[2].y = 0;
        }
    
        DaGiac(Point a[3]){
                for (int i = 0; i < 3; i++)
            {
                arr[i].x = a[i].x;
                arr[i].y = a[i].y;
            }
        }
        void input(char DG[], int &N);
        void setDaGiac(Point u[100]);
        void tinhtien(int N);
        void phepquayO(int N);
        void phepquayI(int N);
        void phepvituO(int N);
        void phepvituI(int N);
        void options(int N);
        void output(int N);
        void draw();
};

void DaGiac::input(char DG[], int &N)
{

    cout << "* Nhap Ten cua da giac thu " << I+1 << ": ";
    cin >> DG_T;
    N = DG_T.length();
    for (int i = 0; i < DG_T.length(); i++)
    DG[i] = DG_T[i];
    cout << "* Nhap diem cua da giac " << DG <<":\n";
    for (int i = 0; i < N; i++)
    {
        cout << "- Hoanh do " << DG[i] << "x = ";
        cin >> arr[i].x;
        cout << "- Tung do " << DG[i] << "y = ";
        cin >> arr[i].y;
    }
    cout << endl;
}

void DaGiac::tinhtien(int N)
{
    cout << "* Nhap tung do, hoanh do cua Q(x,y): \n";
    cout << "- Hoanh do Qx = ";
    cin >> Q.x;
    cout << "- Tung do Qy = ";
    cin >> Q.y;
    for (int i = 0; i < N ; i++)
    {
        arr[i].x = arr[i].x + Q.x;
        arr[i].y = arr[i].y + Q.y;
    }
    cout << "* Ta co da giac " << DG << " voi phep tinh tien (" << Q.x << "," << Q.y << "): "  << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
}

void DaGiac::phepquayO(int N)
{
    Point temp[100];
    float al;
    cout << "* Nhap goc alpha: ";
    cin >> alpha;
    
    al = alpha*Pi/180;
    for (int i = 0; i < N; i++)
        temp[i].x = arr[i].x*cos(al) - arr[i].y*sin(al);

    
    for (int i = 0; i < N; i++)
        temp[i].y = arr[i].x*sin(al) + arr[i].y*cos(al);


    cout << "* Ta co da giac " << DG << " voi phep quay tam O(0,0), goc " << alpha << " do : " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}
void DaGiac::phepquayI(int N)
{
    Point temp[100];
    float al;
    cout << "* Nhap diem I: \n";
    cout << "- Hoanh do Kx = ";
    cin >> K.x;
    cout << "- Tung do Ky = ";
    cin >> K.y;
    cout << "* Nhap goc alpha: ";
    cin >> alpha;
    al = alpha*Pi/180;
    for (int i = 0; i < N; i++)
    {
        temp[i].x = K.x + (arr[i].x - K.x)*cos(al) - (arr[i].y - K.y)*sin(al);
        temp[i].y = K.x + (arr[i].x - K.x)*sin(al) + (arr[i].y - K.y)*cos(al);
       
    }
    
    cout << "* Ta co da giac "<< DG <<" voi phep quay tam I(" << K.x << "," << K.y << ") goc "  << alpha << " do: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
}

void DaGiac::phepvituO(int N)
{
    Point temp[100];
    cout << "* Nhap he so k: ";
    cin >> k;
    for (int i = 0; i < N; i++)
        temp[i].x = abs(k)*arr[i].x;

    
    for (int i = 0; i < N; i++)
        temp[i].y = abs(k)*arr[i].y;


    cout << "* Ta co da giac "<< DG <<" voi phep vi tu tam O(0,0), he so k = " << fixed << ": " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}

void DaGiac::phepvituI(int N)
{
    Point temp[100];
    cout << "* Nhap diem I: \n";
    cout << "- Hoanh do Hx = ";
    cin >> H.x;
    cout << "- Tung do Hy = ";
    cin >> H.y;
    cout << "* Nhap he so k: ";
    cin >> k;
    for (int i = 0; i < N; i++)
        temp[i].x = k*arr[i].x + (1-k)*H.x;

    
    for (int i = 0; i < N; i++)
        temp[i].y = k*arr[i].y + (1-k)*H.y;


    cout << "* Ta co da giac "<< DG <<" voi phep vi tu tam I(" << H.x << "," << H.y << ") he so k = "  << k << ": " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << temp[i].x << "," << temp[i].y << ")" << endl;
    }
}



void DaGiac::output(int N)
{
    cout << "* Ta co da giac "<< DG <<" voi:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "- Diem " << DG[i] << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
    options(N);
}

void DaGiac::options(int N)
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
                phepquayO(N);
                break;
            case 2:
                phepquayI(N);
                break;
            case 3:
                phepvituO(N);
                break;
            case 4:
                phepvituI(N);
                break;
            case 5:
                tinhtien(N);
                break;
            case 6:
                ctn = 2;
                break;
        };
    }
    cout << endl;
    cout << "* Ban co muon tiep tuc chuong trinh? \n";
    cout << "1. Tiep tuc" << endl << "2. Chuyen sang da giac tiep theo" << endl << "3. Dung chuong trinh" << endl;
    cout << "* Option: ";
    do
    {
        cin >> ctn;
        if (ctn < 1 or ctn > 3)
            cout << "Loi, chon lai: ";
    }
    while (ctn < 1 or ctn > 3);
    if (ctn == 3)
        exit(0);
    else if (ctn == 1)
        goto chon;
    else if (ctn == 2)
    {
        cout << endl;
        I++;
        input(DG, N);
    }
        
}


int main()
{
    DaGiac T;
    int N;
    T.input(DG, N);
    T.output(N);
    cout << endl;
}
