#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000001];
	int a[26] = { 0, };
	int count = 0, size = 0;

	scanf("%s", str);
	size = strlen(str);
	
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'a') ++a[str[i] - 'a'];
		else ++a[str[i] - 'A'];
	}

	int max = 0, idx;
	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			idx = i;
			count = 1;
		}
		else if (a[i] == max) {
			count++;
		}
	}

	if (count > 1)printf("?\n");
	else printf("%c", idx + 'A');

	return 0;
}