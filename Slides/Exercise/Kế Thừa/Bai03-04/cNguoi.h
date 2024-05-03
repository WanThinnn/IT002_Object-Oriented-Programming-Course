#ifndef CNGUOI_H
#define CNGUOI_H
#include <iostream>
#include <string>

using namespace std;

class cNguoi{
protected:
    string Hoten;
    string Diachi;
    int Tuoi;
public:
    cNguoi();
    ~cNguoi();
    void Nhap();
    void Xuat();
};

#endif