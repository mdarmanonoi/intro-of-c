#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr1[a], arr2[b], ans[a + b];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < a; i++)
    {
        ans[i]=arr1[i];
    }
    int i=a,j=0;
    while (i < a+b)
    {
       ans[i]=arr2[j];
       i++;
       j++;
    }
    for (int i = 0; i < a+b; i++)
    {
       printf("%d ",ans[i]);
    }
    
    

    return 0;
}