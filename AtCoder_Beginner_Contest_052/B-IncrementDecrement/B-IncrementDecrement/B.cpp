#include <iostream>
#include <string>

int main() {
	int x = 0;
	int tmp = 0;
	int max = 0;
	int N;
	std::string S;

	std::cin >> N;
	std::cin >> S;

	for (int i = 0; i < N; i++) {
		char c = S[i];
		if (c == 'I') {
			tmp += 1;
		}
		else {
			tmp -= 1;
		}
		if (max < tmp) {
			max = tmp;
		}
	}

	std::cout << max << std::endl;
}