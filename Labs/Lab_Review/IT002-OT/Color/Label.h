#pragma once
#include "Thanhphan.h"

using namespace std;

class Label : public Thanhphan {
private:
	int Mauchu;
	int Maunen;
	string text;
public:
	Label();
	~Label();
	void nhap();
	int getMauchu();
	int getMaunen();
	bool IsDonsac();
	bool IsBotuc();
	bool IsTuongdong();
	bool IsPhuhop();
};

