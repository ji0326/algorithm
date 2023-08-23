#include <stdio.h>

int main(void) {
	int n, x;
	int a;

	scanf_s("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a);

		if (a < x) {
			printf("%d ", a);
		}
	}
	return 0;
}