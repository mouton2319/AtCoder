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

    // �������Ń\�[�g
    std::sort(strings.begin(), strings.end());

    // �S�Ă̕����������
    std::string result;
    for (const auto& str : strings) {
        result += str;
    }

    // ���ʂ̏o��
    std::cout << result << std::endl;

    return 0;
}
