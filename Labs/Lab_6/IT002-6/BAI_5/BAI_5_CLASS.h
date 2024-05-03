using namespace std;
class CDate
{
    private:
        int day;
        int month;
        int year;
    public:
        CDate(int d = 1, int m = 1, int y = 1) : day(d), month(m), year(y) {}
        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        ~CDate() {}
        int getDay() const {return day;}
        int getMonth() const {return month;}
        int getYear() const {return year;}
        void checkday(int &day, int &month, int &year);
        void checkmonth(int &day, int &month, int &year);
        bool isLeapYear() const;
        int daysInMonth() const;
        int DeltaDays();
//        int DeltaDays(CDate date2) const;
        friend istream& operator >> (istream& is, CDate &date);
        friend istream& operator << (istream& is, CDate date);
        friend CDate operator + (CDate date, int days);
        friend CDate operator - (CDate date, int days);
        friend int operator - (CDate date1, CDate date2);
        CDate operator ++ (int)
        {
            CDate temp = *this;
            int nd, nm, ny;
            if ((day == 30) and (month == 4 or month == 6 or month == 9 or month == 11))
            {
                nd = 1;
                nm = month+1;
                ny = year;
            }
            
            else if ((day == 31) and (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10))
            {
                {
                    nd = 1;
                    nm = month+1;
                    ny = year;
                }
            }
            
            else if ((day == 31) and (month == 12))
            {
                {
                    nd = 1;
                    nm = 1;
                    ny = year+1;
                }
            }
            
            else if (month == 2 and day == 29 and isLeapYear() == 1)
            {
                    nd = 1;
                    nm = 3;
                    ny = year;
            }
                
            else if (month == 2 and day == 28 and isLeapYear() == 0)
                {
                    nd = 1;
                    nm = 3;
                    ny = year;
                }
            
            else
            {
                nd = day + 1;
                nm = month;
                ny = year;
            }
            day = nd;
            month = nm;
            year = ny;
            
            return temp;
        }
        CDate operator -- (int)
        {
            CDate temp = *this;
            int nd, nm, ny;
            if (day == 1 and month == 3)
            {
                month--;
                nd = daysInMonth();
                nm = month;
                ny = year;
            }
            else if (day == 1 and month == 1)
            {
                month = 12;
                nd = daysInMonth();
                nm = 12;
                ny = year - 1;
            }
            
            else if (day == 1)
            {
                month--;
                nd = daysInMonth();
                nm = month;
                ny = year;
            }
            else
            {
                nd = day - 1;
                nm = month;
                ny = year;
            }
            day = nd;
            month = nm;
            year = ny;
            return temp;
        }
};
