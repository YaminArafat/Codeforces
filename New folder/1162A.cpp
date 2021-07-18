#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,l,r,x,ans=0;
    cin>>n>>h>>m;
    int arr[n+10];
    for(int i=1;i<=n;i++)
    {
        arr[i]=h;
    }
    for(int i=0;i<m;i++)
    {
        cin>>l>>r>>x;
        for(int j=l;j<=r;j++)
        {
            arr[j]=min(arr[j],x);
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans+=powl(arr[i],2);
    }
    cout<<ans<<endl;
    return 0;
}
