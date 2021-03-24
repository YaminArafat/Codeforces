#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,nd,hv,for_a,for_b,mn;
    cin>>n>>a>>b;
    nd=n*6;
    hv=a*b;
    if(hv>=nd)
    {
        cout<<a*b<<endl<<a<<" "<<b<<endl;
        return 0;
    }
    mn=min(a,b);
    for(ll i=nd;; i++)
    {
        for(ll j=mn; j*j<=i; j++)
        {
            if(j*j==i && j>=a && j>=b)
            {
                cout<<i<<endl<<j<<" "<<j<<endl;
                return 0;
            }
            else if(i%j==0)
            {
                if((j>=a && (i/j)>=b))
                {
                    cout<<i<<endl<<j<<" "<<(i/j)<<endl;
                    return 0;
                }
                else if((j>=b && (i/j)>=a))
                {
                    cout<<i<<endl<<(i/j)<<" "<<j<<endl;
                    return 0;
                }
            }
        }
    }
    /*map<ll,pair<ll,ll> >mp;
    ll mod_a=nd%a;
    ll val=a-mod_a+nd;
    cout<<mod_a<<" "<<val<<endl;
    if(mod_a)
    {
        mp[val].first=a;
        mp[val].second=val/a;
    }
    else
    {
        //mp[nd].first=a;
        //mp[nd].second=nd/a;
        cout<<nd<<endl<<a<<" "<<nd/a<<endl;
        return 0;
    }
    cout<<mp[val].first<<" "<<mp[val].second<<endl;
    ll mod_b=nd%b;
    ll val_b=b-mod_b+nd;
    cout<<mod_b<<" "<<val_b<<endl;
    if(mod_b)
    {
        mp[val_b].first=val_b/b;
        mp[val_b].second=b;
    }
    else
    {
        mp[nd].first=nd/b;
        mp[nd].second=b;
        cout<<nd<<endl<<nd/b<<" "<<b<<endl;
        return 0;
    }
    cout<<mp[val_b].first<<" "<<mp[val_b].second<<endl;
    ll mn=min(val,val_b);
    cout<<mn<<endl<<mp[mn].first<<" "<<mp[mn].second<<endl;
    return 0;*/
}
