#include <iostream>
#include <cmath>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int (*fPtr)(int, int);
    
    fPtr = add;
    int res = add(5, 3);
    cout << res << endl;
    fPtr = sub;
    int ress = sub(5, 3);
    cout << ress << endl;
}
