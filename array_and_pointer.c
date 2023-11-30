#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    printf("address of ar[0]=%p\n", &ar[0]);
    printf("address of ar[0]=%p\n", (ar + 0));
    printf("value of ar[0]=%d\n", *(ar + 0));
    printf("value of ar[1]=%d\n", *(1 + ar));
    printf("value of ar[1]=%d\n",1[ar]);
    return 0;
}