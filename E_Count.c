#include <stdio.h>
#include <string.h>
int main()
{
    int temp = 0;
    char a[1000000];
    scanf("%s", a);
    a[strlen(a)] = '\0';
    for (int i = 0; a[i] != '\0'; i++)
    {
        temp = (temp + a[i])-48;
    }
    printf("%d\n", temp);

    return 0;
}