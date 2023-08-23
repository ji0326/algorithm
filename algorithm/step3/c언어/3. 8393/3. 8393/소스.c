#include <stdio.h>

int main(void) {
	int a;
	int sum=0;
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);
}