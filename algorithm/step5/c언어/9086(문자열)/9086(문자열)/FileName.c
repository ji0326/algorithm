#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int T;
	char S[1000] = { '\0',};

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%s", &S);
		printf("%c%c\n", S[0], S[strlen(S)-1]);
	}
	return 0;
}