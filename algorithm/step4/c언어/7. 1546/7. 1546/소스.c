#include <stdio.h>

int main(void) {
	int st;
	double grade[1000]; // 강민서는 바보다 --> 문제 잘봐라 --> 강민서 정처기 문제 비내려
	int max = 0;
	int result = 0;
	scanf_s("%d", &st);
	

	for (int i = 0; i < st; i++) {
		scanf_s("%lf", & grade[i]);

		result += grade[i];

		if (max < grade[i]) {
			max = grade[i];
		}
	}

	printf("%lf", (double)result * 100 / st / max);

	
	
}