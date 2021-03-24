#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,x;
ll arr[100005],sum[100005];
ll b_srch(ll x)
{
    ll low=1,high=n;
    ll mid=(low+high)/2;
    while(low<high)
    {
        /*if(p<sum[low])
            return low;

        if(p>sum[low] && p<sum[high])
        {
            if(mid==low)
                return high;
            else if (mid==high)
                return high;
        }*/
        if(sum[mid]==x)
            return mid;
        if(sum[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    if(sum[low]>=x)
        return low;
    else
        return low+1;
}
int main()
{
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        sum[i+1]+=sum[i]+arr[i];
    }
    cin>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>x;
        cout<<b_srch(x)<<endl;;
    }
    return 0;
}
