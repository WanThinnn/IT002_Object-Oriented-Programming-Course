istream& operator >> (istream& is, CDate &date)
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


ostream& operator << (ostream &os, const CDate date)
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
            else
            {
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
            else
            {
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
    if (month == 4 or month == 6 or month == 9 or month == 11)
    {
        return 30;
    }
    return 31;
}

CDate operator + (CDate date, int days)
{
    while (days > 0)
    {
        int daysInCurrentMonth = date.daysInMonth() - date.day + 1;
        if (days >= daysInCurrentMonth)
        {
            days = days - daysInCurrentMonth;
            date.day = 1;
            if (++date.month > 12)
            {
                date.month = 1;
                ++date.year;
            }
        }
        else
        {
            date.day += days;
            days = 0;
        }
    }
    return date;
}


CDate operator - (CDate date, int days)
{
    while (days > 0) {
        if (days >= date.day)
        {
            days = days - date.day;
            if (--date.month < 1)
            {
                date.month = 12;
                --date.year;
            }
            date.day = date.daysInMonth();
        } else
        {
            date.day -= days;
            days = 0;
        }
    }
    return date;
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

int operator - (CDate date1, CDate date2)
{
    return abs(date1.DeltaDays() - date2.DeltaDays());
}

