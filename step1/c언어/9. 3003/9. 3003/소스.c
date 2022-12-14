#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int original[7] = { 1,1,2,2,2,8 };
	int input[7] = { 0 };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &input[i]);
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", original[i] - input[i]);
	}

	return 0;
}