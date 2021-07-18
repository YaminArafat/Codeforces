#include <bits/stdc++.h>
#define maxxx 1000000
using namespace std;
vector<long long>prime;
vector<long long>segmented_Primes;
void seive(long long y,long long p)
{
    bool flag[y];
    memset(flag,0,sizeof(flag));
    for (long long i=3;i*i<=y;i+=2)
    {
        if(!flag[i])
        {
            for (long long j=i*i;j<=y;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    for(int i=4;i<=y;i+=2)
    {
        flag[i]=1;
    }
    /*prime.push_back(2);
    for(long long i=3;i<=maxxx;i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }*/
    int f=0;
    for(long long i=y;i>=2;i--)
    {
        if(!flag[i] && i>p)
        {
            cout<<i<<endl;
            f=1;
            break;
        }
    }
    if (!f)
    {
        cout<<"-1"<<endl;
    }
}
void seive1()
{
    bool flag[maxxx];
    memset(flag,0,sizeof(flag));
    for (long long i=3;i*i<=maxxx;i+=2)
    {
        if(!flag[i])
        {
            for (long long j=i*i;j<=maxxx;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(long long i=3;i<=maxxx;i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }
    /*for(long long i=y;i>=2;i--)
    {
        if(!flag[i])
        {
            cout<<i<<endl;
            break;
        }
    }*/
}
void segmented_Sieve(long long l,long long u,vector<long long>&prime,long long p)
{
    bool flag[u-l+1];
    memset(flag,0,sizeof(flag));
    for (long long i=0;(prime[i]*prime[i])<=u;i++)
    {
        long long curr_Prime=prime[i];
        long long base_Val=(l/curr_Prime)*curr_Prime;
        if(base_Val<l)
        {
            base_Val+=curr_Prime;
        }
        for(long long j=base_Val;j<=u;j+=curr_Prime)
        {
            if(!flag[j-l])
            flag[j-l]=1;
        }
        if(base_Val==curr_Prime)
        {
            flag[base_Val-l]=0;
        }
    }
    if(l<2)
    {
        flag[l-l]=1;
    }
    int f=0;
    for(long long i=u-l;i>=0;i-=1)
    {
        if(!flag[i] && i+l>p)
        {
            cout<<i+l<<endl;
            f=1;
            break;
        }
    }
    if (!f)
    {
        cout<<"-1"<<endl;
    }
}
int main()
{
    long long int p,y,f=0;
    cin>>p>>y;
    if(y>maxxx)
    {
        seive1();
        segmented_Sieve(1000000,y,prime,p);
    }
    else
    {
        seive(y,p);
    }
    return 0;
}
