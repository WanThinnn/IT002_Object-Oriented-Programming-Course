#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Thanhphan {
protected:
	int x;
	int y;
	int length;
	int width;
public:
	Thanhphan();
	~Thanhphan();
	virtual void nhap();
	virtual int Maunen();
	virtual int Mauchu();
};

