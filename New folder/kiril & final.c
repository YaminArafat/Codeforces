#include <stdio.h>
int main()
{
    long long int l,r,x,y,k,i,a=0;
    scanf("%lld %lld %lld %lld %lld",&l,&r,&x,&y,&k);
    for (i=x; i<=y; i++)
    {
        if ((i*k) >=l && (i*k) <=r)
        {
            a++;
        }
        if (a>0)
        {
            break;
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
    return 0;
}
