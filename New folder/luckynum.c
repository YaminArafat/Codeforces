#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    if (n<11)
    {
        if (n%10==4 || n%10==7)
        {
            printf("YES\n");
        }
        else if (n%4==0 || n%7==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if (n>10 && n<100)
    {
        if ((n)%10==4 || (n)%10==7)
        {
            printf("YES\n");
        }
        else if (n%4==0 || n%7==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if (n>99)
    {
        if ((n/10)%4==0 || (n/10)%7==0)
        {
            printf("YES\n");
        }
        else if ((n/100)%10==4 || (n/100)%10==7)
        {
            printf("YES\n");
        }
        else if (n%4==0 || n%7==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
