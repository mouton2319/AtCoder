#include <iostream>
#include <vector>

int main() {
	int W;
	int H;
	int N;
	std::cin >> W >> H >> N;

	// ����N�̃x�N�g���@x���p
	std::vector<int> vec_x(N, 0);

	// ����N�̃x�N�g���@y���p
	std::vector<int> vec_y(N, 0);

	// ����N�̃x�N�g���@a�p
	std::vector<int> vec_a(N, 0);

	for (int i = 0; i < N; i++) {
		std::cin >> vec_x[i] >> vec_y[i] >> vec_a[i];
	}

	// ����
	std::vector<int> left_down(2, 0);
	left_down[0] = 0;
	left_down[1] = 0;
	// �E��
	std::vector<int> right_up(2, 0);
	right_up[0] = W;
	right_up[1] = H;
	
	for (int j = 0; j < N; j++) {
		if (vec_a[j] == 1) {
			// ����
			if (left_down[0] < vec_x[j]) {
				if (right_up[0] <= vec_x[j]) {
					left_down[0] = right_up[0];
					break;
				}
				left_down[0] = vec_x[j];
			}
		}
		else if (vec_a[j] == 2) {
			// �E��
			if (vec_x[j] < right_up[0]) {
				if (vec_x[j] <= left_down[0]) {
					right_up[0] = left_down[0];
					break;
				}
				right_up[0] = vec_x[j];
			}
		}
		else if (vec_a[j] == 3) {
			// ����
			if (left_down[1] < vec_y[j]) {
				if (right_up[1] <= vec_y[j]) {
					left_down[1] = right_up[1];
					break;
				}
				left_down[1] = vec_y[j];
			}
		}
		else if (vec_a[j] == 4) {
			// �E��
			if (vec_y[j] < right_up[1]) {
				if (vec_y[j] <= left_down[1]) {
					right_up[1] = left_down[1];
					break;
				}
				right_up[1] = vec_y[j];
			}
		}
	}

	int all_area = (right_up[0] - left_down[0]) * (right_up[1] - left_down[1]);
	if (all_area < 0) {
		std::cout << 0 << std::endl;
	}
	else {
		std::cout << all_area << std::endl;
	}

	return 0;
}