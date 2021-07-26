#include <stdio.h>
int main()
{
    long long int l,r,x,y,i,j;
    int k,a=0;
    scanf("%lld %lld %lld %lld %d",&l,&r,&x,&y,&k);
    if (x>r)
    {
        printf("NO\n");
    }
    else
    {
        for (i=l; i<=r; i++)
        {
            while (x != y)
            {
                if ((i/x) == k)
                {
                    a++;
                }
                if (a>0)
                {
                    break;
                }
                x++;
            }
        }
        if (a>0)
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
