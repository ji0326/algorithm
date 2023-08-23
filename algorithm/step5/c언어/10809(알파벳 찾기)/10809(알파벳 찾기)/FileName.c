#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[100];
	char s[26];
	int index;

	for (int i = 0; i < 26; i++) {
		s[i] = -1;
	}

	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		index = arr[i] - 'a';

		if (s[index] == -1) {
			s[index] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", s[i]);
	}

	return 0;
}