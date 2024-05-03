#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NGUOI
{
    protected:
        string hoTen;
        int tuoi;
    public:
        NGUOI() {}
        virtual void nhapThongTin()
        {
            cout << "- Ho ten: ";
            cin.ignore();
            getline(cin, hoTen);
            cout << "- Tuoi: ";
            cin >> tuoi;
        }
        virtual void inThongTin()
        {
            cout << "- Ho ten: " << hoTen << endl;
            cout << "- Tuoi: " << tuoi << endl;
        }
};

class SINHVIEN : public NGUOI
{
    private:
        string truongHoc;
    public:
        void nhapThongTin()
        {
            NGUOI::nhapThongTin();
            cout << "- Truong hoc: ";
            cin.ignore();
            getline(cin, truongHoc);
        }
        void inThongTin()
        {
            NGUOI::inThongTin();
            cout << "- Truong hoc: " << truongHoc << endl;
        }
};

class GIAOVIEN : public NGUOI
{
    private:
        string monHoc;
    public:
        void nhapThongTin()
        {
            NGUOI::nhapThongTin();
            cout << "- Mon hoc: ";
            cin.ignore();
            getline(cin, monHoc);
        }
        void inThongTin()
    {
            NGUOI::inThongTin();
            cout << "- Mon hoc: " << monHoc << endl;
        }
};

class BAOVE : public NGUOI
{
    private:
        string khuVuc;
    public:
        void nhapThongTin() {
            NGUOI::nhapThongTin();
            cout << "- Khu vuc: ";
            cin.ignore();
            getline(cin, khuVuc);
        }
        void inThongTin() {
            NGUOI::inThongTin();
            cout << "- Khu vuc: " << khuVuc << endl;
        }
};

int main() {
    vector <NGUOI*> danhSach;
    int n;
    cout << "Nhap so luong nguoi: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int choice;
        cout << "Chon loai nguoi (1. Sinh vien, 2. Giao vien, 3. Bao ve): ";
        cin >> choice;

        NGUOI* nguoi;

        switch (choice)
        {
            case 1:
                nguoi = new SINHVIEN();
                break;
            case 2:
                nguoi = new GIAOVIEN();
                break;
            case 3:
                nguoi = new BAOVE();
                break;
            default:
                cout << "Lua chon khong hop le." << endl;
                i--;
                continue;
        }

        // Nhap thong tin
        cout << "Nhap thong tin nguoi thu " << i + 1 << ":" << endl;
        nguoi->nhapThongTin();
        danhSach.push_back(nguoi);
    }

    //In thong tin
    cout << endl << "Thong tin danh sach nguoi:" << endl;
    for (int i = 0; i < danhSach.size(); i++)
    {
        cout << "Thong tin nguoi thu " << i + 1 << ":" << endl;
        danhSach[i]->inThongTin();
        cout << endl;
    }

    // Giải phóng bộ nhớ đã cấp phát cho các đối tượng
    for (int i = 0; i < danhSach.size(); i++)
    {
        delete danhSach[i];
    }

    return 0;
}
