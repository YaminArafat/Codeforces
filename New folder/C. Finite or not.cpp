#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long p,q,b;
    while (n--)
    {
        scanf("%lld %lld %lld",&p,&q,&b);
        long double d=(double)p/(double)q;
        int main=(int)d;
        double frac=d-main;
        string ans;
        if(!frac)
        {
            printf("Finite\n");
            cout<<1<<endl;
        }
        else
        {
            if(b==10)
            {
                if(isfinite(d))
                {
                    printf("Finite\n");
                }
                else
                {
                    printf("Infinite\n");
                }
            }
            else
            {
A:
                while(frac<1)
                {
                    frac*=b;
                }
                int g=(int)frac;
                ans+=g;
                double h=frac-g;
                if(!h)
                {
                    printf("Finite\n");
                }
                else if(h)
                {
                    frac=h;
                    if(ans.size()<10)
                        goto A;
                    else
                        printf("Infinite\n");
                }
            }
            /*if(isfinite(d))
            {
                printf("Finite\n");
            }
            else
            {
                printf("Infinite\n");
            }*/
        }
    }
}
