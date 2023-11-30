#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int value=strcmp(a,b);
    if (value == 0)
    {
       printf("A B are same\n");
    }
    else if (value > 0)
    {
        printf("B is small\n");
    }
    else
    {
        printf("A is small\n");
    }
    
    
    return 0;
}