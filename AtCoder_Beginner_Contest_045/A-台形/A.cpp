#include <iostream>

// ��`�̖ʐς��v�Z
int main() {
	// a���擾
	int a;
	std::cin >> a;

	// b���擾
	int b;
	std::cin >> b;

	// h���擾
	int h;
	std::cin >> h;

	// ((���+����) * ����) / 2
	double area = ((a + b) * h) / 2;

	std::cout << area << std::endl;

	return 0;
}