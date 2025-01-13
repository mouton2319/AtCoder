#include <iostream>

int main() {
	int K, S;
	std::cin >> K >> S;

	int sum = 0;

	for (int i = 0; i <= K; i++) {
		for (int j = 0; j <= K; j++){
			int Z = S - i - j;
			if ((0 <= Z) && (Z <= K)) {
				sum = sum + 1;
			}
		}
	}

	std::cout << sum << std::endl;
}