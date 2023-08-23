#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
	char tmp = str[0];
	str[0] = str[2];
	str[2] = tmp;
}

int main(void) {
	char A[4];
	char B[4];
	char tmp;

	scanf("%s %s", A, B);
	
	reverse(A);
	reverse(B);

	if (strcmp(A,B)>0) {
		printf("%s", A);
	}
	else {
		printf("%s", B);
	}
	return 0;
}