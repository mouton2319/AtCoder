#include <iostream>

int main() {
	int n, k, x, y;
	// nを取得
	std::cin >> n;
	// kを取得
	std::cin >> k;
	// xを取得
	std::cin >> x;
	// yを取得
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