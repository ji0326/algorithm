#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf_s("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
}
/*
scanf("%d %d", &A, &B) != EOF를 while문에 작성하면
데이터가 더이상 주어지지 않으면(파일의 끝에 도달하면)
반복문을 종료시킬 수 있습니다.
*/
