#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int sum=0;
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	for (int i = 0; i < d; i++) {
		scanf_s("%d %d", &a, &b);
		sum += (a * b);
	}
	if (c == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}