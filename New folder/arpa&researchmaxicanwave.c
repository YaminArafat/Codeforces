#include <stdio.h>
int main()
{
    int n,k,t,sum=0,j=0,i,x=0;
    scanf("%d %d %d",&n,&k,&t);
    for (i=1; i<=n+k; i++)
    {
        if (t<=n)
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
        else
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
