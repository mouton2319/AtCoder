#include <iostream>

int main() {
	int n, k, x, y;
	// n���擾
	std::cin >> n;
	// k���擾
	std::cin >> k;
	// x���擾
	std::cin >> x;
	// y���擾
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