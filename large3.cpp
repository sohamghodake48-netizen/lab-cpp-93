#include <iostream>
#include <algorithm>

int main() {
	double a, b, c;
	if (!(std::cin >> a >> b >> c)) return 0;
	double m = std::max(a, std::max(b, c));
	if (m == (long long)m)
		std::cout << (long long)m << '\n';
	else
		std::cout << m << '\n';
	return 0;
}

