#include <iostream>
#include <algorithm> //std::sortを使うため
#include <string> //std::stringを使うため
#include <map> //std::mapを使うため

int main() {
	// 入力文字列を取得
	std::string input;
	std::cin >> input;

	// 文字列をソート
	std::sort(input.begin(), input.end());

	// 文字の種類ごとに数を数える
	std::map<char, int> char_count;
	for (char c : input) {
		char_count[c]++;
	}

	// 結果を格納する変数
	std::string result = "Yes";

	// 文字ごとに数を確認
	for (const auto& pair : char_count) {
		// 数が奇数か確認
		if (pair.second % 2 != 0) {
			result = "No";
			break;
		}
	}

	std::cout << result << std::endl;

	return 0;
}