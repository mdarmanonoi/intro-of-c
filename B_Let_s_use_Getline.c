#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    fgets(a,1000000,stdin);
    a[strlen(a)]='\0';
    for (int i = 0; a[i] != '\\'; i++)
    {
       printf("%c",a[i]);
    }
    
    return 0;
}