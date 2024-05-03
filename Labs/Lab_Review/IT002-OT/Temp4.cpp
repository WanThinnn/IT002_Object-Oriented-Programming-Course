

#include <iostream>

using namespace std;


int main()
{
    string st;
    st = "A";
    cout << st << endl;
    char st2 = 'A';
    switch (st2)
    {
        case 'A':
            if (st == "A")
                cout << "ok";
            break;;
        case 'B':
            break;
    }
}
