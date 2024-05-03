//Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh.Tính điểm trung bình và xuất kết quả.
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

class Students
{
    private:
        string HT;
        float dT, dV, dTB;
        int64_t n;
    public:
        void normalize(string &st1, int64_t &n);
        void input();
        void solve();
        void output();
};


void Students::input()
{
    getline(cin, HT);
    cin >> dT >> dV;
}

void Students::normalize(string &st1, int64_t &n)
{
    n = st1.length();
    
    for (int i = 0; i<n; i++)
        st1[i]=tolower(st1[i]);
    
    for (int i = 0; i<n; i++)
    {
        if (st1[0] == ' ')
            st1.erase(st1.begin() + 0);
        if (st1[n-1] == ' ')
            st1.erase(st1.begin() + (n-1));
    }
    
    for (int i = 0; i<n; i++)
        if ((st1[i] == ' ') && (st1[i+1] == ' '))
            st1.erase(st1.begin() + i);

    st1[0]=toupper(st1[0]);

    for (int i = 0; i<n; i++)
            if (st1[i] == ' ')
                st1[i+1]=toupper(st1[i+1]);
    
  
}

void Students::solve()
{
    normalize(HT, n);
    dTB = (dT + dV)/2;
}


void Students::output()
{
    n = HT.length();
    while(HT[n-1] == ' ')
            n--;
    for (int i = 0; i < n; i++)
        cout << HT[i];
    cout << " " << dTB << endl;
}


int main()
{
    Students A;
    A.input();
    A.solve();
    A.output();
}
