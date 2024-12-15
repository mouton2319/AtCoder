#include <iostream>

int calc_combination(int left, int right) {
	int numerator = 1;
	int denominator = 1;

	for (int i = 0; i < right; i++) {
		numerator *= (left - i);
	}

	for (int i = 0; i < right; i++) {
	    denominator *= (right - i);
	}

	int combination = numerator / denominator;

	return combination;
}

int main() {
	int N;
	int K;
	std::cin >> N >> K;

	int pattern = 1;

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			pattern *= calc_combination(K, 1);
		}
		else {
			pattern *= calc_combination(K-1, 1);
		}
	}

	std::cout << pattern << std::endl;

	return 0;
}