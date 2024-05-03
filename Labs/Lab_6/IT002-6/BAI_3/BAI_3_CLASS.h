using namespace std;
int i = 0;
string order_of_input[] = {"1st", "2nd"};
class CTimeSpan
{
private:
    long m_seconds;

public:
    CTimeSpan() {
        m_seconds = 0;
    }
    CTimeSpan(long seconds) {
        m_seconds = seconds;
    }
    long GetSeconds()  {return m_seconds;}
    
    friend CTimeSpan operator + ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds + B.m_seconds;
    }
    friend CTimeSpan operator - ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds - B.m_seconds;
    }
    friend bool operator == ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds == B.m_seconds;
    }
    friend bool operator != ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds != B.m_seconds;
    }
    friend bool operator > ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds > B.m_seconds;
    }
    friend bool operator >= ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds >= B.m_seconds;
    }
    friend bool operator < ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds < B.m_seconds;
    }
    friend bool operator <= ( CTimeSpan A, CTimeSpan B) {
        return A.m_seconds <= B.m_seconds;
    }
    friend istream& operator >> (istream& is, CTimeSpan &C)
    {
        long days, hours, minutes, seconds;
        cout << "* Enter The " << order_of_input[i] << " Time Span: " << endl;
        cout << "- Days: ";
        is >> days;
        cout << "- Hours: ";
        is >> hours;
        cout << "- Minutes: ";
        is >> minutes;
        cout << "- Seconds: ";
        is >> seconds;
        C.m_seconds = seconds + (minutes * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60);
        i++;
        cout << endl;
        return is;
    }
    
    friend ostream& operator << (ostream& os, CTimeSpan C)
    {
        os <<  C.m_seconds << "s";
        return os;
    }
};
