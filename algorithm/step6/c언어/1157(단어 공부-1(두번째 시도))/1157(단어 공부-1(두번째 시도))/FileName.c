#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char str[1000001];
	int a[26] = { 0 };
	int count = 0, size = 0;

	scanf("%s", str);
	size = strlen(str);

	// 입력 문자열을 대문자로 변환
	for (int i = 0; i < size; i++) {
		str[i] = toupper(str[i]);
	}

	for (int i = 0; i < size; i++) {
		++a[str[i] - 'A'];
	}

	int max = a[0], idx = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			idx = i;

		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == a[i]) count++;
	}

	if (count > 1)
		printf("?");
	else
		printf("%c", idx + 'A');

	return 0;
}