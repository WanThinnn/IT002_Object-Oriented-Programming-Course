
CASI::CASI() {}

CASI::~CASI() {}

istream& operator >> (istream& is, CASI &A)
{
    is >> static_cast<NGUOI&>(A);
    cout << "- Kind of Music: ";
    getline(is, A.kind);
    cout << "- Company: ";
    getline(is, A.company);
    cout << "- Salary: ";
    is >> A.salary;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, CASI A)
{
    os << NGUOI(A);
    os << "- Kind of Music: " << A.kind << endl;
    os << "- Company: " << A.company << endl;
    os << "- Salary: " << A.salary << endl;
    return os;
}


