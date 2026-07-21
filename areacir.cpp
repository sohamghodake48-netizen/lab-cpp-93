#include <iostream>
#include <iomanip>

int main() {
	double r;
	if (!(std::cin >> r)) return 0;
	const double PI = 3.14159265358979323846;
	double area = PI * r * r;
	double circ = 2.0 * PI * r;
	std::cout << std::fixed << std::setprecision(6) << area << '\n' << circ << '\n';
	return 0;
}

