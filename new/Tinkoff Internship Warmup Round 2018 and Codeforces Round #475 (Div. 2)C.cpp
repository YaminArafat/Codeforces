#include <bits/stdc++.h>
using namespace std;
long long int bigmod(long long int b,long long int p,long long int m)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        long long int x=bigmod(b,p/2,m);
        long long int ans=((x%m)*(x%m))%m;
        return ans;
    }
    if(p%2!=0)
    {
        return ((b%m)*bigmod(b,p-1,m)%m)%m;
    }
}
int main()
{
    long long int n,a,b,p=0,k,x,y,m=1000000009,sum=0;
    string str;
    scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
    cin>>str;
    for(int i=0; i<=n; i++)
    {
        x=bigmod(a,n-i,m);
        y=bigmod(b,i,m);
        //cout<<x<<" "<<y<<endl;
        if(str[p]=='-')
        {
            sum-=((x%m)*(y%m)%m);
            //cout<<sum<<endl;
        }
        else
        {
            sum+=((x%m)*(y%m)%m);
        }
        if(sum<0)
        {
            if(abs(sum)>m)
            {
                long long f=(abs(sum)/m)*m;
                f+=m;
                sum+=f;
                sum%=m;
            }
            else
            {
                sum+=m;
            }
        }
        else
        {
            sum%=m;
        }
        p++;
        if(p==str.size())
        {
            p=0;
        }
    }
    //cout<<sum<<endl;
    printf("%lld\n",sum);
    return 0;
}


