#include <iostream>

int main() {
	long long a;
	long long b;
	long long x;

	std::cin >> a >> b >> x;

	// 1�ȏ�b�ȉ��̐����ŁAx�Ŋ���؂���upper
	long long upper = b / x;
	//std::cout << upper << std::endl;

	if (a == 0) {
		// 0��x�Ŋ���؂��̂�1�𑫂�
		std::cout << upper + 1 << std::endl;
	}
	else {
		// 1�ȏ�a-1�ȉ��̐����ŁAx�Ŋ���؂���lower�����߂āAupper�������
		long long lower = (a - 1) / x;
		//std::cout << lower << std::endl;
		std::cout << upper - lower << std::endl;
	}
}