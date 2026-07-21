#include <iostream>

int main() {
    double a, b;
    if (!(std::cin >> a >> b)) return 0;
    double temp = a;
    a = b;
    b = temp;
    std::cout << a << ' ' << b << '\n';
    return 0;
}
