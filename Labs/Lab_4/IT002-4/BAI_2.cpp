#include <iostream>

using namespace std;

class CTime
{
    private:
        int hour;
        int minute;
        int second;

    public:
        void input();
        void output();
        CTime(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}
        void setTime(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        int getHour() {
            return hour;
        }
        int getMinute() {
            return minute;
        }
        int getSecond() {
            return second;
        }
        void addSecond(int s);
        void subtractSeconds(int s);
        void deltaCTime(CTime T2);
        void add1Sec();
        void subtract1Sec();
};

void CTime::input()
{
    cout << "* Nhap CTime: " << endl;
    cout << "- Gio: ";
    do
    {
        cin >> hour;
        if (hour < 0 or hour > 24)
            cout << "- Nhap lai gio [0;24]: ";
    }
    while (hour < 0 or hour > 24);
    
    cout << "- Phut: ";
    do
    {
        cin >> minute;
        if (minute < 0 or minute > 60)
            cout << "- Nhap lai phut [0;60]: ";
    }
    while (minute < 0 or minute > 60);
    
    cout << "- Giay: ";
    do
    {
        cin >> second;
        if (second < 0 or second > 60)
            cout << "- Nhap lai giay [0;60]: ";
    }
    while (second < 0 or second > 60);
}


void CTime::addSecond(int s)
{
    second = second + s;
    int k = second/60;
    if (k < 1)
        k = 1;
    else
        if (k >= 1) {
            if (second >= 60) {
                minute = minute + 1*k;
                second = second - 60*k;
            }
            int t = minute/60;
            if (t < 1)
                t = 1;
            else {
                if (minute >= 60) {
                    hour = hour + 1*t;
                    minute = minute - 60*t;
                }
            }
        }
}

void CTime::subtractSeconds(int s)
{
    second = second - s;
    int k = second/60;
    if (k < 1)
        k = 1;
    else
        if (k >= 1) {
            if (second < 0) {
                minute = minute - 1*k;
                second = second + 60*k;
            }
            int t = minute/60;
            if (t < 1)
                t = 1;
            else {
                if (minute < 0) {
                    hour = hour - 1*t;
                    minute = minute + 60*t;
                }
            }
        }
}

void CTime::deltaCTime(CTime T2)
{
    int delta_second;
    hour = abs(T2.hour - hour);
    minute = abs(T2.minute - minute);
    second = abs(T2.second - second);
    delta_second = hour*3600 + minute*60 + second;
    cout << "* Delta(|T2 - T1|) ~ " << delta_second << "s" << endl;
    output();
}

void CTime::add1Sec()
{
    second++;
    if (second >= 60)
    {
        minute = minute + 1;
        second = second - 60;
    }
    
    if (minute >= 60)
    {
        hour = hour + 1;
        minute = minute - 60;
    }
}

void CTime::subtract1Sec()
{
    second--;
    if (second < 0)
    {
        second = second + 60;
        minute = minute - 1;
    }
    if (minute < 0)
    {
        minute = minute + 60;
        hour = hour - 1;
    }
}

void CTime::output()
{
    cout << "* CTime: ";
    if (hour < 10 and minute < 10 and second < 10)
        cout << "0" << hour << ":" << "0" << minute << ":" << "0" << second << endl;
    
    if (hour >= 10 and minute >= 10 and second >= 10)
        cout << hour << ":" << minute << ":" << second << endl;
    
    if (hour < 10 and minute >= 10 and second >= 10)
        cout << "0" << hour << ":" << minute << ":"  << second << endl;
    
    if (hour >= 10 and minute < 10 and second >= 10)
        cout << hour << ":" << "0" << minute << ":" << second << endl;
    
    if (hour >= 10 and minute >= 10 and second < 10)
        cout  << hour << ":" << minute <<  ":" << "0" << second << endl;
    
    if (hour < 10 and minute < 10 and second >= 10)
        cout << "0" << hour << ":" << "0" << minute << ":" << second << endl;
    
    if (hour >= 10 and minute < 10 and second < 10)
        cout << hour << ":" << "0" << minute << ":" << "0" << second << endl;
    
    if (hour < 10 and minute >= 10 and second < 10)
        cout << "0" << hour << ":" << minute << ":" << "0" << second << endl;

}

void options(CTime T)
{
    int s, option, ctn;
    CTime T2;
    TUYCHON:
    {
        cout << "- Chon phep toan:" << endl << "1. Phep Cong Vao So Nguyen Giay." << endl << "2. Phep Tru So Nguyen Giay." << endl << "3. Phep Cong 1 Giay." << endl << "4. Phep Tru 1 Giay." << endl << "5. Phep Tru 2 CTime." << endl <<  "6. Khong Chon." << endl;
        
        cout << "- Option: ";
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
                cout << "- Nhap giay de thuc hien phep toan: ";
                cin >> s;
                T.addSecond(s);
                T.output();
                break;
                
            case 2:
                cout << "- Nhap giay de thuc hien phep toan: ";
                cin >> s;
                T.subtractSeconds(s);
                T.output();
                break;
            
            case 3:
                T.add1Sec();
                cout << "- Ban vua them 1s vao CTime." << endl;
                T.output();
                break;
                
            case 4:
                T.subtract1Sec();
                cout << "- Ban vua tru 1s vao CTime." << endl;
                T.output();
                break;
                
            case 5:
                T2.input();
                T.deltaCTime(T2);
                break;
                
            case 6:
                T.output();
                break;
        }
        cout << endl;
        cout << "* Ban co muon tiep tuc chuong trinh? \n";
        cout << "1. Tiep tuc" << endl << "2. Dung chuong trinh" << endl;
        cout << "* Option: ";
        do
        {
            cin >> ctn;
            if (ctn < 1 or ctn > 2)
                cout << "-> Loi, chon lai: ";
        }
        while (ctn < 1 or ctn > 2);
        if (ctn == 2)
            exit(0);
        if (ctn == 1)
            goto TUYCHON;
        
    }
}



int main()
{
    CTime T, T2;
    T.input();
    options(T);
}
