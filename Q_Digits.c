#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        do
        {
            printf("%d ", a % 10);
            a = a / 10;
        } 
        while (a != 0);
        printf("\n");

        // if (a == 0)
        // {
        //     printf("0\n");
        // }
        // else
        // {
        //     while (a != 0)
        //     {
        //         int x = a % 10;
        //         a = a / 10;
        //         printf("%d ", x);
        //     }
        //     printf("\n");
        // }
    }

    return 0;
}