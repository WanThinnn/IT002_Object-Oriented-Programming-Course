

NGHESI::NGHESI() {}

NGHESI::~NGHESI() {}

istream& operator >> (istream& is, NGHESI &A)
{
    is >> static_cast<NGUOI&>(A);
    cout << "- Art field: ";
    getline(is, A.art);
    cout << "- Company: ";
    getline(is, A.company);
    cout << "- Salary: ";
    is >> A.salary;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, NGHESI A)
{
    os << NGUOI(A);
    os << "- Kind of Music: " << A.art << endl;
    os << "- Company: " << A.company << endl;
    os << "- Salary: " << A.salary << endl;
    return os;
}


