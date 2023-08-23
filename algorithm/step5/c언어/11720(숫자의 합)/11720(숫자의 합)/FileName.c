#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n=0;
	int sum = 0;
	char num[100];

	scanf("%d", &n);
	
	scanf("%s", num);

	for (int i = 0; i < n; i++) {
		sum += num[i] - '0';
	}

	printf("%d", sum);
	
	return 0;
}