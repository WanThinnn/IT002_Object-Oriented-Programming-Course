#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool Check_IO (const string INPUT, const string OUTPUT)
{
    fstream fin(INPUT);
    fstream fout(OUTPUT);
    if (!fin or !fout)
    {
        cout << "Can not open file, file does not exit!" << endl;
        return false;
    }
    else
    {
        fin.close();
        fout.close();
        return true;
    }

}

void Count_String(const string INPUT, const string OUTPUT)
{
    if (Check_IO(INPUT, OUTPUT) == true)
    {
        fstream fin(INPUT);
        fstream fout(OUTPUT, ios::out);
        string s;
        map <string, int> M;
        vector <vector<string>> ST;
        vector <char> CH;
        vector <string> TEMP;
        vector <string> input;
        int j = 0;
        while (fin >> s)
        {
            if (s[s.length() - 1] != '.' and s[s.length() - 1] != '!' and s[s.length() - 1] != '?')
            {
                M[s]++;
                TEMP.push_back(s);
                input.push_back(s);
            }
            else
            {
                j++;
                input.push_back(s);
                CH.push_back(s[s.length() - 1]);
                M[s.substr(0, s.length() - 1)]++;
                TEMP.push_back(s.substr(0, s.length() - 1));
                sort(TEMP.begin(), TEMP.end());
                ST.push_back(TEMP);
                TEMP.clear();
            }
        }
        fout << "Doan van: ";
        for (int i = 0; i < input.size(); i++)
        {
            fout << input[i] << " ";
        }
        fout << endl;
        
        fout << "So cau: " << j << endl;
        
        for (auto x : ST)
        {
            fout << x.size() << " ";
        }
        fout << endl;
        
        int max = 0;
        for (auto x : M)
        {
            if (x.second > max)
            {
                max = x.second;
            }
        }
        fout << "Tu xuat hien nhieu nhat: ";
        for (auto x : M)
        {
            if (max == x.second)
            {
                fout << x.first << " ";
            }
        }
        fout << endl;
        
        fout << "Sap xep doan van A->Z: ";
        int i = 0;
        for (auto x : ST)
        {
            if (x.empty())
                break;
            for (vector<string>::iterator it = x.begin(); it != x.end(); it++)
            {
                fout << *it;
                if ((it + 1) != x.end())
                {
                    fout << " ";
                }
            }
            fout << CH[i++] << " ";
        }
        
        fin.close();
        fout.close();
    }
    else
        exit(0);
}

int main()
{
    Count_String("BT.inp", "BT.out");
    return 0;
}
