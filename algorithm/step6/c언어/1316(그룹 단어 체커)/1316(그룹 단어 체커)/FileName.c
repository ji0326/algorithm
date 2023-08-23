#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0, count = 0;
	char word[101];
	char a[26] = { 0, };

	scanf("%d", &n); // 단어의 개수 n

	for (int i = 0; i < n; i++) {
		scanf("%s", word);

		int len = strlen(word);
		for (int i = 0;i < 26; i++) {
			a[i] = 0;
		}

		// 그룹 단어 체크
		for (int i = 0; i < len; i++) {
			char b = word[i]; // 현재 문자
			if (a[b - 'a'] == 0) {
				a[b - 'a'] = 1; // 현재 문자가 처음 등장 여부 표시
			}
			else { // 현재 문자가 이미 등장한 경우
				// 바로 이전 문자와 다른 경우 그룹 단어가 아니므로 처리 중단
				if (word[i - 1] != word[i]) {
					break;
				}
			}

			// 단어의 끝까지 순회한 경우 그룹 단어로 처리하고 count 증가
			if (i == len - 1) {
				count++;
			}
		}
		
	}
	printf("%d", count);

	return 0;
}