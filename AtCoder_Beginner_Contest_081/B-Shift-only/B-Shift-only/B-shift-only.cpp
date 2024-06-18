#include <iostream>
#include <vector>

std::vector<int> calc_even(std::vector<int> vec, int n) {

	for (int i = 0; i < n; ++i) {
		int calc_base = vec[i];
		int calced = vec[i] / 2;
		vec[i] = calced;
	}

	return vec;
}

bool even_check(std::vector<int> vec, int n) {
	bool even_check = true;

	for (int i = 0; i < n; ++i) {
		if (vec[i] % 2 != 0) {
			even_check = false;
			break;
		}
	}

	return even_check;
}

int main() {
	int n;
	std::string input;
	bool can_proc = true;

	std::cin >> n;
	std::vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}
	int calc_count = 0;


	while (true) {
		bool checked = even_check(numbers, n);
		if (checked) {
			numbers = calc_even(numbers, n);
			calc_count += 1;
		}
		else {
			break;
		}
	}
	std::cout << calc_count << std::endl;
}