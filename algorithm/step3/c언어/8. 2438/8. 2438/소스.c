#include <stdio.h>

int main(void) {

	int x;
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {
		for (int y = 1; y <= i; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}