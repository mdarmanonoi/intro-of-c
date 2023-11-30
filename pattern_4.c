#include <stdio.h>
int main()
{
    int n, s1, k1 = 1;
    scanf("%d", &n);
    s1 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= k1; k++)
        {
            printf("* ");
        }
        printf("\n");
        s1--;
        k1++;
    }
    int s2=1,k2=n-1;
    for (int i = 1; i <= n-1; i++)
    {
       for (int j = 1; j <= s2 ; j++)
       {
        printf(" ");
       }
       for (int k = 1; k <= k2; k++)
       {
        printf("* ");
       }
       s2++;
       k2--;
       printf("\n");
    }
    
    return 0;
}