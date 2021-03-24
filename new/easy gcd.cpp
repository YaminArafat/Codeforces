#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long n,k,i,temp,val=0;
    scanf("%lld %lld",&n,&k);
    long long arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    if(n>1)
        temp=gcd(arr[0],arr[1]);
    else
        temp=arr[0];
    for (i=2; i<n; i++)
    {
        temp=gcd(arr[i],temp);
    }
    cout<<temp<<endl;
    //if (temp<=k)
    {
        val=(k/temp)*temp;
    }
    printf("%lld\n",val);
    return 0;
}
