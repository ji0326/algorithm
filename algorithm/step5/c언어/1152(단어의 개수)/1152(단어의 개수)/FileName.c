#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000001];
	int count = 0;

	scanf("%[^\n]", str); // ������� �����Ͽ� ���ڿ� �Է¹ޱ�

	for (int i = 0; i < strlen(str); i++) {
		if (i == 0) {
			if (str[i] != ' ') { // str[0]�� ������ �ƴϸ� ����
				count++;
			}
		}
		if (str[i] != ' ' && str[i - 1] == ' ') { // str[i]�� ������ �ƴϰ� str[i-1]�� �����̸� ����
			count++;
		}
	}
	printf("%d", count);

	return 0;
}