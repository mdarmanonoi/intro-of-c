#include<stdio.h>
int main()
{
    int a[5];
   int cz=sizeof(a)/sizeof(int);
   printf("%d %d\n",cz,sizeof(a));
    return 0;
}