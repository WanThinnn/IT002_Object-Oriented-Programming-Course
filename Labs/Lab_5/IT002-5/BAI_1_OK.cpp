
#include <iostream>

using namespace std;
#define MAX 1000
class String
{
    private:
        char *ch;
        int size;

    public:
        String()
        {
            ch = nullptr;
            size = 0;
        }

        ~String()
        {
            delete [] this->ch;
        }

        int Length()
        {
            return this->size;
        }

        void StringCat(String a, String b)
        {
            size = a.size + b.size;
            char *newch = new char[a.size + b.size + 2];
            strcpy(newch, a.ch);
            strcat(newch, b.ch);
            ch = newch;
        }

        void Reverse()
        {
            if (size == 0) {
                return;
            }
            char *newch = new char[this->size + 1];
            for (int i = this->size - 1; i >= 0; i--)
            {
                newch[this->size - i - 1] = this->ch[i];
            }
            newch[this->size] = 0;
            delete[] this->ch;
            this->ch = newch;
        }
    
        void input()
        {
            char tmp[MAX];
            cin.getline(tmp, MAX);

            int len = strlen(tmp);
            if (len > MAX) {
                ch = new char[MAX + 1];
                strncpy(ch, tmp, MAX);
                ch[MAX] = '\0';
            }
            else {
                ch = new char[len + 1];
                strcpy(ch, tmp);
            }
            size = strlen(this->ch);
        }
    
        void output()
        {
            cout << this->ch << endl;
        }
};


void ChuongTrinh(String ST1)
{
    int Option;
    OPTION:
    while(true)
    {
        cout << "* Chon thuat toan: " << endl;
        cout << "1. Tinh chieu dai chuoi. " << endl;
        cout << "2. Noi hai chuoi. " << endl;
        cout << "3. Dao chuoi. " << endl;
        cout << "4. Thoat. " << endl;
        cout << "* Option: ";
        do
        {
            cin >> Option;
            if (Option < 1 or Option > 4)
                cout << "=> Loi, chon lai: ";
        }
        while (Option < 1 or Option > 4);
        
        if (Option == 1)
        {
            cout << "=> Do dai cua chuoi vua nhap la: ";
            cout << ST1.Length() << endl;
        }
        
        if (Option == 2)
        {
            cout << "* ST2 = ";
            String ST2;
            ST2.input();
            String tmp;
            tmp.StringCat(ST1, ST2);
            cout << "=> Chuoi sau khi duoc noi boi hai chuoi vua nhap la: ";
            tmp.output();
            cout << endl;
        }
        
        if (Option == 3)
        {
            cout << "=> Chuoi cua ban sau khi duoc dao nguoc la: ";
            ST1.Reverse();
            ST1.output();
            cout << endl;
        }
        
        if (Option == 4)
        {
            break;
        }
    }
    int ctn;
    cout << endl;
    cout << "* Ban co muon tiep tuc chuong trinh? \n";
    cout << "1. Tiep tuc" << endl;
    cout << "2. Dung chuong trinh" << endl;
    cout << "* Option: ";
   do
   {
       cin >> ctn;
       if (ctn < 1 or ctn > 2)
           cout << "Loi, chon lai: ";
   }
   while (ctn < 1 or ctn > 2);
   if (ctn == 2)
       exit(0);
   else if (ctn == 1)
       goto OPTION;

}

int main()
{
    String ST1;
    cout << "ST1 = ";
    ST1.input();
    ChuongTrinh(ST1);
    system("pause");
    return 0;
}
