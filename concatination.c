#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0,k=strlen(a);
    while (b[i] != '\0')
    {
       a[k]=b[i];
       k++;
       i++;
    }
    printf("%s ",a);
    return 0;
}