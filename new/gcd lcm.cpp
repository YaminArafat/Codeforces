#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    unsigned long long int t, g, l, a, b,i, j,z,k,x,y,p;
    while(1==scanf("%llu",&t))
    {
        while(t--)

        {
            p=0;
            z=0;
            scanf("%llu %llu",&x,&y);
            g=(x>=y)?y:x;
            l=(x>=y)?x:y;
            for(i=1; i*i<=l; i++)
            {
                k=0;
                if(l%i==0)
                {

                    k=1;
                    b = l/i ;
                    b=b*g;
                }
                else if (g%i==0)
                {
                    k=1;
                    b=g/i;
                    b=b*l;
                }


                if(k&&__gcd(b,i)==g)
                {
                    z=1;
                    break;

                }







            }


            if(z==0)
            {

                printf("-1\n");

            }
            else
            {
                a=i;
                printf("%llu %llu\n",a,b);
            }


        }
    }
    return 0;
}
