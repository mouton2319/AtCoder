#include <iostream>

// ‘äŒ`‚Ì–ÊÏ‚ğŒvZ
int main() {
	// a‚ğæ“¾
	int a;
	std::cin >> a;

	// b‚ğæ“¾
	int b;
	std::cin >> b;

	// h‚ğæ“¾
	int h;
	std::cin >> h;

	// ((ã’ê+‰º’ê) * ‚‚³) / 2
	double area = ((a + b) * h) / 2;

	std::cout << area << std::endl;

	return 0;
}