#include <iostream>

int main() {
	double a, b;
	if (!(std::cin >> a >> b)) return 0;
	double sum = a + b;
	if (sum == (long long)sum) // print without decimal when whole
		std::cout << (long long)sum << '\n';
	else
		std::cout << sum << '\n';
	return 0;
}

