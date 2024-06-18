#include <iostream>

int main() {
	std::string input;
	int count = 0;

	std::cin >> input;
	for (char c : input) {
		if (c == '1') {
			count += 1;
		}
	}

	std::cout << count << std::endl;
}