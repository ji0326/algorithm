#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf_s("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
}
/*
scanf("%d %d", &A, &B) != EOF�� while���� �ۼ��ϸ�
�����Ͱ� ���̻� �־����� ������(������ ���� �����ϸ�)
�ݺ����� �����ų �� �ֽ��ϴ�.
*/
