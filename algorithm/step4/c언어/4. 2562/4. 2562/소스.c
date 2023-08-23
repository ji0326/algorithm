#include <stdio.h>

int main(void) {

	int a[100];


	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &a[i]);
	}
	int max = a[0];
	int index = 0;

	for (int i = 0; i < 9; i++) {
		
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
		
	}
	printf("%d\n", max);
	printf("%d", index+1);
}