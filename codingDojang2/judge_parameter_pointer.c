#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getQuotientAndRemainder(int num1, int num2, int* remainder) {
    int quotient = num1 / num2;
    *remainder = num1 % num2;
    return quotient;
}

int main()
{
    int num1;
    int num2;
    int quotient;     // ��
    int remainder;    // ������

    scanf("%d %d", &num1, &num2);

    quotient = getQuotientAndRemainder(num1, num2, &remainder);

    printf("%d %d\n", quotient, remainder);

    return 0;
}