#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
long long unsigned int fibo(long long unsigned int n)
{
    long long unsigned int a=0,b=1,c,i;
    if (n==0)
    {
        return 0;
    }
    for (i=2; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
long long unsigned int gcd(long long unsigned int x,long long unsigned int y)
{
    long long unsigned int a=x;
    long long unsigned int b=y;
    long long unsigned int r;
    while (r!=0)
    {
        long long unsigned int ans=x/y;
        r=x-(ans*y);
        if (r!=0)
        {
            x=y;
            y=r;
        }
    }
    return y;
}
int main()
{
    long long unsigned int n,t,i,temp;
    cin>>t;
    long long unsigned int array[t];
    for (i=0; i<t; i++)
    {
        cin>>array[i];
        array[i]=fibo(array[i]);
    }
    temp=gcd(array[0],array[1]);
    if(t>=2)
    {
        for (i=2; i<t; i++)
        {
            temp=gcd(array[i],temp);
        }
    }
    cout<<temp%1000000007<<endl;
    return 0;
}
