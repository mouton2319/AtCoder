#include <iostream>

int main() {
	long long a;
	long long b;
	long long x;

	std::cin >> a >> b >> x;

	// 1ˆÈãbˆÈ‰º‚Ì®”‚ÅAx‚ÅŠ„‚èØ‚ê‚éŒÂ”upper
	long long upper = b / x;
	//std::cout << upper << std::endl;

	if (a == 0) {
		// 0‚àx‚ÅŠ„‚èØ‚ê‚é‚Ì‚Å1‚ğ‘«‚·
		std::cout << upper + 1 << std::endl;
	}
	else {
		// 1ˆÈãa-1ˆÈ‰º‚Ì®”‚ÅAx‚ÅŠ„‚èØ‚ê‚éŒÂ”lower‚ğ‹‚ß‚ÄAupper‚©‚çˆø‚­
		long long lower = (a - 1) / x;
		//std::cout << lower << std::endl;
		std::cout << upper - lower << std::endl;
	}
}