#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0, count = 0;
	char word[101];
	char a[26] = { 0, };

	scanf("%d", &n); // �ܾ��� ���� n

	for (int i = 0; i < n; i++) {
		scanf("%s", word);

		int len = strlen(word);
		for (int i = 0;i < 26; i++) {
			a[i] = 0;
		}

		// �׷� �ܾ� üũ
		for (int i = 0; i < len; i++) {
			char b = word[i]; // ���� ����
			if (a[b - 'a'] == 0) {
				a[b - 'a'] = 1; // ���� ���ڰ� ó�� ���� ���� ǥ��
			}
			else { // ���� ���ڰ� �̹� ������ ���
				// �ٷ� ���� ���ڿ� �ٸ� ��� �׷� �ܾ �ƴϹǷ� ó�� �ߴ�
				if (word[i - 1] != word[i]) {
					break;
				}
			}

			// �ܾ��� ������ ��ȸ�� ��� �׷� �ܾ�� ó���ϰ� count ����
			if (i == len - 1) {
				count++;
			}
		}
		
	}
	printf("%d", count);

	return 0;
}