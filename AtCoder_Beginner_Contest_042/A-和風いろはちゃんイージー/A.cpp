#include <iostream>
#include <vector>

int main() {
	int n = 3;
	std::vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}
	int check_5 = 0;
	int check_7 = 0;
	for (int j = 0; j < n; ++j) {
		if (numbers[j] == 5) {
			check_5 += 1;
		}
		else if (numbers[j] == 7) {
			check_7 += 1;
		}
	}
	if (check_5 == 2 && check_7 == 1) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
}