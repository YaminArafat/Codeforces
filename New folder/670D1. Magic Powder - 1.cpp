#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mx=0,mn=INT_MAX,ans,sum=0;
    cin>>n>>k;
    int lagbe[n+5],ase[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>lagbe[i];
        sum+=lagbe[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>ase[i];
        mx=max(mx,ase[i]/lagbe[i]);
        mn=min(mn,ase[i]/lagbe[i]);
    }
    cout<<mx<<" "<<mn<<endl;
    if(mx==mn)
    {
        ans=mx+(k/sum);
    }
    else
    {
        for(int i=mx; i>=mn; i--)
        {
            int tmp=k,j=0;
            for(; j<n; j++)
            {
                int x=((lagbe[j]*i)-ase[j]);
                if(tmp<x)
                    break;
                if(x>0 && tmp>=x)
                    tmp-=x;
                cout<<j<<" "<<x<<" "<<tmp<<endl;
            }
            if(j==n)
            {
                ans=i;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
