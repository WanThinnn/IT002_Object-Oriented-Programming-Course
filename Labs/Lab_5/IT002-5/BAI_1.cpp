#include <iostream>
#include <stdio.h>
#include <string>
#include "BAI_1.h"

String::String(const char *s)
{
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}

istream & operator >> (istream &is, String &s)
{
    char temp[String::CINLIN];
    is.get(temp, String::CINLIN);
    if (is)
    {
        s = temp;
    }
    
    while (is and is.get() != '\n')
        continue;
    
    s = String(temp);

    return is;
}


ostream & operator << (ostream &os, const String &s)
{
    os << s.str;
    return os;
}

//String::~String()
//{
//    delete [] str;
//}

String::String(const String &other)
{
    length = other.length;
    str = new char[length+1];
    strcpy(str, other.str);
}

String operator + (String &St1, const String &St2)
{
    char *result = new char[St1.length + St2.length];
    char *temp = new char[St1.length + St2.length];
    char *S1 = new char[St1.length];
    strcpy(S1, St1.str);
    char *S2 = new char[St2.length];
    strcpy(S2, St2.str);
    strcat(S1, S2);
    strcpy(result, S1);
    return result;
}

void String::reverse()
{
    char *result = new char [length+1];
    int j = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        result[j] = str[i];
        j++;
    }
    cout << result;
}

int main()
{
    String s1, s2, s3;
    cin >> s1;
    cin >> s2;
    s3 = s1 + s2;
    cout << s3 << endl;
    s3.reverse();
    
}
