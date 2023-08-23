#include <stdio.h>


int arr[101] = { 0, };


void swap(int a, int b) {
	int tmp;
	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int main(void) {
	int a, b;
	int n, m;
	int arr[101] = { 0, };
	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 1; i <= m; i++) {
		scanf_s("%d %d", &a, &b);
		swap(a, b);
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}