#include <stdio.h>
#include <iostream>

using namespace std;

class YeuTo
{
protected:
    int chiso;
public:
    virtual void Nhap()
    {
        cin >> chiso;
    }
    virtual void Xuat() = 0;
    virtual void ChiSoCao() = 0;
    virtual void ChiSoThap() = 0;
    int ChiSo() {return chiso;}
};

class O : public YeuTo
{
public:
    void Xuat()
    {
        cout << "San sang trai nghiem (O). " << endl;
        cout << "Chi so: " << chiso << endl;
    }
    void ChiSoCao() {
        cout << "Người có điểm cao ở yếu tố này thường là người thích những ý tưởng mới, thích hiểu biết nhiều lĩnh vực nhưng đồng thời cũng thích tự do, không thích bị ràng buộc..." << endl;
    }
    void ChiSoThap()
    {
        cout << "Người có điểm thấp ở yếu tố này thường khá bảo thủ, khó tiếp nhận những ý tưởng mới, lạ. Họ thích sự ổn định, quen thuộc và thực tế." << endl;
    }
    
};
class C : public YeuTo
{
public:
    void Xuat()
    {
        cout << "Tự chủ tận tâm (C) " << endl;
        cout << "Chi so: " << chiso << endl;

    }
    void ChiSoCao() {
        cout << "Người có điểm cao ở yếu tố này thường là người chăm chỉ, có khả năng chịu áp lực tốt. Họ thường là người gắn bó, trung thành với tổ chức." << endl;
    }
    void ChiSoThap()
    {
        cout << "Người có điểm thấp ở yếu tố này thường dễ bỏ cuộc, khả năng chịu áp lực, tuân thủ kỷ luật của tổ chức kém." << endl;
    }
    
};
class E : public YeuTo
{
public:
    void Xuat()
    {
        cout << "Hướng ngoại (E) " << endl;
        cout << "Chi so: " << chiso << endl;

    }
    void ChiSoCao() {
        cout << "Người có điểm cao ở yếu tố này thường là người nhiệt tình, năng động, giao tiếp tốt, thích thể hiện bản thân." << endl;
    }
    void ChiSoThap()
    {
        cout << "Người có điểm thấp ở yếu tố này thường ngại giao tiếp, không thích sự nổi bật, thích được làm việc độc lập." << endl;
    }
    
};

class A : public YeuTo
{
public:
    void Xuat()
    {
        cout << "Hòa đồng dễ chịu (A) " << endl;
        cout << "Chi so: " << chiso << endl;

    }
    void ChiSoCao() {
        cout << "Người có điểm cao ở yếu tố này thường thân thiện, cởi mở, đồng cảm với mọi người nhưng nhiều khi “thiếu chính kiến" << endl;
    }
    void ChiSoThap()
    {
        cout << "Người có điểm thấp thường đặt lợi ích của bản thân lên trên, ít đồng cảm, chia sẻ với đồng nghiệp, có tính cạnh tranh cao." << endl;
    }
    
};


class N : public YeuTo
{
public:
    void Xuat()
    {
        cout << "Bất ổn cảm xúc (N) " << endl;
        cout << "Chi so: " << chiso << endl;

    }
    void ChiSoCao() {
        cout << "Người có điểm cao ở yếu tố này thường có các cảm xúc tiêu cực như: lo lắng, bực bội, tự ti, yếu đuối và khả năng chịu áp lực kém." << endl;
    }
    void ChiSoThap()
    {
        cout << "Người có điểm thấp ởyếu tố này thường kiểm soát được cảm xúc, ứng phó với căng thẳng tốt, ít bị bên ngoài ảnh hưởng đến tâm trạng của bản thân." << endl;
    }
};

class Nguoi
{
private:
    YeuTo* ds[5];
public:
    int ChiSoNguoi(int i)
    {
        return ds[i]->ChiSo();
    }
    void NhapNguoi()
    {
        cout << "Nhap O: " ;
        ds[0] = new O();
        ds[0]->Nhap();
        
        cout << "Nhap C: "  ;
        ds[1] = new C();
        ds[1]->Nhap();
        
        cout << "Nhap E: " ;
        ds[2] = new E();
        ds[2]->Nhap();
        
        cout << "Nhap A: " ;
        ds[3] = new A();
        ds[3]->Nhap();
        
        cout << "Nhap N: " ;
        ds[4] = new N();
        ds[4]->Nhap();
    }
    void TinhCach()
    {
        for (int i = 0; i < 5; i++)
        {
            ds[i]->Xuat();
            
            if (ds[i]->ChiSo() <= 30)
                ds[i]->ChiSoThap();
            else if (ds[i]->ChiSo() >= 70)
                ds[i]->ChiSoCao();
            else
                cout << "Khong xac dinh duoc cao/thap" << endl;
        }
    }
};

class DanhSach
{
private:
    int n;
    Nguoi* dsn;
public:
    void NhapDS()
    {
        cout << "So Luong Nguoi: ";
        cin >> n;
        dsn = new Nguoi[n];
        for (int i = 0; i < n; i++)
        {
            cout <<"NGUOI THU " << i+1 << " \n";
            dsn[i].NhapNguoi();
        }
    }
    void XuatDS()
    {
    
        for (int i = 0; i < n; i++)
        {
            cout <<"NGUOI THU " << i+1 << " \n";
            dsn[i].TinhCach();
        }
    }
    
    void TinhCachMotNguoi()
    {
        int j;
        cout << "Chon nguoi trong khoang [1,n]: ";
        cin >> j;
        cout << "Tinh Cach: " << endl;
        dsn[j-1].TinhCach();
        
        cout << endl;
    }
    
    vector <Nguoi> NguyCo()
    {
        vector <Nguoi> res;
        for (int i = 0; i < n; i++)
            if ((dsn[i].ChiSoNguoi(1) <= 30) or (dsn[i].ChiSoNguoi(4) >= 70) or (dsn[i].ChiSoNguoi(2) <= 30 and dsn[i].ChiSoNguoi(4) >= 70))
                res.push_back(dsn[i]);
        return res;
    }
    
};

int main()
{
    DanhSach A;
    A.NhapDS();
    A.TinhCachMotNguoi();
    vector <Nguoi> res = A.NguyCo();
    int i = 0;
    for (auto j : res)
    {
        cout <<"NGUOI CO NGUY CO CAO THU " << i+1 << " \n";
        j.TinhCach();
        i++;
        cout << endl;
    }
}
