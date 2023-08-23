#include <stdio.h>

int main(void) {

	int x, y, z;
	scanf_s("%d", &z);

	for (int i = 1; i <= z; i++) {
		scanf_s("%d %d", &x, &y);
		printf("Case #%d: %d + %d = %d\n", i, x, y, x + y);
	}
	return 0;
}