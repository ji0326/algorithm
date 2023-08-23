#include <stdio.h>

int main(void) {

    int a;
    int b[100];
    int c;
    int count = 0;

    scanf_s("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf_s("%d", &b[i]);
    }

    scanf_s("%d", &c);

    for (int j = 0; j < a; j++) {
        if (b[j] == c) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}