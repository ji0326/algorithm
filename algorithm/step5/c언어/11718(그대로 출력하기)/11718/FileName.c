#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	int lineCount = 0;

	while (1) {
		scanf("%c", &a);
		printf("%c", a);

		if (a == '\n') { // 입력된 문자가 개행 문자인 경우
			lineCount++; // 줄 수 증가

			if (lineCount >= 100) { // 100줄 이상 입력되었을 경우
				break; // 루프 종료
			}
		}
	}

	return 0;
}