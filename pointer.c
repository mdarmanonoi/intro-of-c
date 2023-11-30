#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    int *p=&x;//pointer declaration
    printf("%p\n",p);
    printf("%d\n",*p);//dereference
    return 0;
}