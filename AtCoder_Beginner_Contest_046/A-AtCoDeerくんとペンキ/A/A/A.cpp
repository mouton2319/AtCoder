#include <iostream>

int main() {
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	if (a == b and a == c and b == c) {
		std::cout << 1 << std::endl;
	}
	else if (a == b or a == c or b == c) {
		std::cout << 2 << std::endl;
	}
	else {
		std::cout << 3 << std::endl;
	}

	return 0;
}