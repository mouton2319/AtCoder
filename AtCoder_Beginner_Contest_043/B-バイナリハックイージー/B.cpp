#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string input = "";  // 格納したい文字列
    std::string output = ""; // 出力結果文字列
    std::string check = "";
    
    std::cin >> input;
    // 文字列の各文字をベクトルに格納
    for (char c : input) {
        check = std::string(1, c);
        if (check != "B") {
            output = output + check;
        }
        else if (check == "B" && output != "") {
            output.pop_back();
        }
    }

    std::cout << output << std::endl;

    return 0;
}