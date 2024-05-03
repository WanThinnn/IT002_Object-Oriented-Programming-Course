using namespace std;

istream& operator >> (istream& is, CTime &C)
{
    cout << "* Nhap CTime: " << endl;
    cout << "- Gio: ";
    do
    {
        is >> C.hour;
        if (C.hour < 0 or C.hour > 24)
            cout << "- Nhap lai gio [0;24]: ";
    }
    while (C.hour < 0 or C.hour > 24);
    
    cout << "- Phut: ";
    do
    {
        is >> C.minute;
        if (C.minute < 0 or C.minute > 60)
            cout << "- Nhap lai phut [0;60]: ";
    }
    while (C.minute < 0 or C.minute > 60);
    
    cout << "- Giay: ";
    do
    {
        is >> C.second;
        if (C.second < 0 or C.second > 60)
            cout << "- Nhap lai giay [0;60]: ";
    }
    while (C.second < 0 or C.second > 60);
    return is;
}


CTime operator + (CTime A, int s)
{
    A.second = A.second + s;
    int k = A.second/60;
    if (k < 1)
        k = 1;
    else
        if (k >= 1) {
            if (A.second >= 60)
            {
                A.minute = A.minute + 1*k;
                A.second = A.second - 60*k;
            }
            int t = A.minute/60;
            if (t < 1)
                t = 1;
            else {
                if (A.minute >= 60)
                {
                    A.hour = A.hour + 1*t;
                    A.minute = A.minute - 60*t;
                }
            }
        }
    return A;
}


CTime operator - (CTime A, int s)
{
    A.second = A.second - s;
    int k = A.second/60;
    if (k < 1)
        k = 1;
    else
        if (k >= 1)
        {
            if (A.second < 0)
            {
                A.minute = A.minute - 1*k;
                A.second = A.second + 60*k;
            }
            int t = A.minute/60;
            if (t < 1)
                t = 1;
            else
            {
                if (A.minute < 0)
                {
                    A.hour = A.hour - 1*t;
                    A.minute = A.minute + 60*t;
                }
            }
        }
    return A;
}

int operator - (CTime A, CTime B)
{
    int delta_second;
    A.hour = abs(A.hour - B.hour);
    A.minute = abs(A.minute - B.minute);
    A.second = abs(A.second - B.second);
    delta_second = A.hour*3600 + A.minute*60 + A.second;
    return delta_second;
}

ostream& operator << (ostream &os, CTime C)
{
    string st_s, st_m, st_h;
    st_s = to_string(C.getSecond());
    st_m = to_string(C.getMinute());
    st_h = to_string(C.getHour());
    if (C.getSecond() < 10)
        st_s = "0" + st_s;
    if (C.getMinute() < 10)
        st_m = "0" + st_m;
    if (C.getHour() < 10)
        st_h = "0" + st_h;
    os << st_h << ":" << st_m << ":" << st_s;
    return os;
}
