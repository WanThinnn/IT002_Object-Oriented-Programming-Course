#include <iostream>
#include "BAI_5_CLASS.h"
#include "BAI_5_CODE.h"

int main()
{
    CDate date, date2;
    int daysToAdd, daysToSubtract;
    cout << "* Nhap CDate theo cau truc sau dd/mm/yyyy: ";
    cin >> date;
    cout << "- Ngay cua CDate hien tai la: ";
    cout << date << endl;

    cout << "- Nhap k ngay de thuc hien phep cong: ";
    cin >> daysToAdd;
    cout << "-> Sau khi them k = " << daysToAdd << " ngay, ta co: ";
    cout << date + daysToAdd << endl;

    cout << "- Nhap k ngay de thuc hien phep tru: ";
    cin >> daysToSubtract;
    cout << "-> Sau khi giam k = " << daysToSubtract << " ngay, ta co: ";
    cout << date - daysToSubtract << endl;

    cout << "-> Sau khi tang 1 ngay ta co: ";
    date++;
    cout << date << endl;

    cout << "-> Sau khi giam 1 ngay ta co: ";
    date--;
    cout << date << endl;

//    cout << "-> Sau khi thuc hien cac phep toan, CDate la: ";
//    cout << date;
//    cout << endl;
//    cout << endl;

    cout << "* Tinh Delta(days):" << endl;
    cout << "* Nhap CDate 1 theo cau truc sau dd/mm/yyyy: ";
    cin >> date;
    cout << "* Nhap CDate 2 theo cau truc sau dd/mm/yyyy: ";
    cin >> date2;
    cout << "- Ngay cua CDate 1 hien tai la: ";
    cout << date << endl;
    cout << "- Ngay cua CDate 2 hien tai la: ";
    cout << date2 << endl;
    cout << "-> Delta(|CDate1 - CDate2|) = " << date - date2 << " ngay (xap xi hoac bang)." <<  endl;
    return 0;
}

