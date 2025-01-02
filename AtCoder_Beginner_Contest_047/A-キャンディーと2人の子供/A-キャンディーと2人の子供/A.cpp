#include <iostream>

int main() {
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	if (a == (b + c) or b == (a + c) or c == (a + b)) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}

	return 0;
}