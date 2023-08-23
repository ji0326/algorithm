#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A[9][9];

	int max = 0;
	int r = 0, s = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &A[i][j]);

			if (max <= A[i][j]) {
				max = A[i][j];
				r = i+1;
				s = j+1;
			}
		}
	}
	printf("%d \n", max);
	printf("%d %d", r, s);

	return 0;
}