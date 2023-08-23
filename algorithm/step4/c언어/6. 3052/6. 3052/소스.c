#include <stdio.h>

int main(void) {
	int num[11];
	int k = 0;
	int count, result = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &k);
		num[i] = (k % 42);
	}

	for (int i = 0; i < 10; i++) {
		count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (num[i] == num[j]) count++;
		}
		if (count == 0) result++;
	}
	printf("%d", result);
	
}