using namespace std;

#define MAX 1000
class String
{
    private:
        char *ch;
        int64_t size;
    public:
        String()
        {
            ch = nullptr;
            size = 0;
        }
        ~String() {}
        int64_t Length(){return this->size;}
        friend String operator + (String a, String b)
        {
            String temp;
            temp.size = a.size + b.size;
            char *newch = new char[a.size + b.size + 2];
            strcpy(newch, a.ch);
            strcat(newch, b.ch);
            temp.ch = newch;
            return temp;
        }
    
        String& operator = (const String& st2)
        {
            if (this != &st2)
            {
                delete [] ch;
                ch = new char[strlen(st2.ch) + 1];
                strcpy(ch, st2.ch);
            }
            return *this;
        }
    
        void Reverse()
        {
            if (size == 0) {
                return;
            }
            char *newch = new char[this->size + 1];
            for (int64_t i = this->size - 1; i >= 0; i--)
            {
                newch[this->size - i - 1] = this->ch[i];
            }
            newch[this->size] = 0;
            delete[] this->ch;
            this->ch = newch;
        }
        
        friend istream& operator >> (istream &is, String &st)
        {
            char tmp[MAX];
            is.getline(tmp, MAX);

            int64_t len = strlen(tmp);
            if (len > MAX) {
                st.ch = new char[MAX + 1];
                strncpy(st.ch, tmp, MAX);
                st.ch[MAX] = '\0';
            }
            else {
                st.ch = new char[len + 1];
                strcpy(st.ch, tmp);
            }
            st.size = strlen(st.ch);
            return is;
        }
    
        friend ostream& operator << (ostream &os, String st)
        {
            os << st.ch;
            return os;
        }
        friend bool operator > (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) > 0;
        }
        friend bool operator >= (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) >= 0;
        }
        friend bool operator < (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) < 0;
        }
        friend bool operator <= (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) <= 0;
        }
        friend bool operator == (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) == 0;
        }
        friend bool operator != (const String st1, const String st2)
        {
           return strcmp(st1.ch, st2.ch) != 0;
        }
};
