#include<stdio.h>
void fun(int x)
{
    x=100;
    printf("fun er x=%d\n",x);
}
int main()
{
    int x=10;
    fun(x);
    printf("main er x=%d\n",x);
    return 0;
}