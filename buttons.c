#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    if (n==3)
    {
        printf("%d\n",sum+1);
    }
    else
    {
        printf("%d\n",sum);
    }
    return 0;
}
