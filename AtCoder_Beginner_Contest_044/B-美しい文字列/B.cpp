#include <iostream>
#include <algorithm> //std::sort���g������
#include <string> //std::string���g������
#include <map> //std::map���g������

int main() {
	// ���͕�������擾
	std::string input;
	std::cin >> input;

	// ��������\�[�g
	std::sort(input.begin(), input.end());

	// �����̎�ނ��Ƃɐ��𐔂���
	std::map<char, int> char_count;
	for (char c : input) {
		char_count[c]++;
	}

	// ���ʂ��i�[����ϐ�
	std::string result = "Yes";

	// �������Ƃɐ����m�F
	for (const auto& pair : char_count) {
		// ��������m�F
		if (pair.second % 2 != 0) {
			result = "No";
			break;
		}
	}

	std::cout << result << std::endl;

	return 0;
}