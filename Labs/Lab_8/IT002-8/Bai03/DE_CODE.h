DE::DE()
{
    random_device rd;  // Thiết bị ngẫu nhiên
    mt19937 gen(rd());  // Máy phát số ngẫu nhiên
    uniform_int_distribution <int> distribution(0, 10);  // Phân phối số nguyên từ 0 đến 10
    nlitsua = distribution(gen);
    tiengkeu = "Umm de!!!";
}

DE::~DE() {}

