#include <iostream>
#include <vector>
#include <string>

int main() {
	int H, W;
	// ����H, ��W���擾
	std::cin >> H >> W;

	// �z���錾�i�e�s�̕�����̏I�[�����p��W+1�j
	std::vector<std::string> str(H);

	for (int i = 0; i < H; i++) {
		std::cin >> str[i];
	}

	for (const auto& line : str) {
		std::cout << line << std::endl;
		std::cout << line << std::endl;
	}

	return 0;
}