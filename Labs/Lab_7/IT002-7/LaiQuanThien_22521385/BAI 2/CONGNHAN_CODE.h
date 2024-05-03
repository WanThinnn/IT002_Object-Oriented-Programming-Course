CONGNHAN::CONGNHAN() {}

CONGNHAN::~CONGNHAN() {}

istream& operator >> (istream& is, CONGNHAN &A)
{
    is >> static_cast<NGUOI&>(A);
    cout << "- ID: ";
    getline(is, A.ID);
    cout << "- Company: ";
    getline(is, A.company);
    cout << "- Salary: ";
    is >> A.salary;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, CONGNHAN A)
{
    os << NGUOI(A);
    os << "- ID: " << A.ID << endl;
    os << "- Company: " << A.company << endl;
    os << "- Salary: " << A.salary << endl;
    return os;
}


