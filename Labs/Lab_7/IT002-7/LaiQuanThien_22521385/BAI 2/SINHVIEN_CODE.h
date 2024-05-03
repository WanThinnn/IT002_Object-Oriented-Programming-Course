SINHVIEN::SINHVIEN() {}

SINHVIEN::~SINHVIEN() {}

istream& operator >> (istream& is, SINHVIEN &A)
{
    is >> static_cast<NGUOI&>(A);
    cout << "- ID: ";
    getline(is, A.ID);
    cout << "- School: ";
    getline(is, A.school);
    cout << "- GPA: ";
    is >> A.GPA;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, SINHVIEN A)
{
    os << NGUOI(A);
    os << "- ID: " << A.ID << endl;
    os << "- School: " << A.school << endl;
    os << "- GPA: " << A.GPA << endl;
    return os;
}

