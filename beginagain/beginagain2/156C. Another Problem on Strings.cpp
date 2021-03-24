#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[1000005];
int main()
{
    ll k,sz,ans=0,tmp,cnt=0;
    cin>>k;
    string s;
    cin>>s;
    sz=s.size();
    if(!k)
    {
        for(ll i=0; i<sz; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                cnt=cnt*(cnt+1);
                ans+=cnt/2;
                cnt=0;
            }
        }
        cnt=cnt*(cnt+1);
        ans+=cnt/2;
        cout<<ans<<endl;
        return 0;
    }
    map<ll,ll>mp;
    for(ll i=0; i<sz; i++)
    {
        if(s[i]=='1')
        {
            if(i>0)
                arr[i]+=arr[i-1]+1;
            else
                arr[i]=1;
        }
        else
        {
            if(i>0)
                arr[i]+=arr[i-1];
            else
                arr[i]=0;

        }
        mp[arr[i]]++;
    }
    tmp=k;
    //ans+=mp[0]*mp[tmp];
    for(ll i=0; i<sz; i++)
    {
        //cout<<ans<<" "<<tmp<<endl;
        if(s[i]=='0')
            ans+=mp[tmp];
        else
            ans+=mp[tmp++];
        //cout<<ans<<" "<<tmp<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
