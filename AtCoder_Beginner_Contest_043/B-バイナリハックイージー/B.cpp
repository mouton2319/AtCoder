#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string input = "";  // �i�[������������
    std::string output = ""; // �o�͌��ʕ�����
    std::string check = "";
    
    std::cin >> input;
    // ������̊e�������x�N�g���Ɋi�[
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