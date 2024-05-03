using namespace std;

class CTime
{
    private:
        int second;
        int minute;
        int hour;
    
    public:
        CTime(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}
        void setTime(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        ~CTime() {}
        
        int getHour() {return hour;}
        int getMinute() {return minute;}
        int getSecond() {return second;}
        friend istream& operator >> (istream& is, CTime &C);
        friend ostream& operator << (istream& os, CTime C);
        friend CTime operator + (CTime A, int s);
        friend CTime operator - (CTime A, int s);
        friend int operator - (CTime A, CTime B);
        CTime operator ++ (int)
        {
            CTime temp = *this;
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
                hour = hour % 24;
            }
            return temp;
        }
    
        CTime operator -- (int)
        {
            CTime temp = *this;
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
            if (hour < 0)
                hour = hour + 24;
            return temp;
        }
};
