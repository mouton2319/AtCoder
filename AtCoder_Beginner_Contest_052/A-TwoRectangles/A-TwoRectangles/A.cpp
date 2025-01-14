#include <iostream>

int main() {
	int A, B, C, D;
	std::cin >> A >> B >> C >> D;

	if (A * B < C * D) {
		std::cout << C * D;
	}
	else {
		std::cout << A * B;
	}
}