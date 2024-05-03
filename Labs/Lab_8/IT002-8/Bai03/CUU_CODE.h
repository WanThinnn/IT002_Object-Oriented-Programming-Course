CUU::CUU()
{
    random_device rd;  // Thiết bị ngẫu nhiên
    mt19937 gen(rd());  // Máy phát số ngẫu nhiên
    uniform_int_distribution <int> distribution(0, 5);  // Phân phối số nguyên từ 0 đến 5
    nlitsua = distribution(gen);
    tiengkeu = "Umm cuu!!!";
}

CUU::~CUU() {}

