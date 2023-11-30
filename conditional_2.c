#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Burger khabo:");
    }
    else if(tk >= 50)
    {
        printf("Fuckha khabo:");
    }
    else if(tk >= 20)
    {
        printf("Icecrem khabo;");
    }
    else
    {
        printf("Bari jbao..kisu khabo naa:");
    }
    return 0;
}