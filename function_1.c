#include<stdio.h>
// return_type name(parameter)
// {
//  code;
//  return what;
// }
int sum(int x,int y)
{
    int jog=x+y;
    return jog;
}
int main()
{
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(10,67));
    return 0;
}