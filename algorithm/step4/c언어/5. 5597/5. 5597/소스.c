#include <stdio.h>

int main(void) {

	int num[31] = { 0, };
	int k=0;

	for (int i = 1; i <= 28; i++) {
		scanf_s("%d", &k);
		num[k] = 1;

	}
	
	for (int j = 1; j <= 30; j++) {
		if (num[j] == 0) {
			printf("%d \n", j);
		}
	}
	

}