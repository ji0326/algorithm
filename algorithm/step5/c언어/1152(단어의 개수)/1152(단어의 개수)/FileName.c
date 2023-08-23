#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000001];
	int count = 0;

	scanf("%[^\n]", str); // 공백까지 포함하여 문자열 입력받기

	for (int i = 0; i < strlen(str); i++) {
		if (i == 0) {
			if (str[i] != ' ') { // str[0]이 공백이 아니면 증가
				count++;
			}
		}
		if (str[i] != ' ' && str[i - 1] == ' ') { // str[i]가 공백이 아니고 str[i-1]이 공백이면 증가
			count++;
		}
	}
	printf("%d", count);

	return 0;
}