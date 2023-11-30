#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    int *ptr2=ptr;//ptr or &x ak e bujai
    *ptr=13;
    printf("x er address:%p\n",&x);
    printf("ptr er value:%p\n",ptr);
    printf("x er size:%d\n",sizeof(ptr));
    printf("x er value:%d\n",*ptr);
    printf("ptr2 er value:%p\n",ptr2);
    printf("ptr2 er dereference value:%d\n",*ptr2);
    //ptr er value e hosse x er address..

    return 0;
}