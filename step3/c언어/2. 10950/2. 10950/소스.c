#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf_s("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf_s("%d %d", &a, &b);
		printf("%d \n", a + b);
	}
	
	return 0;
}