#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <string>

int main() {
    int N, L;
    std::cin >> N >> L;

    std::vector<std::string> strings(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> strings[i];
    }

    // 辞書順でソート
    std::sort(strings.begin(), strings.end());

    // 全ての文字列を結合
    std::string result;
    for (const auto& str : strings) {
        result += str;
    }

    // 結果の出力
    std::cout << result << std::endl;

    return 0;
}
