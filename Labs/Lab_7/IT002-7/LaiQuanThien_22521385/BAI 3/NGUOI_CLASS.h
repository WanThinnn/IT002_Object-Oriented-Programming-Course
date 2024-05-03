#ifndef NGUOI_CLASS
#define NGUOI_CLASS

using namespace std;
class NGUOI
{
    private:
        string name, bthday, address;
        int age;
    public:
        NGUOI();
        ~NGUOI();
        friend istream& operator >> (istream& is, NGUOI &A);
        friend ostream& operator << (ostream& os, NGUOI A);
};

#endif
