#include <iostream>

// 台形の面積を計算
int main() {
	// aを取得
	int a;
	std::cin >> a;

	// bを取得
	int b;
	std::cin >> b;

	// hを取得
	int h;
	std::cin >> h;

	// ((上底+下底) * 高さ) / 2
	double area = ((a + b) * h) / 2;

	std::cout << area << std::endl;

	return 0;
}