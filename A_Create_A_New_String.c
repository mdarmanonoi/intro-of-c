#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    scanf("%s", a);
    scanf("%s", b);
    int La = strlen(a);
    int Lb = strlen(b);
    printf("%d %d\n", La, Lb);
    printf("%s %s", a, b);
    return 0;
}