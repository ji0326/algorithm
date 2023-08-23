#include <stdio.h>

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(void) {
	int n, m;
	int a, b;
	int arr[101] = { 0, };
	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int i = 1; i <= m; i++) {
		scanf_s("%d %d", &a, &b);

		for (int j = 0; j <= (b - a)/2; j++) {
			swap(&arr[a + j], &arr[b - j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	
}