#include <bits/stdc++.h>
using namespace std;
long long lagbe[1000005],ase[1000005],n,k;
bool tru(long long val)
{
    long long tmp=k;
    for(int i=0;i<n;i++)
    {
        long long total=lagbe[i]*val;
        if(total>ase[i])
        {
            tmp-=total-ase[i];
        }
        if(tmp<0)
            return false;
    }
    return true;
}
int main()
{
    long long l=0,h=2000000009,m,ans;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>lagbe[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>ase[i];
    }
    m=(l+h)/2;
    while(l<=h)
    {
        if(tru(m))
        {
            ans=m;
            l=m+1;
        }
        else
        {
            h=m-1;
        }
        m=(l+h)/2;
    }
    cout<<ans<<endl;
    return 0;
}

