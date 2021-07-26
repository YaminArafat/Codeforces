#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    while(1)
    {
        if(!a||!b)
        {
            printf("%lld %lld\n",a,b);
            break;
        }
        if(a>=2*b)
        {
            if((a%(b*2))==0)
            {
                printf("%lld %lld\n",(a%(b*2)),b);
                break;
            }
            else
            {
                a=a%(b*2);
            }
        }
        if(b>=2*a)
        {
            if((b%(a*2))==0)
            {
                printf("%lld %lld\n",a,(b%(a*2)));
                break;
            }
            else
            {
                b=b%(a*2);
            }
        }
        else if(b<2*a)
        {
            printf("%lld %lld\n",a,b);
            break;
        }
    }
    return 0;
}
