#include <bits/stdc++.h>
using namespace std;
int arr[150005];
int main()
{
    int n,k,x,mn=INT_MAX,ans;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i+1]=arr[i]+x;
    }
    for(int i=k;i<=n;i++)
    {
        x=arr[i]-arr[i-k];
        if(mn>x)
        {
            mn=x;
            ans=i-k+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
