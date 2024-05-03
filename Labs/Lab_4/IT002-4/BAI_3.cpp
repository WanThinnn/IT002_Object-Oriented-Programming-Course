#include <iostream>

using namespace std;
int i = 1;
class CDate
{
    private:
        int day;
        int month;
        int year;
    public:
        CDate(int d = 1, int m = 1, int y = 1) : day(d), month(m), year(y) {}
        void setDate(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        int getDay() const {
            return day;
        }
        int getMonth() const {
            return month;
        }
        int getYear() const {
            return year;
        }
        void checkday(int &day, int &month, int &year);
        void checkmonth(int &day, int &month, int &year);
        bool isLeapYear() const;
        int daysInMonth() const;
        void addDays(int days);
        void subtractDays(int days);
        int DeltaDays();
//        int DeltaDays(CDate date2) const;
        void add1Day();
        void subtract1Day();
        friend ostream &output(ostream &os, const CDate &date);
        friend istream &input(istream &is, CDate &date);
};

istream &input(istream &is, CDate &date)
{
    int d, m, y;
    char sep1, sep2;
    is >> d >> sep1 >> m >> sep2 >> y;
    
    if (sep1 != '/' or sep2 != '/')
    {
        is.setstate(std::ios_base::failbit);
        cout << "- Loi nhap, he thong se tu dong chuyen ve ngay dau tien cua Cong Nguyen!\n";
    }
    else
    {
        date.checkday(d, m, y);
        date.checkmonth(d, m, y);
        date.setDate(d, m, y);
    }
    
    return is;
}

ostream &output(ostream &os, const CDate &date)
{
    string o_day, o_mon, o_year;
    o_day = to_string(date.getDay());
    o_mon = to_string(date.getMonth());
    o_year = to_string(date.getYear());
    
    if (date.getDay() < 10)
        o_day = "0" + o_day;
    
    if (date.getMonth() < 10)
        o_mon = "0" + o_mon;
    
    if (date.getYear() < 10)
        o_year = "000" + o_year;
    else if (date.getYear() < 100)
        o_year = "00" + o_year;
    else if (date.getYear() < 1000)
        o_year = "0" + o_year;
    
    os << o_day << "/" << o_mon << "/" << o_year;
    return os;
}



void CDate::checkday(int &day, int &month, int &year)
{
    char sep1, sep2;
    if (day < 1 or day > 31 or month < 1 or month > 12)
    do
        {
            cout << "- Loi, Nhap lai CDate theo cau truc sau dd/mm/yyyy: ";
            cin >> day >> sep1 >> month >> sep2 >> year;
            
            if (sep1 != '/' or sep2 != '/')
            {
                cin.setstate(std::ios_base::failbit);
                cout << "- Loi nhap, he thong se tu dong chuyen ve ngay dau tien cua Cong Nguyen!\n";
            }
            else {
                setDate(day, month, year);
            }
        }
    while (day < 1 or day > 31 or month < 1 or month > 12);
}

void CDate::checkmonth(int &day, int &month, int &year)
{
    char sep1, sep2;
    if (day >= 31 and (month == 4 or month == 6 or month == 9 or month == 11))
    {
        do
        {
            cout << "- Loi, Nhap lai CDate theo cau truc sau dd/mm/yyyy: ";
            cin >> day >> sep1 >> month >> sep2 >> year;
            
            if (sep1 != '/' or sep2 != '/')
            {
                cin.setstate(std::ios_base::failbit);
                cout << "- Loi nhap, he thong se tu dong chuyen ve ngay dau tien cua Cong Nguyen!\n";
            }
            else {
                setDate(day, month, year);
            }
        }
        while (day >= 31 and (month == 4 or month == 6 or month == 9 or month == 11));
    }
    
    
    
    else if (day >= 30 and month == 2 and isLeapYear() == 1)
    {
            do
            {
                cout << "- Loi, Nhap lai CDate theo cau truc sau dd/mm/yyyy: ";
                cin >> day >> sep1 >> month >> sep2 >> year;
                
                if (sep1 != '/' or sep2 != '/')
                {
                    cin.setstate(std::ios_base::failbit);
                    cout << "- Loi nhap, he thong se tu dong chuyen ve ngay dau tien cua Cong Nguyen!\n";
                }
                else {
                    setDate(day, month, year);
                }
            }
        while (day >= 30 and month == 2 and isLeapYear() == 1);
    }
    
    else if (day >= 29 and month == 2 and isLeapYear() == 0)
    {
            do
            {
                cout << "- Loi, Nhap lai CDate theo cau truc sau dd/mm/yyyy: ";
                cin >> day >> sep1 >> month >> sep2 >> year;
                
                if (sep1 != '/' or sep2 != '/')
                {
                    cin.setstate(std::ios_base::failbit);
                    cout << "- Loi nhap, he thong se tu dong chuyen ve ngay dau tien cua Cong Nguyen!\n";
                }
                else {
                    setDate(day, month, year);
                }
            }
        while (day >= 29 and month == 2 and isLeapYear() == 0);
    }
}

bool CDate::isLeapYear() const
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            return 1;
        else
            return 0;
    }
        else if (year % 4 == 0)
            return 1;
        else
            return 0;
}

int CDate::daysInMonth() const
{
    if (month == 2)
    {
        return isLeapYear() ? 29 : 28;
    }
    if (month == 4 or month == 6 or month == 9 or month == 11) {
        return 30;
    }
    return 31;
}

void CDate::addDays(int days)
{
    while (days > 0)
    {
        int daysInCurrentMonth = daysInMonth() - day + 1;
        if (days >= daysInCurrentMonth)
        {
            days = days - daysInCurrentMonth;
            day = 1;
            if (++month > 12)
            {
                month = 1;
                ++year;
            }
        }
        else
        {
            day += days;
            days = 0;
        }
    }
}
void CDate::subtractDays(int days)
{
    while (days > 0) {
        if (days >= day)
        {
            days = days - day;
            if (--month < 1)
            {
                month = 12;
                --year;
            }
            day = daysInMonth();
        } else
        {
            day -= days;
            days = 0;
        }
    }
}


void CDate::add1Day()
{
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
    
    string o_day, o_mon, o_year;
    o_day = to_string(day);
    o_mon = to_string(month);
    o_year = to_string(year);
    
    if (day < 10)
        o_day = "0" + o_day;
    
    if (month < 10)
        o_mon = "0" + o_mon;
    
    if (year < 10)
        o_year = "000" + o_year;
    else if (year < 100)
        o_year = "00" + o_year;
    else if (year < 1000)
        o_year = "0" + o_year;
    
    cout << o_day << "/" << o_mon << "/" << o_year;
    
}

void CDate::subtract1Day()
{
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
    
    string o_day, o_mon, o_year;
    o_day = to_string(day);
    o_mon = to_string(month);
    o_year = to_string(year);
    if (day < 10)
        o_day = "0" + o_day;
    
    if (month < 10)
        o_mon = "0" + o_mon;
    
    if (year < 10)
        o_year = "000" + o_year;
    else if (year < 100)
        o_year = "00" + o_year;
    else if (year < 1000)
        o_year = "0" + o_year;
    
    cout << o_day << "/" << o_mon << "/" << o_year;
}


//int CDate::DeltaDays(CDate date2) const
//{
//    int delta_d = abs(getDay() - date2.getDay());
//    int delta_m = abs(getMonth()- date2.getMonth());
//    int delta_y = abs(getYear() - date2.getYear());
//    return delta_d + delta_m*30 + delta_y*365;
//
//}

int CDate::DeltaDays()
{
    if (month < 3)
    {
        year--;
        month += 12;
    }
    return 365*year + year/4 - year/100 + year/400 + (153*month - 457)/5 + day - 306;
    
}


int main()
{
    CDate date, date2;
    int daysToAdd, daysToSubtract;
    cout << "* Nhap CDate theo cau truc sau dd/mm/yyyy: ";
    input(cin, date);

    cout << "- Ngay cua CDate hien tai la: ";
    output(cout, date) << endl;

    cout << "- Nhap k ngay de thuc hien phep cong: ";
    cin >> daysToAdd;
    date.addDays(daysToAdd);
    cout << "- Sau khi them k = " << daysToAdd << " ngay, ta co: ";
    output(cout, date) << endl;

    cout << "- Nhap k ngay de thuc hien phep tru: ";
    cin >> daysToSubtract;
    date.subtractDays(daysToSubtract);
    cout << "- Sau khi giam k = " << daysToSubtract << " ngay, ta co: ";
    output(cout, date) << endl;

    cout << "- Sau khi tang 1 ngay ta co: ";
    date.add1Day();
    cout << endl;

    cout << "- Sau khi giam 1 ngay ta co: ";
    date.subtract1Day();
    cout << endl;

    cout << "-> Sau khi thuc hien cac phep toan, CDate la: ";
    output(cout, date);
    cout << endl;
    cout << endl;
    
    cout << "* Tinh Delta(days):" << endl;
    cout << "* Nhap CDate 1 theo cau truc sau dd/mm/yyyy: ";
    input(cin, date);
    cout << "* Nhap CDate 2 theo cau truc sau dd/mm/yyyy: ";
    input(cin, date2);
    cout << "- Ngay cua CDate 1 hien tai la: ";
    output(cout, date);
    cout << endl;
    cout << "- Ngay cua CDate 2 hien tai la: ";
    output(cout, date2);
    cout << endl;
    cout << "-> Delta(|CDate1 - CDate2|) = " << abs(date.DeltaDays() - date2.DeltaDays()) << " ngay (xap xi hoac bang)." <<  endl;
    return 0;
}

