#include <iostream>

int main() {
	double length, breadth;
	if (!(std::cin >> length >> breadth)) return 0;
	double area = length * breadth;
	double perimeter = 2 * (length + breadth);
	std::cout << area << '\n' << perimeter << '\n';
	return 0;
}

