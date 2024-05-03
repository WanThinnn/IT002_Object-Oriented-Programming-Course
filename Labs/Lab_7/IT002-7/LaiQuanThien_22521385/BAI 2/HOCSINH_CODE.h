HOCSINH::HOCSINH() {}

HOCSINH::~HOCSINH() {}

istream& operator >> (istream& is, HOCSINH &A)
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

ostream& operator << (ostream& os, HOCSINH A)
{
    os << NGUOI(A);
    os << "- ID: " << A.ID << endl;
    os << "- School: " << A.school << endl;
    os << "- GPA: " << A.GPA << endl;
    return os;
}


