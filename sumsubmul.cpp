#include <iostream>

int main() {
	double a, b;
	if (!(std::cin >> a >> b)) return 0;

	double sum = a + b;
	double diff = a - b;
	double prod = a * b;

	std::cout << sum << '\n';
	std::cout << diff << '\n';
	std::cout << prod << '\n';

	return 0;
}

