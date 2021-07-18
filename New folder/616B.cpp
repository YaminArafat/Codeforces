#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    int arr[n+2][m+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        sort(arr[i],arr[i]+m);
    }
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i][0]);
    }
    cout<<ans<<endl;
    return 0;
}
