#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int T;
	int R;
	
	char s[1000];

	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, s);

		int n = 0;

		while (1) {
			for (int i = 0; i < R; i++) {
				printf("%c", s[n]);
			}
			n++;

			if (n == strlen(s)) {
				break;
			}
		}
		printf("\n");
	}

	return 0;
}