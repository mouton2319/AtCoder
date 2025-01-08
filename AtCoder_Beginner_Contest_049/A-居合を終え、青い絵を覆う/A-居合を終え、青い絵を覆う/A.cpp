#include <iostream>
#include <string>

int main() {
	std::string input;
	std::cin >> input;

	if (input == "a" || input == "i" || input == "u" || input == "e" || input == "o") {
		std::cout << "vowel" << std::endl;
	}
	else {
		std::cout << "consonant" << std::endl;
	}
}