#include <stdio.h>
int main()
{
    int n,k,t,i;
    scanf("%d %d %d",&n,&k,&t);
    if (t<=n)
    {
        if (t<=k)
        {
            printf("%d\n",t);
        }
        else
        {

            printf("%d\n",k);
        }
    }
    else
    {
        for (i=n; i<t; i++)
        {
            k--;
        }
        printf("%d\n",k);
    }
return 0;
}
