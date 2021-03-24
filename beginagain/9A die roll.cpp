#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,mx,n,d=6,gcd;
    cin>>y>>w;
    mx=max(y,w);
    n=6-mx+1;
    gcd=__gcd(n,d);
    if(d%n==0)
    {
        d=d/n;
        n=1;
    }
    else if(gcd>1)
    {
        d=d/gcd;
        n/=gcd;
    }
    cout<<n<<"/"<<d<<endl;
}
