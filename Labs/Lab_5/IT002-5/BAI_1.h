#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        char *str;
        int length;
        static const int CINLIN = 1024;
        static int Num_strings;      

    public:
        // Constructor
        String(const char *s = "");
        
        // Copy constructor
        String(const String& other);

        // Destructor
//        ~String();

        // Getter for string length
        int getLength() const {return length;}
        
        // Concatenate two strings
        friend String operator + (String &St1, const String & St2);

        // Reverse the string
        void reverse();

        // Input operator
        friend istream & operator >> (istream &is, String &s);

        // Output operator
        friend ostream & operator << (ostream &os, const String &s);
};


