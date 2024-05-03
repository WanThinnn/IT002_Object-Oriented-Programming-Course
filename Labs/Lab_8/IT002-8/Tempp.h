#include <iostream>
#include <vector>

class TiểuVụTrụ {
public:
    TiểuVụTrụ(std::string loại, int linh_khí, int quy_tắc) : loại(loại), linh_khí(linh_khí), quy_tắc(quy_tắc) {}

    void inThôngTin() {
        std::cout << "Loại: " << loại << std::endl;
        std::cout << "Linh khí: " << linh_khí << std::endl;
        std::cout << "Quy tắc: " << quy_tắc << std::endl;
    }

private:
    std::string loại;
    int linh_khí;
    int quy_tắc;
};

int main() {
    std::vector<TiểuVụTrụ*> danh_sách_tiểu_thế_giới;

    // Nhập danh sách các tiểu thế giới
    int n;
    std::cout << "Nhập số lượng tiểu thế giới: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string loại;
        int linh_khí, quy_tắc;

        std::cout << "Tiểu thế giới " << i + 1 << std::endl;
        std::cout << "Loại: ";
        std::cin >> loại;
        std::cout << "Linh khí: ";
        std::cin >> linh_khí;
        std::cout << "Quy tắc: ";
        std::cin >> quy_tắc;

        TiểuVụTrụ* tiểu_vụ_trụ = new TiểuVụTrụ(loại, linh_khí, quy_tắc);
        danh_sách_tiểu_thế_giới.push_back(tiểu_vụ_trụ);
    }

    // In thông tin các tiểu thế giới
    std::cout << "\nThông tin các tiểu thế giới:\n";
    for (const auto& tiểu_vụ_trụ : danh_sách_tiểu_thế_giới) {
        tiểu_vụ_trụ->inThôngTin();
        std::cout << std::endl;
    }

    // Giải phóng bộ nhớ
    for (const auto& tiểu_vụ_trụ : danh_sách_tiểu_thế_giới) {
        delete tiểu_vụ_trụ;
    }

    return 0;
}
