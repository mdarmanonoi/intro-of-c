#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk == 100)
    {
        printf("ami barger khabo;");
    }
    else
    {
        printf("ami burger khabo na:");
    }

    if (tk >= 100)
    {
        printf("ami burger khabo;");
    }
    else
    {
        printf("Ami burger khabo na:");
    }
    return 0;
}