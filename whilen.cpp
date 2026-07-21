#include <iostream>

int main() {
	long long n;
	if (!(std::cin >> n)) return 0;
	long long i = 1;
	while (i <= n) {
		std::cout << i;
		if (i < n) std::cout << ' ';
		++i;
	}
	if (n > 0) std::cout << '\n';
	return 0;
}

