#include <stdio.h>

int main(void) {
	int input, result = 0 , a, b, c, d=0;
	int count = 0;
	scanf_s("%d", &input);
	result = input;
	while (1) {
		a = (input / 10) + (input % 10);
		input = (input % 10) * 10 + (a % 10);
		count++;

		if (result == input)
			break;
		
	}
	printf("%d\n", count);
}