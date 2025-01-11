#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string input;
	std::cin >> input;

	size_t length = input.size();
	std::vector<char> charvector;
	for (size_t i = 0; i < length; i++) {
		charvector.push_back(input[i]);
	}

	for (char c : charvector){
		if (c == ',') {
			std::cout << " ";
		}
		else {
			std::cout << c;
		}
	}
}