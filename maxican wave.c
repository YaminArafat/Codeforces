#include <stdio.h>
int main()
{
    int n,k,t,j=0,i,x=0;
    scanf("%d %d %d",&n,&k,&t);
    if (t<=n)
    {
        for (i=1; i<=n; i++)
        {
            if (t<=k)
            {
                if (i == t)
                {
                    printf("%d\n",i);
                    break;
                }
            }
            else
            {
                if (i > k)
                {
                    j++;
                    if (i == t)
                    {
                        printf("%d\n",i-j);
                        break;
                    }
                }
            }
        }
    }
    else
    {
        for (i=1; i<=n+k; i++)
        {
            if (i > k)
            {
                j++;
                if (i > n)
                {
                    x++;
                    if (i == t)
                    {
                        printf("%d\n",i-j-x);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
