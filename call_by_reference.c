#include <stdio.h>
void fun(int *x)
{
    *x=100;
    printf("fun er x er adress-%p\n", x);
    printf("fun er x er value-%d\n", *x);
}
int main()
{
    int x = 10;
    printf("main er x er adress-%p\n",&x);
    printf("main er x er value-%d\n",x);
    fun(&x);
    printf("main er x er value-%d\n",x);
    return 0;
}