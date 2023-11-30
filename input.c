#include <stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);
    int ln=strlen(b);
     printf("%d\n",ln);
    for (int i = 0; i <= ln; i++)
    {
        a[i] = b[i];
    }
    printf("%s", a);
    return 0; 
}