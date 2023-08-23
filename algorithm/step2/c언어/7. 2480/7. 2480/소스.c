#include <stdio.h>

int main(void) {
	int A, B, C;
	int max=0;
	scanf_s("%d %d %d", &A, &B, &C);

	if (A == B && A == C && B == C) {
		printf("%d", 10000 + (A * 1000));
	}
	else if (A == B || A == C) {
		printf("%d", 1000 + (A * 100));
	}
	else if (B == C) {
		printf("%d", 1000 + (B * 100));
	}
	else {
		if (A > B && A > C) {
			max = A;
		}
		else if (B > A && B > C) {
			max = B;
		}
		else {
			max = C;
		}
		printf("%d", max * 100);
	}

	return 0;
}