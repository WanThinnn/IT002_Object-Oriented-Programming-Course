#include <iostream>

using namespace std;
int i = 0;
string order_of_input[] = {"1st", "2nd"};

class CTimeSpan
{
private:
    long m_seconds;

public:
    CTimeSpan() {
        m_seconds = 0;
    }
    CTimeSpan(long seconds) {
        m_seconds = seconds;
    }
    long GetSeconds()  {
        return m_seconds;
    }
    void Add( CTimeSpan &other) {
        m_seconds += other.m_seconds;
    }
    void Subtract( CTimeSpan &other) {
        m_seconds -= other.m_seconds;
    }
    bool Equals( CTimeSpan &other) {
        return m_seconds == other.m_seconds;
    }
    bool NotEquals( CTimeSpan &other)  {
        return m_seconds != other.m_seconds;
    }
    bool GreaterThan( CTimeSpan &other) {
        return m_seconds > other.m_seconds;
    }
    bool GreaterThanOrEqual( CTimeSpan &other) {
        return m_seconds >= other.m_seconds;
    }
    bool LessThan(CTimeSpan &other) {
        return m_seconds < other.m_seconds;
    }
    bool LessThanOrEqual(CTimeSpan &other) {
        return m_seconds <= other.m_seconds;
    }
    void Input()
    {
        long days, hours, minutes, seconds;
        cout << "* Enter The " << order_of_input[i] << " Time Span: " << endl;
        cout << "- Days: ";
        cin >> days;
        cout << "- Hours: ";
        cin >> hours;
        cout << "- Minutes: ";
        cin >> minutes;
        cout << "- Seconds: ";
        cin >> seconds;
        m_seconds = seconds + (minutes * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60);
    }
    void Print()
    {
        cout << "- The CTimeSpan = SUM(seconds + (minutes * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60)): " << m_seconds << "s" << endl;
    }
};

void options(CTimeSpan T[], int option, int ctn)
{
TUYCHON:
    {
        cout << "- Chon phep toan:" << endl << "1. Phep Cong." << endl << "2. Phep Tru." << endl << "3. Phep So Sanh ==." << endl << "4. Phep So Sanh !=." << endl << "5. Phep So Sanh >." << endl << "6. Phep So Sanh >=." << endl << "7. Phep So Sanh <." << endl << "8. Phep So Sanh <=." << endl << "9. Khong Chon." << endl;
        
        cout << "- Option: ";
        do
        {
            cin >> option;
            if (option < 1 or option > 9)
                cout << "Loi, chon lai: ";
        }
        while (option < 1 or option > 9);
        
        switch (option)
        {
            case 1:
                i++;
                T[2].Input();
                T[1].Add(T[2]);
                cout << "-> The 1st Time Span after performing the addition: ";
                cout << T[1].GetSeconds() << "s" << endl;
                i = 0;
                cout << endl;
                break;
                
            case 2:
                i++;
                T[2].Input();
                T[1].Subtract(T[2]);
                cout << "-> The 1st Time Span after performing the subtraction: ";
                cout << T[1].GetSeconds() << "s" << endl;
                i = 0;
                cout << endl;
                break;
                
            case 3:
                i++;
                T[2].Input();
                if (T[1].Equals(T[2]) == 1)
                    cout << "-> The 1st Time Span = The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span != The 2nd Time Span.";
                i = 0;
                cout << endl;
                
            case 4:
                i++;
                T[2].Input();
                if (T[1].NotEquals(T[2]) == 1)
                    cout << "-> The 1st Time Span != The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span == The 2nd Time Span.";
                i = 0;
                cout << endl;
                
            case 5:
                i++;
                T[2].Input();
                if (T[1].GreaterThan(T[2]) == 1)
                    cout << "-> The 1st Time Span > The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span <= The 2nd Time Span.";
                i = 0;
                cout << endl;
                
            case 6:
                i++;
                T[2].Input();
                if (T[1].GreaterThanOrEqual(T[2]) == 1)
                    cout << "-> The 1st Time Span >= The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span < The 2nd Time Span.";
                i = 0;
                cout << endl;
                
            case 7:
                i++;
                T[2].Input();
                if (T[1].LessThan(T[2]) == 1)
                    cout << "-> The 1st Time Span < The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span >= The 2nd Time Span.";
                i = 0;
                cout << endl;
                
            case 8:
                i++;
                T[2].Input();
                if (T[1].LessThanOrEqual(T[2]) == 1)
                    cout << "-> The 1st Time Span <= The 2nd Time Span.";
                else
                        cout << "-> The 1st Time Span > The 2nd Time Span.";
                i = 0;
                cout << endl;
            
            case 9:
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
    CTimeSpan T[2];
    int option = 0, ctn = 0;
    T[1].Input();
    T[1].Print();
    options(T, option, ctn);
}

