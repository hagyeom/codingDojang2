#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int getSum(const char* format, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == 'i')
        {
            int num = va_arg(args, int);
            sum += num;
        }

        format++;
    }

    va_end(args);

    return sum;
}

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", getSum("isi", num1, "C", 10));
    printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
    printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
    printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));

    return 0;
}