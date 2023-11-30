#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int div=n/1000;
    if (div % 2 == 0)
    {
      printf("EVEN\n") ;
    }
    else
    {
        printf("ODD\n");
    }
    
}