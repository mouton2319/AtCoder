#include <iostream>

int main() {
	long long a;
	long long b;
	long long x;

	std::cin >> a >> b >> x;

	// 1以上b以下の整数で、xで割り切れる個数upper
	long long upper = b / x;
	//std::cout << upper << std::endl;

	if (a == 0) {
		// 0もxで割り切れるので1を足す
		std::cout << upper + 1 << std::endl;
	}
	else {
		// 1以上a-1以下の整数で、xで割り切れる個数lowerを求めて、upperから引く
		long long lower = (a - 1) / x;
		//std::cout << lower << std::endl;
		std::cout << upper - lower << std::endl;
	}
}