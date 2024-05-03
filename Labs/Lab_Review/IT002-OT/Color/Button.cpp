#include "Button.h"

Button::Button() {}
Button::~Button(){}
void Button::nhap(){
	Thanhphan::nhap();
	cout << " 1.Red 2.Orange 3.Yellow 4.Spring Green 5.Green 6.Turquoise 7.Cyan 8.Ocean 9.Blue 10.Violet 11.Magenta 12.Raspberry" << endl;
	cout << "	+ Nhap mau chu: ";
	cin >> Mauchu;
	cout << "	+ Nhap mau nen: ";
	cin >> Maunen;
	cout << "	+ Nhap chu: ";
	cin >> text;
	cout << "	+ Nhap hinh anh: ";
	cin >> pic;
}
int Button::getMauchu() {
	return Mauchu;
}
int Button::getMaunen() {
	return Maunen;
}

bool Button::IsDonsac() {
	if (Maunen == Mauchu)
		return true;
	return false;
}
bool Button::IsBotuc() {
	if (abs(Maunen - Mauchu) == 6)
		return true;
	return false;
}
bool Button::IsTuongdong() {
	if (Maunen == 12 && Mauchu == 1)
		return true;
	if (Mauchu == 12 && Maunen == 1)
		return true;
	if (abs(Mauchu - Maunen) == 1)
		return true;
	return false;
}
bool Button::IsPhuhop() {
	if (IsBotuc() || IsDonsac() || IsTuongdong())
		return true;
	return false;
}