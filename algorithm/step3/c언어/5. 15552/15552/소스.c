#include <stdio.h>

int main(void) {
	
	int x, y, z;

	scanf_s("%d", &z);

	for (int i = 0; i < z; i++) {
		scanf_s("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
	return 0;
}