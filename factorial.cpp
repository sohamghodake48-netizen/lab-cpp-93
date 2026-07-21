#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;

int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    if (n < 0) {
        std::cout << "0\n";
        return 0;
    }
    cpp_int res = 1;
    for (long long i = 2; i <= n; ++i) res *= i;
    std::cout << res << '\n';
    return 0;
}
