#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char Flind[101];
	int count = 0;
	bool result = true;

	scanf("%s", Flind);

	for (int i = 0; i < strlen(Flind)/2; i++) {
		if (Flind[i] != Flind[strlen(Flind) - 1 - i]) {
			result = false;
		}
	}

	if (result) printf("1");
	else printf("0");

	return 0;
}