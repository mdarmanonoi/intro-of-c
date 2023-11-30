#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        if (y > z)
        {
            printf("%d %d\n", z, x);
        }
        else
        {
             printf("%d %d\n", y, x); 
        }
    }
    else if (y > x && y > z)
    {
        if (x > z)
        {
            printf("%d %d\n", z, y);
        }
        else
        {
            printf("%d %d\n", x, y); 
        }
    }
    else if (z > x && z > y)
    {
        if (x > y )
        {
            printf("%d %d\n",y , z);
        }
        else
        {
             printf("%d %d\n", x,z );
        }
    }
    else if (x == y || x == z || y == z)
    {
       if (x==y)
       {
         printf("%d %d\n", z,x );
       }
       else if(x==z)
       {
        printf("%d %d\n", y,x );
       }
       else
       {
        printf("%d %d\n", x,y );
       }
       
    }
    
    else
    {
        printf("%d %d\n",x,y);
    }


}