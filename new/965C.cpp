#include <bits/stdc++.h>
using namespace std;
long long bs(long long n,long long k,long long m,long long d)
{
    long long hgh=m;
    long long low=1,tmp=0;
    while(low<=hgh)
    {
        long long mid=(low+hgh)/2;
        /*if((low+hgh)%2)
        {
            mid++;
        }*/
        int x=n/mid;
        int y=x/k;
        if(x%k)
            y++;
        cout<<y<<endl;
        if(y>k && y*mid>tmp)
        {

            tmp=y*mid;
            cout<<tmp<<endl;
            hgh=mid-1;
        }
        else if (y<=k && mid>tmp)
        {
            tmp=mid;
            low=mid+1;
        }

    }
    return tmp;
}
int main()
{
    long long n,k,m,d;
    scanf("%lld %lld %lld %lld",&n,&k,&m,&d);
    printf("%lld\n",bs(n,k,m,d));
}
