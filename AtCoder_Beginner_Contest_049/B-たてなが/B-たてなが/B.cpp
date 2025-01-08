#include <iostream>
#include <vector>
#include <string>

int main() {
	int H, W;
	// 高さH, 幅Wを取得
	std::cin >> H >> W;

	// 配列を宣言（各行の文字列の終端文字用にW+1）
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