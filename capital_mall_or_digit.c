#include <stdio.h>
int main()
{
    char x='9';
    scanf("%c", &x);
    if (x >=48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (x >= 65 && x <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (x >= 97 && x <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
}