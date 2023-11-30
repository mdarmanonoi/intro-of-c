#include<stdio.h>
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("hello end\n");
}
int main()
{
    printf("main stsrt\n");
    hello();
    printf("main end\n");
    return 0;
}