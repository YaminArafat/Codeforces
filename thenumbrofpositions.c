#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if (a > b)
    {
        printf("%d",n-b+1);
    }
    else if (a < b)
    {
        printf("%d",n-b+1);
    }
    else if (a == b)
    {
        if (n % 2 == 0)
        {
            printf("%d",n-a+1);
        }
        else
        {
            printf("%d",n-a);
        }
    }
    return 0;
}
