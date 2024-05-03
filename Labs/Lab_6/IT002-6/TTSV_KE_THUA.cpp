#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
    protected:
        string MSSV, HT, DC;
        float gpa;
        int tstc;

    public:
        SinhVien () {}
        SinhVien(string id, string tenSV, string diachi, float diemTB, int tc)
        {
            MSSV = id;
            HT = tenSV;
            DC = diachi;
            gpa = diemTB;
            tstc = tc;
            
        }
        ~SinhVien() {}
        bool TotNghiep() {return false;}
        friend ostream& operator << (ostream& os, const SinhVien sv)
        {
            os << "MSSV sinh vien: " << sv.MSSV << endl;
            os << "Ten sinh vien: " << sv.HT << endl;
            os << "Dia chi sinh vien: " << sv.DC << endl;
            os << "Diem trung binh: " << sv.gpa << endl;
            os << "Tong so tin chi: " << sv.tstc << endl;
            return os;
        }
};

class SinhVienDaiHoc : public SinhVien
{
    private:
        string tenLuanVan;
        float diemLuanVan;

    public:
        
        SinhVienDaiHoc(string id, string tenSV, string diachi, float diemTB, int tc, string tenLV, float dLV) : SinhVien(id, tenSV, diachi, diemTB, tc)
        {
            tenLuanVan = tenLV;
            diemLuanVan = dLV;
        }
        string getTLV() {return tenLuanVan;}
        bool totNghiep()
        {return (gpa >= 5.0 and gpa <= 10.0 and tstc >= 170 and diemLuanVan >= 5.0);}
        friend ostream& operator<<(ostream& os, const SinhVienDaiHoc& sv)
        {
            os << SinhVien(sv);
            os << "Ten luan van: " << sv.tenLuanVan << endl;
            return os;
        }
};

class SinhVienCaoDang : public SinhVien
{
    private:
        string tenBaiThiTotNghiep;
        float diemBTN;

    public:
        SinhVienCaoDang(string id, string tenSV, string diachi, float diemTB, int tc, string tenBTN, float diemtn) : SinhVien(id, tenSV, diachi, diemTB, tc)
        {
            tenBaiThiTotNghiep = tenBTN;
            diemBTN = diemtn;
        }

        bool totNghiep()
        {return (gpa >= 5.0 and gpa <= 10.0 and tstc >= 120 and diemBTN >= 5.0);}
        friend ostream& operator << (ostream& os, const SinhVienCaoDang sv)
        {
            os << SinhVien(sv);
            os << "Ten bai thi tot nghiep: " << sv.tenBaiThiTotNghiep << endl;
            return os;
        }
};

int main()
{
    SinhVienDaiHoc svDH("001", "Nguyen Van A", "Kien Giang", 8.5, 129, "Luan van CNTT", 9.0);
    SinhVienCaoDang svCD("001", "Nguyen Van A", "An Giang", 1.5, 119, "Bai Tot Nghiep 1", 9.0);

    cout << "Sinh vien dai hoc:" << endl;
    cout << svDH;

    cout << endl;

    cout << "Sinh vien cao dang:" << endl;
    cout << svCD;
    
    cout << endl;
    
    cout << "Tot nghiep: " << (svCD.TotNghiep() ? "Co" : "Khong") << endl;


    return 0;
}
