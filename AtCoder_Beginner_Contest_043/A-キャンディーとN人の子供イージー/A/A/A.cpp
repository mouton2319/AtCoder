#include <iostream>

int main() {
	int N;
	int sum = 0;
	std::cin >> N;

	for (int i = 0; i < N; ++i) {
		sum = sum + i + 1;
	}

	//���ʂ̏o��
	std::cout << sum << std::endl;
}