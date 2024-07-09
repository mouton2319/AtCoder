#include <iostream>

int main() {
	int n, k, x, y;
	// n‚ðŽæ“¾
	std::cin >> n;
	// k‚ðŽæ“¾
	std::cin >> k;
	// x‚ðŽæ“¾
	std::cin >> x;
	// y‚ðŽæ“¾
	std::cin >> y;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i < k) {
			sum += x;
		}
		else {
			sum += y;
		}
	}

	std::cout << sum << std::endl;

	return 0;
}