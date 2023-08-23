#include <stdio.h>

int main(void) {
	long long a, b, c;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a + b + c);
	return 0;
}