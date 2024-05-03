#pragma once
#include "Thanhphan.h"

class Button : public Thanhphan {
private:
	int Mauchu;
	int Maunen;
	string text;
	string pic;
public:
	Button();
	~Button();
	void nhap();
	int getMauchu();
	int getMaunen();
	bool IsDonsac();
	bool IsBotuc();
	bool IsTuongdong();
	bool IsPhuhop();
};

