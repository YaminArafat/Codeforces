#include <bits/stdc++.h>
using namespace std;
bool st[1000000];
void seive(void)
{
st[1]=1;
    int i, j;
    for( i = 4 ; i <= 1000000 ; i+=2 )
    {
        st[i]=1;
        //cout<<vec[i]<<endl;

    }
    for(i=3; i<=1000; i+=2)
    {

        if (st[i]==0)
            for(j=i*i; j<=1000000; j+=2*i)
            {
                st[j]=1;

            }
//cout<<st[i]<<endl;
    }
}
int main()
{

    seive();
    long long int n, temp, count=0,i,sum=1;
    double m;
    while(1==scanf("%lld",&n))
    {

        while(n--)
        {
            scanf("%lld",&temp);

        m = sqrtl(temp);
        if(m - (int)m == 0 && st[(int)m]==0)printf("YES\n");
        else printf("NO\n");
        }
    }
    return 0;

}
