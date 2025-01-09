#include <iostream>

int main() {
	int A, B;
	char op;
	std::cin >> A >> op >> B;

	if (op == '+') {
		std::cout << A + B << std::endl;
	}
	else if (op == '-') {
		std::cout << A - B << std::endl;
	}
}
