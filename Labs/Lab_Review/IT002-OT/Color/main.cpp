#include "Thanhphan.h"
#include "Label.h"
#include "Button.h"
#include "Label.cpp"
#include "Button.cpp"
#include "Thanhphan.cpp"

int main() {
	cout << "Cau a:" << endl;
	int n;
	cout << "Nhap so luong thanh phan: ";
	cin >> n;
	Thanhphan** TP = new Thanhphan * [n];
	int temp = 0;
	for (int i = 0; i < n; i++) {
		cout << "1. Label			2. Button " << endl;
		cout << "- Thanh phan thu " << i << " la: ";
		int x;
		cin >> x;
		switch (x) {
		case 1:
			TP[i] = new Label;
			TP[i]->nhap();
			break;
		case 2:
			TP[i] = new Button;
			TP[i]->nhap();
			break;
		}
	}
	cout << "Cau b:" << endl;
	
	return 0;
}
