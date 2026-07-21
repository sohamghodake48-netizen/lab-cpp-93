#include <stdio.h>

int main(void) {
	long long a, b;
	if (scanf("%lld %lld", &a, &b) != 2) return 0;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%lld %lld\n", a, b);
	return 0;
}

