NGUOI::NGUOI() {}

NGUOI::~NGUOI() {}

istream& operator >> (istream& is, NGUOI &A)
{
    cout << "- Full Name: ";
    getline(is, A.name);
    cout << "- Birthday: ";
    getline(is, A.bthday);
    cout << "- Address: ";
    getline(is, A.address);
    cout << "- Age: ";
    is >> A.age;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, NGUOI A)
{
    os << "- Full Name: " << A.name << endl;
    os << "- Birthday: " << A.bthday << endl;
    os << "- Address: " << A.address << endl;
    os << "- Age: " << A.age << endl;
    return os;
}
