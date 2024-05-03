//Viết chương trình nhập vào một ngày.Tìm ngày kế tiếp và xuất kết quả.
#include <iostream>

using namespace std;

class Date
{
    private:
        int day, month, year;
        int nd, nm, ny;
    public:
        void input();
        void checkday();
        void checkmonth();
        int checkyear();
        void solve();
        void output();
};


void Date::input()
{
    cin >> day;
    cin >> month;
    cin >> year;
    checkday();
    checkmonth();
    
    
}

void Date::checkday()
{
    if (day < 1 or day > 31)
    do
        {
            cout << "nhap lai ngay, thang, nam: ";
            cin >> day >> month >> year;
        }
    while (day < 1 or day > 31);
}

void Date::checkmonth()
{
    if (day >= 31 and (month == 4 or month == 6 or month == 9 or month == 11))
    {
        do
        {
            cout << "nhap lai ngay, thang, nam: ";
            cin >> day >> month >> year;
        }
        while (day >= 31 and (month == 4 or month == 6 or month == 9 or month == 11));
    }
    
    
    
    else if (day >= 30 and month == 2 and checkyear() == 1)
    {
            do
            {
                cout << "nhap lai ngay, thang, nam: ";
                cin >> day >> month >> year;
            }
        while (day >= 30 and month == 2 and checkyear() == 1);
    }
    
    else if (day >= 29 and month == 2 and checkyear() == 0)
    {
            do
            {
                cout << "nhap lai ngay, thang, nam: ";
                cin >> day >> month >> year;
            }
        while (day >= 29 and month == 2 and checkyear() == 0);
    }
}


int Date::checkyear()
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

void Date::solve()
{
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
    
    else if (month == 2 and day == 29 and checkyear() == 1)
    {
            nd = 1;
            nm = 3;
            ny = year;
    }
        
    else if (month == 2 and day == 28 and checkyear() == 0)
        {
            nd = 1;
            nm = 3;
            ny = year;
        }
    
    else
    {
        nd = day +1;
        nm = month;
        ny = year;
    }

}
    



void Date::output()
{
    cout << "ngay hien tai la: " << day << "/" << month << "/" << year << endl;
    cout << "ngay hien ke tiep la: " << nd << "/" << nm << "/" << ny << endl;
}



int main()
{
    Date d;
    d.input();
    d.solve();
    d.output();
}
