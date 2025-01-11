#include <iostream>
#include <vector>

int sum_proc(std::vector<int> T, int p, int x, int N) {
	int sum_result = 0;
	for (int i = 0; i < N; i++) {
		if (i + 1 == p) {
			sum_result = sum_result + x;
		}
		else {
			sum_result = sum_result + T[i];
		}
	}

	return sum_result;
}

int main() {
	int N, M;
	std::cin >> N;
	std::vector<int> T(N);

	for (int i = 0; i < N; i++) {
		std::cin >> T[i];
	}
	//for (int i = 0; i < N; i++) {
	//	std::cout << T[i] << ", ";
	//}
	//std::cout << std::endl;

	std::cin >> M;
	//std::cout << "M: " << M << std::endl;
	std::vector<int> P(M);
	std::vector<int> X(M);
	for (int i = 0; i < M; i++) {
		std::cin >> P[i] >> X[i];
		//std::cout << "P: " << P[i] << ", X: " << X[i] << std::endl;
	}
	//std::cout << "finish" << std::endl;
	for (int i = 0; i < M; i++) {
		std::cout << sum_proc(T, P[i], X[i], N) << std::endl;
	}
}