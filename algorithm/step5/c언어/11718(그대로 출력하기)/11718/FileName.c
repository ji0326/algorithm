#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	int lineCount = 0;

	while (1) {
		scanf("%c", &a);
		printf("%c", a);

		if (a == '\n') { // �Էµ� ���ڰ� ���� ������ ���
			lineCount++; // �� �� ����

			if (lineCount >= 100) { // 100�� �̻� �ԷµǾ��� ���
				break; // ���� ����
			}
		}
	}

	return 0;
}