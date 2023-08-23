#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);

	int A[100][100];
	int B[100][100];


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int sum = A[i][j] + B[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}