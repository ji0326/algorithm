#include <stdio.h>

int main(void) {
    int A, B;
    int C;

    scanf_s("%d %d", &A, &B);
    scanf_s("%d", &C);

    if (B + C < 60) {
        printf("%d %d", A, B + C);
    }
    else {
        int hour = (B + C) / 60;
        int min = (B + C) % 60;
        if (hour + A < 24) {
            printf("%d %d", hour + A, min);
        }
        else {
            printf("%d %d", hour + A - 24, min);
        }
    }
}