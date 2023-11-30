#include <stdio.h>
int main()
{
    int a = 12, b = 24;
    int sum = a + b;
    printf("%d", sum);

    int a = 12, b = 24;
    int sub = a - b;
    printf("%d", sub);

    int a = 12, b = 24;
    int mul = a * b;
    printf("%d", mul);

    int a = 3, b = 25;
    float div = b * 1.0 / a;
    printf("%.2f", div);

    int a = 3, b = 25;
    int mod = b % a;
    printf("%d", mod);
}