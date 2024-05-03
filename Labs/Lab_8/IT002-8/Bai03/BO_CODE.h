
BO::BO()
{
    random_device rd;  // Thiết bị ngẫu nhiên
    mt19937 gen(rd());  // Máy phát số ngẫu nhiên
    uniform_int_distribution <int> distribution(0, 20);  // Phân phối số nguyên từ 0 đến 20
    nlitsua = distribution(gen);
    tiengkeu = "Umm boo!!!";
}

BO::~BO() {}
