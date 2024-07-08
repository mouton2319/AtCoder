#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string input = "";  // Ši”[‚µ‚½‚¢•¶Žš—ñ
    std::string output = ""; // o—ÍŒ‹‰Ê•¶Žš—ñ
    std::string check = "";
    
    std::cin >> input;
    // •¶Žš—ñ‚ÌŠe•¶Žš‚ðƒxƒNƒgƒ‹‚ÉŠi”[
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