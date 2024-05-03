GIASUC::GIASUC()
{
    random_device rd;  // Thiết bị ngẫu nhiên
    mt19937 gen(rd());  // Máy phát số ngẫu nhiên
    uniform_int_distribution <int> distribution(0, 10);  // Phân phối số nguyên từ 0 đến 10
    n = distribution(gen);
    nlitsua = 0;
    tiengkeu = "";
}

GIASUC::~GIASUC() {}

ostream& operator << (ostream& os, GIASUC A)
{
    os << "- So luong con sinh ra : " << A.n << endl;
    os << "- So lit sua : " << A.nlitsua << endl;
    os << "- Tieng keu : " << A.tiengkeu << endl;
    return os;
}

int GIASUC::getSua()
{
    return nlitsua;
}

int GIASUC::getCon()
{
    return n;
}

string GIASUC::GiasucDoi()
{
    return tiengkeu;
}
