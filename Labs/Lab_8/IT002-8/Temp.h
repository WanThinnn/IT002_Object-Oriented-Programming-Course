#include <iostream>

class HỗnĐộn {
public:
    HỗnĐộn(int linh_khí, int quy_tắc) : linh_khí(linh_khí), quy_tắc(quy_tắc) {}

protected:
    int linh_khí;
    int quy_tắc;
};

class TiểuVụTrụ : public HỗnĐộn {
public:
    TiểuVụTrụ(std::string loại, int linh_khí, int quy_tắc) : HỗnĐộn(linh_khí, quy_tắc), loại(loại) {}

protected:
    std::string loại;
};

class ThườngGiới : public TiểuVụTrụ {
public:
    ThườngGiới(int linh_khí, int quy_tắc) : TiểuVụTrụ("Thường Giới", linh_khí, quy_tắc), chỉ_số_loại(10) {}

private:
    int chỉ_số_loại;
};

class HạGiới : public TiểuVụTrụ {
public:
    HạGiới(int linh_khí, int quy_tắc) : TiểuVụTrụ("Hạ Giới", linh_khí, quy_tắc), chỉ_số_loại(1) {}

    TiểuVụTrụ* phát_triển() {
        if (linh_khí >= 9 && quy_tắc >= 9) {
            return new ThườngGiới(linh_khí, quy_tắc);
        }
        else {
            return this;
        }
    }

private:
    int chỉ_số_loại;
};

class SinhVật {
public:
    SinhVật(int linh_khí, int quy_tắc, int chỉ_số_loại) : linh_khí(linh_khí), quy_tắc(quy_tắc), chỉ_số_loại(chỉ_số_loại) {}

    int tính_sức_mạnh() {
        return linh_khí * quy_tắc * chỉ_số_loại;
    }

private:
    int linh_khí;
    int quy_tắc;
    int chỉ_số_loại;
};

int main() {
    HỗnĐộn* hỗn_độn = new HỗnĐộn(10, 10);
    TiểuVụTrụ* tiểu_vụ_trụ = new HạGiới(8, 7);
    TiểuVụTrụ* thường_giới = tiểu_vụ_trụ->phát_triển();
    SinhVật* sinh_vật = new SinhVật(9, 9, thường_giới->chỉ_số_loại);

    std::cout << thường_giới->linh_khí << std::endl;  // Output: 8
    std::cout << sinh_vật->tính_sức_mạnh() << std::endl;  // Output: 720

    delete hỗn_độn;
    delete tiểu_vụ_trụ;
    delete thường_giới;
    delete sinh_vật;

