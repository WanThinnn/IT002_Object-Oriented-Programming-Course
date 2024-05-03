#ifndef HOCSINH_CLASS
#define HOCSINH_CLASS

using namespace std;

class HOCSINH : public NGUOI
{
    private:
        string ID, school;
        float GPA;
    public:
        HOCSINH();
        ~HOCSINH();
        friend istream& operator >> (istream& is, HOCSINH &A);
        friend ostream& operator << (ostream& os, HOCSINH A);
};
#endif 
