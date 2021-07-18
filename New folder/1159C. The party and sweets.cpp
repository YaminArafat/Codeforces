#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll>mp;
int main()
{
    ll n,m,sum=0,ok=0;
    ll mn=LONG_LONG_MAX,mx=0,mn2=LONG_LONG_MAX;
    ll no=0;
    cin>>n>>m;
    ll arrn[n+5],arrm[m+5];
    for(int i=0; i<n; i++)
    {
        cin>>arrn[i];
        mn=min(mn,arrn[i]);
        if(arrn[i])
            ok++;
    }
    priority_queue<ll>pq;
    for(int i=0; i<m; i++)
    {
        cin>>arrm[i];
        mx=max(mx,arrm[i]);
        mn2=min(mn2,arrm[i]);
        if(!arrm[i])
            no++;
        pq.push(arrm[i]);
    }
    if((ok&&no)||mn>mx)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(arrn[i]>mn2)
            continue;
        ll k=pq.top(),g=0;
        if(pq.empty())
            sum+=arrn[i]*m;
        else
        {
            while(!pq.empty() && ((pq.top()==k)||(pq.top()==arrn[i] )))
            {
                sum+=pq.top();
                pq.pop();
                g++;
            }
            sum+=(m-g)*arrn[i];
        }
    }
    cout<<sum<<endl;
}
