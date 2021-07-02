#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum=0;
    cin>>n;
    ll arr[n+5];
    map<ll,ll>mp,flag;
    for (ll i=0; i<n; i++)
    {
        cin>>arr[i];
        for(ll j=arr[i]; j>=1; j--)
        {
            if(!flag[j])
            {
                sum+=j;
                flag[j]=1;
                break;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
