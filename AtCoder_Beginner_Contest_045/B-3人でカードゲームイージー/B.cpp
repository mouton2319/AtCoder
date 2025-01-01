#include <iostream>
#include <string>
#include <vector>

// ベクトル0インデックスは次の人、1インデックスは削除後文字列
std::vector<std::string> next_check(std::string check_string, std::string user) {
	std::vector<std::string> check_vector;
	if (check_string == "") {
		check_vector.push_back("");
		check_vector.push_back(user);
		return check_vector;
	}
	// 文字列の先頭文字を取得
	char first_char = check_string.front();
	// char型をstring型に変換
	std::string first_char_str(1, first_char);
	check_vector.push_back(first_char_str);
	// 文字列の先頭文字を削除
	check_string.erase(check_string.begin());
	check_vector.push_back(check_string);

	return check_vector;
}

int main() {
	// Aさんの手札を取得
	std::string a_string;
	std::cin >> a_string;

	// Bさんの手札を取得
	std::string b_string;
	std::cin >> b_string;

	// Cさんの手札を取得
	std::string c_string;
	std::cin >> c_string;

	std::vector<std::string> checked;
	checked.push_back("a");
	checked.push_back(a_string);
	int i = 0;
	while (true) {
		if (checked[0] == "a") {
			checked = next_check(a_string, "A");
			a_string = checked[1];
		}
		else if (checked[0] == "b") {
			checked = next_check(b_string, "B");
			b_string = checked[1];
		}
		else if (checked[0] == "c") {
			checked = next_check(c_string, "C");
			c_string = checked[1];
		}
		else if (checked[0] == "") {
			std::cout << checked[1] << std::endl;
			break;
		}

	}

	return 0;

}