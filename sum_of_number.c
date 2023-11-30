#include <stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    scanf("%d", &sum);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
              flag=1;
            }
            
        }

        
    }
    if (flag==0)
    {
      printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
      
    return 0;
}