#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int paper[100][100] = { 0, };
	int x, y;
	int n, count=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);

		for (int k = y; k < y + 10; k++) {
			for (int j = x; j < x + 10; j++) {
				paper[k][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int k = 0; k < 100; k++) {
			if (paper[i][k] == 1) {
				count++;
			}
		}
	}

	printf("%d", count);
}