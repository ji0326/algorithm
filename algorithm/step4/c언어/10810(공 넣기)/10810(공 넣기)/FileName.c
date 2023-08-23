#include <stdio.h>

int main(void) {
	int a, b, c;
	int bask[101] = { 0, };

	int M, N;

	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf_s("%d %d %d", &a, &b, &c);

		for (int k = a; k <= b; k++) {
			bask[k] = c;
		}
	}

	for (int i = 1; i <= N; i++) {
		printf("%d ", bask[i]);
	}

	return 0;
}