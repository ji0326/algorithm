#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[51];
	double score;
	char grade[3];

	double result = 0.0;
	double sub_score = 0.0;
	double temp;
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", name, &score, grade);


		if (grade[0] == 'P') continue;
		
		sub_score += score;

		if (grade[0] == 'F') continue;



		if (grade[0] == 'A') temp = 4;
		else if (grade[0] == 'B') temp = 3;
		else if (grade[0] == 'C') temp = 2;
		else temp = 1;

		if (grade[1] == '+') temp += 0.5;


		result += score * temp;

	}
	
	printf("%lf", result / sub_score);

	return 0;
}