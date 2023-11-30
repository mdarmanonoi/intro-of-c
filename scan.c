#include<stdio.h>
int main()
{
    int num,num1;
    scanf("%d %d",&num,&num1);
    printf("%d %d",num,num1);

    float num,num1;
    scanf("%f %f",&num,&num1);
    printf("%.2f %.2f",num,num1);

    int num,num1;
    char c;
    scanf("%d%c %d%c",&num,&c,&num1,&c);
    printf("%d%% %d%%",num,num1);

    int num,num1;
    scanf("%dx %dy",&num,&num1);
    printf("%dx %dy",num,num1);
 }